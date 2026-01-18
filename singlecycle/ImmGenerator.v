`include "Defines.vh"
module ImmGenerator(
    input wire [`DATA_WIDTH-1:0] instr,
    input wire [2:0] imm_type,
    output wire [`DATA_WIDTH-1:0] imm_out
);

assign imm_out = (imm_type == `IMM_I) ? {{20{instr[31]}}, instr[31:20]} :  // I-type
                 (imm_type == `IMM_S) ? {{20{instr[31]}}, instr[31:25], instr[11:7]} :  // S-type
                 (imm_type == `IMM_B) ? {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0} :  // B-type
                 (imm_type == `IMM_U) ? {instr[31:12], 12'b0} :  // U-type
                 (imm_type == `IMM_J) ? {{11{instr[31]}}, instr[31], instr[19:12], instr[20], instr[30:21], 1'b0} :  // J-type
                 32'b0;  // Default to zero




endmodule
