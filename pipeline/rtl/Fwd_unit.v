`include "Defines.vh"
module Fwd_unit(
    input wire [`REG_ADDR_WIDTH-1:0] me_data_rd_addr,
    input wire [`REG_ADDR_WIDTH-1:0] wb_rd_addr,
    input wire [`REG_ADDR_WIDTH-1:0] ex_data_rs1_addr,
    input wire [`REG_ADDR_WIDTH-1:0] ex_data_rs2_addr,
    input wire [`DATA_WIDTH-1:0] ex_data_rs1_data,
    input wire [`DATA_WIDTH-1:0] ex_data_rs2_data,
    input wire me_control_wb_en,
    input wire wb_control_wb_en,
    input wire [`DATA_WIDTH-1:0] me_alu_result,
    input wire [`DATA_WIDTH-1:0] wb_data,

    output reg [`DATA_WIDTH-1:0] ex_rs1_data_fwd,
    output reg [`DATA_WIDTH-1:0] ex_rs2_data_fwd
);

wire [1:0] rs1_MUX_sel;
wire [1:0] rs2_MUX_sel;

assign rs1_MUX_sel = (me_control_wb_en && (me_data_rd_addr != 0) && (me_data_rd_addr == ex_data_rs1_addr)) ? 2'b01 :
                     (wb_control_wb_en && (wb_rd_addr != 0) && (wb_rd_addr == ex_data_rs1_addr)) ? 2'b10 :
                     2'b00; // 00: no forwarding, 01: from ME, 10: from WB
assign rs2_MUX_sel = (me_control_wb_en && (me_data_rd_addr != 0) && (me_data_rd_addr == ex_data_rs2_addr)) ? 2'b01 :
                     (wb_control_wb_en && (wb_rd_addr != 0) && (wb_rd_addr == ex_data_rs2_addr)) ? 2'b10 :
                     2'b00; // 00: no forwarding, 01: from ME, 10: from WB

MUX3 #(
    .WIDTH(`DATA_WIDTH)
) EX_Fwd_unit_rs1_MUX (
    .sel(rs1_MUX_sel),
    .in0(ex_data_rs1_data),
    .in1(me_alu_result),
    .in2(wb_data),
    .out(ex_rs1_data_fwd)
);

MUX3 #(
    .WIDTH(`DATA_WIDTH)
) EX_Fwd_unit_rs2_MUX (
    .sel(rs2_MUX_sel),
    .in0(ex_data_rs2_data),
    .in1(me_alu_result),
    .in2(wb_data),
    .out(ex_rs2_data_fwd)
);

endmodule
