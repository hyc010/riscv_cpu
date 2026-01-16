`include "Defines.vh"
module instrfetch(
    input wire clk,
    input wire rst_n,
    input wire redirect_taken,
    input wire [`DATA_WIDTH-1:0] redirect_addr,
    output wire [`DATA_WIDTH-1:0] pc_plus4,
    output reg [`DATA_WIDTH-1:0] pc
);
wire [`DATA_WIDTH-1:0] next_pc;
// wire [`DATA_WIDTH-1:0] pc_plus4;
assign pc_plus4 = pc + 4;

MUX2 #(.WIDTH(`DATA_WIDTH)) pc_mux (
    .in0(pc_plus4),
    .in1(redirect_addr),
    .sel(redirect_taken),
    .out(next_pc)
);

DFF_EN #(.DFF_width(`DATA_WIDTH), .DFF_init(32'h0000_0000)) pc_reg (
    .clk(clk),
    .rst_n(rst_n),
    .en(1'b1),
    .d(next_pc),
    .q(pc)
);

endmodule
