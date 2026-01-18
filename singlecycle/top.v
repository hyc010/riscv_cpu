`include "Defines.vh"
module top(
    input wire clk,
    input wire rst_n
);

wire [`DATA_WIDTH-1:0] pc;
wire [`DATA_WIDTH-1:0] pc_plus4;
wire [`DATA_WIDTH-1:0] instr;
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [`REG_ADDR_WIDTH-1:0] rs1_addr;
wire [`REG_ADDR_WIDTH-1:0] rs2_addr;
wire [`REG_ADDR_WIDTH-1:0] rd_addr;
wire [`DATA_WIDTH-1:0] imm_out;
wire [`DATA_WIDTH-1:0] alu_a;
wire [`DATA_WIDTH-1:0] alu_b;
wire [`DATA_WIDTH-1:0] alu_result;


wire [`DATA_WIDTH-1:0] rs1_data;
wire [`DATA_WIDTH-1:0] rs2_data;
wire [`DATA_WIDTH-1:0] wb_data; // Placeholder for write-back data

wire branch_taken;
wire PCsel; 
wire [2:0] o_mem_read;
wire [1:0] o_mem_write;
wire [1:0] o_Wb_sel;          // 00: from ALU, 01: from Memory, 10: from PC+4
wire ALU_a_source;         // 0: from rs1, 1: from pc
wire ALU_b_source;         // 0: from rs2, 1: from immediate
wire [2:0] imm_type;     // R, I, S, B, U, J
wire [4:0] alu_code;      // ALU operation code
wire flag_beq, flag_bne, flag_blt, flag_bge, flag_bltu, flag_bgeu;    // Branch Equal, Branch Not Equal, Branch Less Than
wire regfile_write_enable; // Register File Write Enable

wire [`DATA_WIDTH-1:0] mem_read_data; // Placeholder for memory read data
// assign wb_data = alu_result; // For now, connect ALU result to write-back data
MUX3 #(.WIDTH(`DATA_WIDTH)) WB_MUX (
    .in0(alu_result),
    .in1(mem_read_data), // Placeholder for memory data
    .in2(pc_plus4),
    .sel(o_Wb_sel),
    .out(wb_data)
);

DMEM DMEM_UNIT(
    .clk(clk),
    .rst_n(rst_n),
    .mem_read(o_mem_read),
    .mem_write(o_mem_write),
    .addr(alu_result),
    .write_data(rs2_data),
    .read_data(mem_read_data) // Placeholder, connect to actual read data if needed
);


BU BRU(
    .rs1_data(rs1_data),
    .rs2_data(rs2_data),
    .flag_beq(flag_beq),
    .flag_bge(flag_bge),
    .flag_blt(flag_blt),
    .flag_bne(flag_bne),
    .flag_bgeu(flag_bgeu),
    .flag_bltu(flag_bltu),
    .branch_taken(branch_taken)
);
MUX2 #(.WIDTH(`DATA_WIDTH)) ALU_A_MUX (
    .in0(rs1_data),
    .in1(pc),
    .sel(ALU_a_source),
    .out(alu_a)
);

MUX2 #(.WIDTH(`DATA_WIDTH)) ALU_B_MUX (
    .in0(rs2_data),
    .in1(imm_out),
    .sel(ALU_b_source),
    .out(alu_b)
);

ALU ALU_UNIT(
    .operand_a(alu_a),
    .operand_b(alu_b),
    .alu_code(alu_code),
    .alu_result(alu_result)
);

controller CTRL(
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .branch_taken(branch_taken),
    .o_mem_read(o_mem_read),
    .o_mem_write(o_mem_write),
    .o_Wb_sel(o_Wb_sel),
    .ALU_a_source(ALU_a_source),
    .ALU_b_source(ALU_b_source),
    .imm_type(imm_type),
    .alu_code(alu_code),
    .flag_beq(flag_beq),
    .flag_bne(flag_bne),
    .flag_blt(flag_blt),
    .flag_bge(flag_bge),
    .flag_bltu(flag_bltu),
    .flag_bgeu(flag_bgeu),
    .regfile_write_enable(regfile_write_enable),
    .PCsel(PCsel)
);

RegisterFile RF(
    .clk(clk),
    .rst_n(rst_n),
    .read_addr1(rs1_addr),
    .read_addr2(rs2_addr),
    .write_addr(rd_addr),
    .write_data(wb_data), // Placeholder, connect to actual write-back data
    .we(regfile_write_enable),
    .read_data1(rs1_data),
    .read_data2(rs2_data)
);

Decoder IDU(
    .instr(instr),
    .o_opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .o_rs1_addr(rs1_addr),
    .o_rs2_addr(rs2_addr),
    .o_rd_addr(rd_addr)
);

ITCM ITCM(
    .clk(clk),
    .rst_n(rst_n),
    .pc(pc),
    .instr(instr)
);


instrfetch IFU (
    .clk(clk),
    .rst_n(rst_n),
    .PCsel(PCsel), // Placeholder, connect to actual branch signal
    .pc_branch(alu_result), // Placeholder, connect to actual branch target
    .pc(pc),
    .pc_plus4(pc_plus4)
);

ImmGenerator IMM_GEN(
    .instr(instr),
    .imm_type(imm_type),
    .imm_out(imm_out)
);


endmodule
