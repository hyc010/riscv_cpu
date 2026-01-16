`include "Defines.vh"
module BU(
    input [`DATA_WIDTH-1:0] rs1_data,
    input [`DATA_WIDTH-1:0] rs2_data,
    input [5:0] branch_flag,
    output reg branch_taken
);
always @(*) begin
    branch_taken = 1'b0;
    if (branch_flag[0] && (rs1_data == rs2_data)) begin
        branch_taken = 1'b1;
    end else if (branch_flag[1] && (rs1_data != rs2_data)) begin
        branch_taken = 1'b1;
    end else if (branch_flag[2] && ($signed(rs1_data) < $signed(rs2_data))) begin
        branch_taken = 1'b1;
    end else if (branch_flag[3] && ($signed(rs1_data) >= $signed(rs2_data))) begin
        branch_taken = 1'b1;
    end else if (branch_flag[4] && (rs1_data < rs2_data)) begin
        branch_taken = 1'b1;
    end else if (branch_flag[5] && (rs1_data >= rs2_data)) begin
        branch_taken = 1'b1;
    end
end
endmodule
