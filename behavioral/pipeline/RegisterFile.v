module RegisterFile (
    input wire clk,
    input wire rst_n,
    input wire [`REG_ADDR_WIDTH-1:0] read_addr1,
    input wire [`REG_ADDR_WIDTH-1:0] read_addr2,
    input wire [`REG_ADDR_WIDTH-1:0] write_addr,
    input wire [`DATA_WIDTH-1:0] write_data,
    input wire we,
    output reg [`DATA_WIDTH-1:0] read_data1,
    output reg [`DATA_WIDTH-1:0] read_data2
);

reg [`DATA_WIDTH-1:0] registers [0:`ADDR_WIDTH-1];

integer i;

assign read_data1 = (read_addr1 == 0) ? 0 : registers[read_addr1];
assign read_data2 = (read_addr2 == 0) ? 0 : registers[read_addr2];


always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        for (i = 0; i < `REG_ADDR_WIDTH; i = i + 1) begin
            registers[i] <= 0; // Reset all registers to zero
        end
    end else begin
        if (we && (write_addr != 0)) begin
            registers[write_addr] <= write_data;
        end
    end
end

    
endmodule
