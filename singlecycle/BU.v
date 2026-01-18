`include "Defines.vh"
module BU(
    input [`DATA_WIDTH-1:0] rs1_data,
    input [`DATA_WIDTH-1:0] rs2_data,
    input flag_beq,flag_bge,flag_blt,flag_bne,flag_bgeu,flag_bltu,
    output reg branch_taken
);
always @(*) begin
    branch_taken = 1'b0;
    if (flag_beq && (rs1_data == rs2_data)) begin
        branch_taken = 1'b1;
    end else if (flag_bne && (rs1_data != rs2_data)) begin
        branch_taken = 1'b1;
    end else if (flag_blt && ($signed(rs1_data) < $signed(rs2_data))) begin
        branch_taken = 1'b1;
    end else if (flag_bge && ($signed(rs1_data) >= $signed(rs2_data))) begin
        branch_taken = 1'b1;
    end else if (flag_bltu && (rs1_data < rs2_data)) begin
        branch_taken = 1'b1;
    end else if (flag_bgeu && (rs1_data >= rs2_data)) begin
        branch_taken = 1'b1;
    end
end
endmodule
