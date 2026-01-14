`include "Defines.vh"
module EXU(
    input wire clk,
    input wire rst_n,
    input wire en,
    input wire [`DATA_WIDTH-1:0] ex_data_rs1_data,
    input wire [`DATA_WIDTH-1:0] ex_data_rs2_data,
    input wire [`DATA_WIDTH-1:0] ex_data_imm,
    input wire [`DATA_WIDTH-1:0] ex_data_pc,
    input wire ex_control_ALU_a_source,
    input wire ex_control_ALU_b_source,
    input wire [2:0] ex_control_alu_code,
    input wire [2:0] ex_mem_read,
    input wire [1:0] ex_mem_write,
    input wire [1:0] ex_Wb_sel,
    input wire ex_wb_en,
    output wire [`DATA_WIDTH-1:0] ex_alu_result
)

wire [`DATA_WIDTH-1:0] ex_operand_a;
wire [`DATA_WIDTH-1:0] ex_operand_b;

MUX2 #(
    .MUX2_width(`DATA_WIDTH)
) EXU_ALU_a_source_mux (
    .sel(ex_control_ALU_a_source),
    .in0(ex_data_rs1_data),
    .in1(ex_data_pc),
    .out(ex_operand_a)
);

MUX2 #(
    .MUX2_width(`DATA_WIDTH)
) EXU_ALU_b_source_mux (
    .sel(ex_control_ALU_b_source),
    .in0(ex_data_rs2_data),
    .in1(ex_data_imm),
    .out(ex_operand_b)
);

ALU EXU_alu (
    .alu_a(ex_operand_a),
    .alu_b(ex_operand_b),
    .alu_code(ex_control_alu_code),
    .alu_result(ex_alu_result),
    .zero_flag(ex_zero_flag)
);
endmodule
