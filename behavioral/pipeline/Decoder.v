`include "Defines.vh"
module Decoder (
    input  wire [`DATA_WIDTH-1:0] instr,
    output [6:0] o_opcode,
    output [2:0] funct3,
    output [6:0] funct7,
    output [`REG_ADDR_WIDTH-1:0] o_rs1_addr,
    output [`REG_ADDR_WIDTH-1:0] o_rs2_addr,
    output [`REG_ADDR_WIDTH-1:0] o_rd_addr
);

// wire [6:0] funct7 = instr[31:25];
// wire [2:0] funct3 = instr[14:12];

assign o_opcode    = instr[6:0];
assign funct3      = instr[14:12];
assign funct7      = instr[31:25];

assign o_rs1_addr  = instr[19:15];
assign o_rs2_addr  = instr[24:20];
assign o_rd_addr   = instr[11:7];

endmodule
