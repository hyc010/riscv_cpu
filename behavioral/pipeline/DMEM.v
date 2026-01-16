`include "Defines.vh"
module DMEM(
    input wire clk,
    input wire rst_n,
    input wire [`DATA_WIDTH-1:0] addr,
    input wire [`DATA_WIDTH-1:0] write_data,
    input wire [2:0] mem_read,
    input wire [1:0] mem_write,
    output reg [`DATA_WIDTH-1:0] read_data
);

reg [7:0] memory [0:`DMEM_SIZE-1]; // 1KB DMEM
integer i;

//Read in conbinational logic
always @(*) begin
    read_data = 32'b0;
    // 读操作
    if (mem_read != 3'b000) begin
        case (mem_read[1:0])
            2'b01: begin // read byte
                if(mem_read[2] == 1'b1) begin // sign extend
                    read_data = {{24{memory[addr][7]}}, memory[addr]};
                end else begin 
                    read_data = {24'b0, memory[addr]};
                end
            end
            2'b10: begin // read halfword
                if(mem_read[2] == 1'b1) begin // sign extend
                    read_data = {{16{memory[addr + 1][7]}}, memory[addr + 1], memory[addr]};
                end else begin 
                    read_data = {16'b0, memory[addr + 1], memory[addr]};
                end
            end
            2'b11: begin // read word
                read_data = {memory[addr + 3], memory[addr + 2], memory[addr + 1], memory[addr]};
            end
            default: read_data = 32'b0;
        endcase
    end
    else begin
        read_data = 32'b0;
    end
end

//Write in sequential logic
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        for (i = 0; i < `DMEM_SIZE; i = i + 1) begin
            memory[i] <= 8'b0;
        end
    end else begin
        // 写操作
        if (mem_write != 2'b00) begin
            case (mem_write)
                2'b01: begin // 存储字节
                    memory[addr] <= write_data[7:0];
                end
                2'b10: begin // 存储半字
                    memory[addr] <= write_data[7:0];
                    memory[addr + 1] <= write_data[15:8];
                end
                2'b11: begin // 存储字
                    memory[addr] <= write_data[7:0];
                    memory[addr + 1] <= write_data[15:8];
                    memory[addr + 2] <= write_data[23:16];
                    memory[addr + 3] <= write_data[31:24];
                end
                default: ; // Do nothing
            endcase
        end
    end
end

endmodule
