`include "Defines.vh"
module ID_EX(
    input wire clk,
    input wire rst_n,
    input wire en,
    // From ID stage
    input wire [`REG_ADDR_WIDTH-1:0] id_data_rs1_addr,
    input wire [`REG_ADDR_WIDTH-1:0] id_data_rs2_addr,
    input wire [`DATA_WIDTH-1:0] id_data_imm,
    input wire [`DATA_WIDTH-1:0] id_data_pc,
    input wire [`REG_ADDR_WIDTH-1:0] id_data_rd_addr,
    input wire [4:0] id_control_alu_code,
    input wire  id_control_ALU_a_source,
    input wire  id_control_ALU_b_source,
    input wire [1:0] id_control_Wb_sel,
    input wire id_control_wb_en,
    input wire [5:0] id_control_branch_flag,
    input wire [2:0] id_control_mem_read,
    input wire [1:0] id_control_mem_write,
    input wire [`DATA_WIDTH-1:0] id_pc_plus4,
    input wire id_JAL_taken,
    // To EX stage
    output wire [`REG_ADDR_WIDTH-1:0] ex_data_rs1_addr,
    output wire [`REG_ADDR_WIDTH-1:0] ex_data_rs2_addr,
    output wire [`DATA_WIDTH-1:0] ex_data_imm,
    output wire [`DATA_WIDTH-1:0] ex_data_pc,
    output wire [`REG_ADDR_WIDTH-1:0] ex_data_rd_addr,
    output wire [4:0] ex_control_alu_code,
    output wire  ex_control_ALU_a_source,
    output wire  ex_control_ALU_b_source,
    output wire [1:0] ex_control_Wb_sel,
    output wire ex_control_wb_en,
    output wire [5:0] ex_control_branch_flag,
    output wire [2:0] ex_control_mem_read,
    output wire [1:0] ex_control_mem_write,
    output wire [`DATA_WIDTH-1:0] ex_pc_plus4,
    output wire ex_JAL_taken
);

DFF_EN #(
    .DFF_width(`REG_ADDR_WIDTH),
    .DFF_init('h0)
) ID_EX_rs1_data (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_data_rs1_addr),
    .q(ex_data_rs1_addr)
);

DFF_EN #(
    .DFF_width(`REG_ADDR_WIDTH),
    .DFF_init(5'h0)
) ID_EX_rs2_data (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_data_rs2_addr),
    .q(ex_data_rs2_addr)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH),
    .DFF_init(32'h0000_0000)
) ID_EX_imm (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_data_imm),
    .q(ex_data_imm)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH),
    .DFF_init(32'h0000_0000)
) ID_EX_pc (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_data_pc),
    .q(ex_data_pc)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH),
    .DFF_init(32'h0000_0000)
) ID_EX_pc_plus4 (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_pc_plus4),
    .q(ex_pc_plus4)
);

DFF_EN #(
    .DFF_width(5),
    .DFF_init(5'h0)
) ID_EX_rd_addr (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_data_rd_addr),
    .q(ex_data_rd_addr)
);

DFF_EN #(
    .DFF_width(5),
    .DFF_init(5'h0)
) ID_EX_alu_code (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_alu_code),
    .q(ex_control_alu_code)
);

DFF_EN #(
    .DFF_width(1),
    .DFF_init(1'b0)
) ID_EX_ALU_a_source (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_ALU_a_source),
    .q(ex_control_ALU_a_source)
);

DFF_EN #(
  	.DFF_width(1), 
  	.DFF_init(1'b0)
) ID_EX_ALU_b_source (
  	.clk(clk), 
  	.rst_n(rst_n), 
  	.en(en), 
  	.d(id_control_ALU_b_source), 
  	.q(ex_control_ALU_b_source)
);

DFF_EN #(
    .DFF_width(2),
    .DFF_init(2'h0)
) ID_EX_Wb_sel (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_Wb_sel),
    .q(ex_control_Wb_sel)
);

DFF_EN #(
    .DFF_width(1),
    .DFF_init(1'b0)
) ID_EX_wb_en (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_wb_en),
    .q(ex_control_wb_en)
);

DFF_EN #(
    .DFF_width(3),
    .DFF_init(3'h0)
) ID_EX_mem_read (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_mem_read),
    .q(ex_control_mem_read)
);

DFF_EN #(
    .DFF_width(2),
    .DFF_init(2'h0)
) ID_EX_mem_write (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_mem_write),
    .q(ex_control_mem_write)
);

DFF_EN #(
    .DFF_width(6),
    .DFF_init(6'h0)
) ID_EX_branch_flag (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_control_branch_flag),
    .q(ex_control_branch_flag)
);

DFF_EN #(
    .DFF_width(1),
    .DFF_init(1'b0)
) ID_EX_JAL_taken (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(id_JAL_taken),
    .q(ex_JAL_taken)
);

endmodule
