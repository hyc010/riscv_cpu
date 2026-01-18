`include "Defines.vh"
module ME_WB(
    input wire clk,
    input wire rst_n,
    input wire en,
    //Inputs from ME stage
    input wire [`DATA_WIDTH-1:0] me_mem_rdata,
    input wire [`DATA_WIDTH-1:0] me_alu_result,
    input wire [`DATA_WIDTH-1:0] me_pc_plus4,
    input wire [1:0] me_control_Wb_sel,
    input wire me_control_wb_en,
    input wire [`REG_ADDR_WIDTH-1:0] me_rd_addr,
    //Outputs to WB stage
    output wire [`DATA_WIDTH-1:0] wb_mem_rdata,
    output wire [`DATA_WIDTH-1:0] wb_alu_result,
    output wire [`DATA_WIDTH-1:0] wb_pc_plus4,
    output wire [1:0] wb_control_Wb_sel,
    output wire wb_control_wb_en,
    output wire [`REG_ADDR_WIDTH-1:0] wb_rd_addr
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH)
) ME_WB_data_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(me_mem_rdata),
    .q(wb_mem_rdata)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH)
) ME_WB_alu_result_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(me_alu_result),
    .q(wb_alu_result)
);

DFF_EN #(
   .DFF_width(2)
) ME_WB_Wb_sel_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(me_control_Wb_sel),
    .q(wb_control_Wb_sel)
);

DFF_EN #(
   .DFF_width(1)
) ME_WB_wb_en_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(me_control_wb_en),
    .q(wb_control_wb_en)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH)
) ME_WB_pc_plus4_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(me_pc_plus4),
    .q(wb_pc_plus4)
);

DFF_EN #(
    .DFF_width(`REG_ADDR_WIDTH)
) ME_WB_rd_addr_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(me_rd_addr),
    .q(wb_rd_addr)
);

endmodule
