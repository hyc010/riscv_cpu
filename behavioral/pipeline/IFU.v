`include "Defines.vh"
module IFU(
    input wire clk,
    input wire rst_n,
    input wire Jump_Sel,
    input wire [`ADDR_WIDTH-1:0] Jump_addr,
    output wire [`ADDR_WIDTH-1:0] pc,
    output wire [`DATA_WIDTH-1:0] instr,
    output wire [`ADDR_WIDTH-1:0] pc_plus4
);

instrfetch IFU_instrfetch (
    .clk(clk),
    .rst_n(rst_n),
    .PCsel(Jump_Sel),
    .pc_branch(Jump_addr),
    .pc_plus4(pc_plus4),
    .pc(pc)
);

ITCM IFU_IMEM (
    .clk(clk),
    .rst_n(rst_n),
    .addr(pc),
    .instr(instr)
);

    
endmodule
