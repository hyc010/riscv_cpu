module IF_ID(
    input wire clk,
    input wire rst_n,
    input wire en,
    // from IF stage
    input wire [`ADDR_WIDTH-1:0] if_pc,
    input wire [`DATA_WIDTH-1:0] if_instr,
    // to ID stage
    output wire [`ADDR_WIDTH-1:0] id_pc,
    output wire [`DATA_WIDTH-1:0] id_instr
);

DFF_EN #(
    .DFF_width(`ADDR_WIDTH),
    .DFF_init(32'h0000_0000)
) IF_ID_pc (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(if_pc),
    .q(id_pc)
);

DFF_EN #(
    .DFF_width(`DATA_WIDTH),
    .DFF_init(32'h0000_0000)
) IF_ID_instr (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .d(if_instr),
    .q(id_instr)
);
endmodule