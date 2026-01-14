`include "Defines.vh"
module IDU(
    input wire clk,
    input wire rst_n,
    input wire en,
    input wire [`DATA_WIDTH-1:0] id_instr,
    output wire [`ADDR_WIDTH-1:0] id_data_rs1_addr,
    output wire [`ADDR_WIDTH-1:0] id_data_rs2_addr,
    output wire [`ADDR_WIDTH-1:0] id_data_rd_addr,
    output wire [`DATA_WIDTH-1:0] id_data_rs1_data,
    output wire [`DATA_WIDTH-1:0] id_data_rs2_data,
    output wire [`DATA_WIDTH-1:0] id_data_imm,

    output wire [2:0] id_control_mem_read,          //Memory Read Enable
    output wire [1:0] id_control_mem_write,         //Memory Write Enable
    output wire [1:0] id_control_Wb_sel,            // 00: from ALU, 01: from Memory, 10: from PC+4
    output wire id_control_ALU_a_source,              // 0: from rs1, 1: from pc
    output wire id_control_ALU_b_source,              // 0: from rs2, 1: from immediate
    output wire [5:0] id_control_alu_code,
    output wire [5:0] id_control_branch_flag         //bne, beq, blt, bge, bltu, bgeu

)

wire [6:0] funct7;
wire [2:0] funct3;
wire [6:0] opcode;


wire [2:0] imm_type,            // R, I, S, B, U, J
wire flag_beq, flag_bne, flag_blt, flag_bge, flag_bltu, flag_bgeu,    // Branch Equal, Branch Not Equal, Branch Less Than
wire id_control_wb_en,       // Register File Write Enable
wire PCsel                   // 0: PC+4, 1: Branch/JAR taken

ImmGenerator IDU_immgen (
    .instr(id_instr),
    .imm_type(imm_type),
    .imm_out(id_imm)
);


Controller IDU_controller (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .branch_taken(), // You may need to connect this signal appropriately
    .id_mem_read(id_control_mem_read),
    .id_mem_write(id_control_mem_write),
    .id_Wb_sel(id_control_Wb_sel),
    .ALU_a_source(ALU_a_source),
    .ALU_b_source(ALU_b_source),
    .imm_type(imm_type),
    .alu_code(id_control_alu_code),
    .branch_flag(id_control_branch_flag),
    .regfile_write_enable(regfile_write_enable),
    .PCsel(PCsel)
);

Decoder IDU_decoder (
    .instr(id_instr),
    .o_opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .o_rs1_addr(rs1_addr),
    .o_rs2_addr(rs2_addr),
    .o_rd_addr(rd_addr)
);

RegisterFile IDU_regfile (
    .clk(clk),
    .rst_n(rst_n),
    .we(regfile_write_enable),
    .read_addr1(rs1_addr),
    .read_addr2(rs2_addr),
    .write_addr(rd_addr),
    .write_data( /* Connect write data appropriately */ ),
    .read_data1( /* Connect read data 1 appropriately */ ),
    .read_data2( /* Connect read data 2 appropriately */ )
);



endmodule