`include "Defines.vh"
module EXU(
    input wire [`DATA_WIDTH-1:0] ex_data_rs1_data,
    input wire [`DATA_WIDTH-1:0] ex_data_rs2_data,
    input wire [`DATA_WIDTH-1:0] ex_data_imm,
    input wire [`DATA_WIDTH-1:0] ex_data_pc,
    input wire ex_control_ALU_a_source,
    input wire ex_control_ALU_b_source,
    input wire [4:0] ex_control_alu_code,
    input wire [5:0] ex_control_branch_flag,
    input wire ex_JAL_taken,
    output wire [`DATA_WIDTH-1:0] ex_alu_result,
    output wire ex_redirect_taken            //indicates a branch or jump
    // output wire ex_branch_taken               // indicates whether branch is taken
);

wire [`DATA_WIDTH-1:0] ex_operand_a;
wire [`DATA_WIDTH-1:0] ex_operand_b;

wire ex_branch_taken;

assign ex_redirect_taken = ex_branch_taken | ex_JAL_taken;  //indicates pc should be redirected



BU EXU_branch_unit (
    .rs1_data(ex_data_rs1_data),
    .rs2_data(ex_data_rs2_data),
    .branch_flag(ex_control_branch_flag),
    .branch_taken(ex_branch_taken)
);

MUX2 #(
    .WIDTH(`DATA_WIDTH)
) EXU_ALU_a_source_mux (
    .sel(ex_control_ALU_a_source),
    .in0(ex_data_rs1_data),
    .in1(ex_data_pc),
    .out(ex_operand_a)
);

MUX2 #(
    .WIDTH(`DATA_WIDTH)
) EXU_ALU_b_source_mux (
    .sel(ex_control_ALU_b_source),
    .in0(ex_data_rs2_data),
    .in1(ex_data_imm),
    .out(ex_operand_b)
);

ALU EXU_alu (
    .operand_a(ex_operand_a),
    .operand_b(ex_operand_b),
    .alu_code(ex_control_alu_code),
    .alu_result(ex_alu_result)
);
endmodule
