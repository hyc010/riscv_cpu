`include "Defines.vh"
module ALU (
    input wire [4:0] alu_code,
    input wire [`DATA_WIDTH-1:0] operand_a,
    input wire [`DATA_WIDTH-1:0] operand_b,
    output reg [`DATA_WIDTH-1:0] alu_result
);

always @(*) begin
    case (alu_code)
        `ALU_ADD: alu_result = operand_a + operand_b; // ADD
        `ALU_SUB: alu_result = operand_a - operand_b; // SUB
        `ALU_AND: alu_result = operand_a & operand_b; // AND
        `ALU_OR: alu_result = operand_a | operand_b; // OR
        `ALU_XOR: alu_result = operand_a ^ operand_b; // XOR
        `ALU_SLT: alu_result = (operand_a < operand_b) ? 1 : 0; // Set Less Than
        `ALU_SLL: alu_result = operand_a << 1;       // SHIFT LEFT
        `ALU_SRL: alu_result = operand_a >> 1;       // SHIFT RIGHT
        `ALU_LUI: alu_result = operand_b;               // LUI
        `ALU_JALR_ADD: alu_result = (operand_a + operand_b) & ~1; // JALR Addition
        default: alu_result = 0;                     // NOP or undefined operation
    endcase
end
endmodule
