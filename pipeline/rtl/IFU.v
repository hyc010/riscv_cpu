`include "Defines.vh"
module IFU(
    input wire clk,
    input wire rst_n,
    input en,
    input wire redirect_taken,
    input wire [`ADDR_WIDTH-1:0] redirect_addr,
    output wire [`ADDR_WIDTH-1:0] if_pc,
    output wire [`DATA_WIDTH-1:0] if_instr,
    output wire [`ADDR_WIDTH-1:0] if_pc_plus4
);

instrfetch IFU_instrfetch (
    .clk(clk),
    .rst_n(rst_n),
    .en(en),
    .redirect_taken(redirect_taken),
    .redirect_addr(redirect_addr),
    .pc_plus4(if_pc_plus4),
    .pc(if_pc)
);

IMEM IFU_IMEM (
    // .clk(clk),
    // .rst_n(rst_n),
    .pc(if_pc),
    .instr(if_instr)
);

    
endmodule
