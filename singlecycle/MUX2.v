module MUX2 #(
    parameter WIDTH = 32
)(
    input wire [WIDTH-1:0] in0,
    input wire [WIDTH-1:0] in1,
    input wire sel,
    output reg [WIDTH-1:0] out
);
    always @(*) begin
        case (sel)
            1'b0: out = in0;
            1'b1: out = in1;
            default: out = {WIDTH{1'bx}};
        endcase
    end
endmodule
