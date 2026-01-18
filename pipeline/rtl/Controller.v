`include "Defines.vh"
module Controller(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    output reg [2:0] id_mem_read,          //Memory Read Enable
    output reg [1:0] id_mem_write,         //Memory Write Enable
    output reg ALU_a_source,              // 0: from rs1, 1: from pc
    output reg ALU_b_source,              // 0: from rs2, 1: from immediate
    output reg [2:0] imm_type,            // R, I, S, B, U, J
    output reg [4:0] alu_code,            // ALU operation code
    output reg [5:0] branch_flag,    // Branch Equal, Branch Not Equal, Branch Less Than
    output reg id_wb_en,       // Register File Write Enable
    output reg [1:0] id_Wb_sel,            // 00: from ALU, 01: from Memory, 10: from PC+4
    output reg JAL_taken               //JAL or JALR taken
);

always @(*) begin
    // Default values
    id_mem_write      = 2'b00;
    id_mem_read       = 3'b000;
    id_Wb_sel      = 2'b00; // From ALU
    ALU_a_source  = 0;
    ALU_b_source  = 0;
    branch_flag = 0;
    imm_type    = `IMM_R;
    id_wb_en = 1'b0;
    JAL_taken = 1'b0;
    case (opcode)
        `OPC_OP: begin
            imm_type = `IMM_R;
            id_wb_en = 1;
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
            id_wb_en = 1;
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
            id_wb_en = 1;
            case (funct3)
                3'b000: id_mem_read = `MEM_READ_BYTE;    // LB
                3'b001: id_mem_read = `MEM_READ_HALF;    // LH
                3'b010: id_mem_read = `MEM_READ_WORD;    // LW
                3'b100: id_mem_read = `MEM_READ_BYTE_U;  // LBU
                3'b101: id_mem_read = `MEM_READ_HALF_U;  // LHU
                default: id_mem_read = `MEM_READ_WORD;   // Default to LW
            endcase
            id_Wb_sel = 2'b01; // From Memory
            alu_code = `ALU_ADD; // For address calculation
            ALU_b_source = `alu_b_source_imm; // Immediate
        end
        `OPC_STORE: begin
            imm_type = `IMM_S; // Set memory write based on funct3
            case (funct3)
                3'b000: id_mem_write = `MEM_WRITE_BYTE;   // SB
                3'b001: id_mem_write = `MEM_WRITE_HALF;   // SH
                3'b010: id_mem_write = `MEM_WRITE_WORD;   // SW
                default: id_mem_write = `MEM_WRITE_WORD;  // Default to SW
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
                3'b000: branch_flag[0] = 1; // BEQ
                3'b001: branch_flag[1] = 1; // BNE
                3'b100: branch_flag[2] = 1; // BLT
                3'b101: branch_flag[3] = 1; // BGE
                3'b110: branch_flag[4] = 1; // BLTU
                3'b111: branch_flag[5] = 1; // BGEU
                default: ; // Do nothing
            endcase
        end
        `OPC_LUI: begin
            imm_type = `IMM_U;
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_LUI; // LUI operation
            id_wb_en = 1;
            id_Wb_sel = 2'b00; // From ALU
        end
        `OPC_AUIPC: begin
            imm_type = `IMM_U;
            ALU_a_source = `alu_a_source_pc; // PC
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_ADD; // ADD operation
            id_wb_en = 1;
            id_Wb_sel = 2'b00; // From ALU
        end
        `OPC_JAL: begin
            imm_type = `IMM_J;
            id_wb_en = 1;
            id_Wb_sel = 2'b10; // From PC+4
            ALU_a_source = `alu_a_source_pc; // PC
            ALU_b_source = `alu_b_source_imm; // Immediate
            alu_code = `ALU_ADD; // For address calculation
            JAL_taken = 1'b1; // Jump taken
        end
        `OPC_JALR: begin
            imm_type = `IMM_I;
            alu_code = `ALU_JALR_ADD; // JALR Addition
            id_wb_en = 1;
            id_Wb_sel = 2'b10; // From PC+4
            JAL_taken = 1'b1; // Jump taken
            ALU_b_source = `alu_b_source_imm; // Immediate
        end
        default: begin
            imm_type = `IMM_R; // Default to R-type
        end
    endcase
end
endmodule
