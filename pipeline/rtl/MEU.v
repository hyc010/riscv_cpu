`include "Defines.vh"
module MEU(
    input wire clk,
    input wire rst_n,
    input wire [`DATA_WIDTH-1:0] me_addr,
    input wire [`DATA_WIDTH-1:0] me_wdata,
    input wire [1:0] me_control_mem_write,
    input wire [2:0] me_control_mem_read,
    output wire [`DATA_WIDTH-1:0] me_rdata
);

DMEM MEU_DMEM (
    .clk(clk),
    .rst_n(rst_n),
    .addr(me_addr),
    .write_data(me_wdata),
    .mem_write(me_control_mem_write),
    .mem_read(me_control_mem_read),
    .read_data(me_rdata)
);

endmodule 
