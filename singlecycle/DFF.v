module DFF #(
    parameter DFF_width = 1, 
    parameter DFF_init = 0)(
        input wire clk,
        input wire rst_n,
        input wire [DFF_width-1:0] d,
        output reg [DFF_width-1:0] q
    );
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            q <= DFF_init;
        end else begin
            q <= d;
        end
    end
endmodule
