`include "Defines.vh"
module instrfetch(
    input wire clk,
    input wire rst_n,
    input wire PCsel,
    input wire [`DATA_WIDTH-1:0] pc_branch,
    output wire [`DATA_WIDTH-1:0] pc_plus4,
    output reg [`DATA_WIDTH-1:0] pc
);
wire [`DATA_WIDTH-1:0] next_pc;
// wire [`DATA_WIDTH-1:0] pc_plus4;
assign pc_plus4 = pc + 4;

MUX2 #(.WIDTH(`DATA_WIDTH)) pc_mux (
    .in0(pc_plus4),
    .in1(pc_branch),
    .sel(PCsel),
    .out(next_pc)
);

DFF #(.DFF_width(`DATA_WIDTH), .DFF_init(32'h0000_0000)) pc_reg (
    .clk(clk),
    .rst_n(rst_n),
    .d(next_pc),
    .q(pc)
);

endmodule
