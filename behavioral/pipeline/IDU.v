`include "Defines.vh"
module IDU(
    
    input wire [`DATA_WIDTH-1:0] id_instr,
    output wire [`REG_ADDR_WIDTH-1:0] id_rs1_addr,
    output wire [`REG_ADDR_WIDTH-1:0] id_rs2_addr,
    output wire [`REG_ADDR_WIDTH-1:0] id_rd_addr,
    output wire [`DATA_WIDTH-1:0] id_imm,

    output wire [2:0] id_control_mem_read,          //Memory Read Enable
    output wire [1:0] id_control_mem_write,         //Memory Write Enable
    output wire id_control_ALU_a_source,              // 0: from rs1, 1: from pc
    output wire id_control_ALU_b_source,              // 0: from rs2, 1: from immediate
    output wire [4:0] id_control_alu_code,
    output wire [5:0] id_control_branch_flag,        //bne, beq, blt, bge, bltu, bgeu
    output wire id_JAL_taken,               //JAL or JALR taken
    output wire [1:0] id_control_Wb_sel,            // 00: from ALU, 01: from Memory, 10: from PC+4
    output wire id_control_wb_en       // Register File Write Enable
);

wire [6:0] funct7;
wire [2:0] funct3;
wire [6:0] opcode;


wire [2:0] imm_type;            // R, I, S, B, U, J

ImmGenerator IDU_immgen (
    .instr(id_instr),
    .imm_type(imm_type),
    .imm_out(id_imm)
);


Controller IDU_controller (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7), // You may need to connect this signal appropriately
    .id_mem_read(id_control_mem_read),
    .id_mem_write(id_control_mem_write),
    .ALU_a_source(id_control_ALU_a_source),
    .ALU_b_source(id_control_ALU_b_source),
    .imm_type(imm_type),
    .alu_code(id_control_alu_code),
    .branch_flag(id_control_branch_flag),
    .id_wb_en(id_control_wb_en),
    .id_Wb_sel(id_control_Wb_sel),
    .JAL_taken(id_JAL_taken)
);

Decoder IDU_decoder (
    .instr(id_instr),
    .o_opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .o_rs1_addr(id_rs1_addr),
    .o_rs2_addr(id_rs2_addr),
    .o_rd_addr(id_rd_addr)
);


endmodule
