`include "Defines.vh"
module WBU(
    input wire [`DATA_WIDTH-1:0] wb_alu_result,
    input wire [`DATA_WIDTH-1:0] wb_mem_rdata,
    input wire [`DATA_WIDTH-1:0] wb_pc_plus4,
    input wire [1:0] wb_control_Wb_sel,
    output wire [`DATA_WIDTH-1:0] wb_wdata
);

MUX3 #(
    .WIDTH(`DATA_WIDTH)
) WBU_Wb_data_mux (
    .sel(wb_control_Wb_sel),
    .in0(wb_alu_result),    // From ALU
    .in1(wb_mem_rdata),     // From Data Memory
    .in2(wb_pc_plus4),      // From PC + 4
    .out(wb_wdata)
);

endmodule
