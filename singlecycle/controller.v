`include "Defines.vh"
module controller(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    input branch_taken,
    output reg [2:0] o_mem_read,          //Memory Read Enable
    output reg [1:0] o_mem_write,         //Memory Write Enable
    output reg [1:0] o_Wb_sel,            // 00: from ALU, 01: from Memory, 10: from PC+4
    output reg ALU_a_source,              // 0: from rs1, 1: from pc
    output reg ALU_b_source,              // 0: from rs2, 1: from immediate
    output reg [2:0] imm_type,            // R, I, S, B, U, J
    output reg [4:0] alu_code,            // ALU operation code
    output reg flag_beq, flag_bne, flag_blt, flag_bge, flag_bltu, flag_bgeu,    // Branch Equal, Branch Not Equal, Branch Less Than
    output reg regfile_write_enable,       // Register File Write Enable
    output reg PCsel                   // 0: PC+4, 1: Branch/JAR taken
);

always @(*) begin
    // Default values
    o_mem_write      = 2'b00;
    o_mem_read       = 3'b000;
    o_Wb_sel      = 2'b00; // From ALU
    ALU_a_source  = 0;
    ALU_b_source  = 0;
    flag_beq = 0;
    flag_bne = 0;
    flag_blt = 0;
    flag_bge = 0;
    flag_bltu = 0; 
    flag_bgeu = 0;
    imm_type    = `IMM_R;
    regfile_write_enable = 0;
    PCsel = 1'b0;
    if(branch_taken)
        PCsel = 1'b1;
    else
        PCsel = PCsel; // retain previous value
    case (opcode)
        `OPC_OP: begin
            imm_type = `IMM_R;
            regfile_write_enable = 1;
            case({funct7,funct3})
                10'b0000000_000: alu_code = `ALU_ADD; // ADD
                10'b0100000_000: alu_code = `ALU_SUB; // SUB
                10'b0000000_111: alu_code = `ALU_AND; // AND
                10'b0000000_110: alu_code = `ALU_OR;  // OR
                10'b0000000_100: alu_code = `ALU_XOR; // XOR
                10'b0000000_010: alu_code = `ALU_SLT; // SLT
                10'b0000000_011: alu_code = `ALU_SLTU;// SLTU
                10'b0000000_001: alu_code = `ALU_SLL; // SLL
                10'b0000000_101: alu_code = `ALU_SRL; // SRL
                10'b0100000_101: alu_code = `ALU_SRA; // SRA
                default:         alu_code = `ALU_ADD; // Default to ADD
            endcase
        end
        `OPC_OP_IMM: begin
            imm_type = `IMM_I;
            regfile_write_enable = 1;
            case({funct3})
                3'b000: alu_code = `ALU_ADD; // ADDI
                3'b111: alu_code = `ALU_AND; // ANDI
                3'b110: alu_code = `ALU_OR;  // ORI
                3'b100: alu_code = `ALU_XOR; // XORI
                3'b010: alu_code = `ALU_SLT; // SLTI
                3'b011: alu_code = `ALU_SLTU;// SLTIU
                3'b001: alu_code = `ALU_SLL; // SLLI
                3'b101: begin
                    if(funct7[5] == 1'b0)
                        alu_code = `ALU_SRL; // SRLI
                    else
                        alu_code = `ALU_SRA; // SRAI
                end
                default:         alu_code = `ALU_ADD; // Default to ADDI
            endcase
            ALU_b_source = `alu_b_source_imm; // Immediate
        end
        `OPC_LOAD: begin
            imm_type = `IMM_I;
            regfile_write_enable = 1;
            case (funct3)
                3'b000: o_mem_read = `MEM_READ_BYTE;    // LB
                3'b001: o_mem_read = `MEM_READ_HALF;    // LH
                3'b010: o_mem_read = `MEM_READ_WORD;    // LW
                3'b100: o_mem_read = `MEM_READ_BYTE_U;  // LBU
                3'b101: o_mem_read = `MEM_READ_HALF_U;  // LHU
                default: o_mem_read = `MEM_READ_WORD;   // Default to LW
            endcase
            o_Wb_sel = 2'b01; // From Memory
            alu_code = `ALU_ADD; // For address calculation
            ALU_b_source = `alu_b_source_imm; // Immediate
        end
        `OPC_STORE: begin
            imm_type = `IMM_S; // Set memory write based on funct3
            case (funct3)
                3'b000: o_mem_write = `MEM_WRITE_BYTE;   // SB
                3'b001: o_mem_write = `MEM_WRITE_HALF;   // SH
                3'b010: o_mem_write = `MEM_WRITE_WORD;   // SW
                default: o_mem_write = `MEM_WRITE_WORD;  // Default to SW
            endcase
            alu_code = `ALU_ADD; // For address calculation
            ALU_b_source = `alu_b_source_imm; // Immediate
        end
        `OPC_BRANCH: begin
            imm_type = `IMM_B;
            ALU_a_source = `alu_a_source_pc; // PC
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_ADD; // For branch address calculation
            case(funct3)
                3'b000: flag_beq = 1; // BEQ
                3'b001: flag_bne = 1; // BNE
                3'b100: flag_blt = 1; // BLT
                3'b101: flag_bge = 1; // BGE
                3'b110: flag_bltu = 1; // BLTU
                3'b111: flag_bgeu = 1; // BGEU
                default: ; // Do nothing
            endcase
        end
        `OPC_LUI: begin
            imm_type = `IMM_U;
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_LUI; // LUI operation
            regfile_write_enable = 1;
            o_Wb_sel = 2'b00; // From ALU
        end
        `OPC_AUIPC: begin
            imm_type = `IMM_U;
            ALU_a_source = `alu_a_source_pc; // PC
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_ADD; // ADD operation
            regfile_write_enable = 1;
            o_Wb_sel = 2'b00; // From ALU
        end
        `OPC_JAL: begin
            imm_type = `IMM_J;
            regfile_write_enable = 1;
            o_Wb_sel = 2'b10; // From PC+4
            ALU_a_source = `alu_a_source_pc; // PC
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_ADD; // For address calculation
            PCsel = 1'b1; // Jump taken
        end
        `OPC_JALR: begin
            imm_type = `IMM_I;
            alu_code = `ALU_JALR_ADD; // JALR Addition
            regfile_write_enable = 1;
            o_Wb_sel = 2'b10; // From PC+4
            PCsel = 1'b1; // Jump taken
            ALU_b_source = `alu_b_source_imm; // Immediate
        end
        default: begin
            imm_type = `IMM_R; // Default to R-type
        end
    endcase
end
endmodule