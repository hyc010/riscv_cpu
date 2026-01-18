`include "Defines.vh"
module EX_ME(
    input wire clk,
    input wire rst_n,
    input wire en,
    //Inputs from EX stage
    input wire [`DATA_WIDTH-1:0] ex_alu_result,
    input wire [`DATA_WIDTH-1:0] ex_data_rs2_data,
    input wire [`REG_ADDR_WIDTH-1:0] ex_data_rd_addr,
    input wire [2:0] ex_control_mem_read,
    input wire [1:0] ex_control_mem_write,
    input wire [1:0] ex_control_Wb_sel,
    input wire ex_control_wb_en,
    input wire [`DATA_WIDTH-1:0] ex_pc_plus4,


    //Outputs to ME stage
    output wire [`DATA_WIDTH-1:0] me_alu_result,
    output wire [`DATA_WIDTH-1:0] me_data_rs2_data,
    output wire [`REG_ADDR_WIDTH-1:0] me_data_rd_addr,
    output wire [2:0] me_control_mem_read,
    output wire [1:0] me_control_mem_write,
    output wire [1:0] me_control_Wb_sel,
    output wire me_control_wb_en,
    output wire [`DATA_WIDTH-1:0] me_pc_plus4
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH)
) EX_ME_alu_result (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_alu_result),
    .q(me_alu_result)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH)
) EX_ME_pc_plus4_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_pc_plus4),
    .q(me_pc_plus4)
);

DFF_EN #(
   .DFF_width(1)
) EX_ME_wb_en_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_control_wb_en),
    .q(me_control_wb_en)
);

DFF_EN #(
   .DFF_width(3)
) EX_ME_mem_read_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_control_mem_read),
    .q(me_control_mem_read)
);

DFF_EN #(
   .DFF_width(2)
) EX_ME_mem_write_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_control_mem_write),
    .q(me_control_mem_write)
);

DFF_EN #(
   .DFF_width(2)
) EX_ME_Wb_sel_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_control_Wb_sel),
    .q(me_control_Wb_sel)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH)
) EX_ME_rs2_data_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_data_rs2_data),
    .q(me_data_rs2_data)
);

DFF_EN #(
    .DFF_width(`REG_ADDR_WIDTH)
) EX_ME_rd_addr_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(ex_data_rd_addr),
    .q(me_data_rd_addr)
);


endmodule
