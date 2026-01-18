`include "Defines.vh"
module IMEM(
    // input wire clk,
    // input wire rst_n,
    input wire [`DATA_WIDTH-1:0] pc,
    output [`DATA_WIDTH-1:0] instr
);

reg [7:0] memory [0:1023]; // 1KB Instruction Memory

assign instr = {memory[pc + 3], memory[pc + 2], memory[pc + 1], memory[pc]};

// always @(negedge clk or negedge rst_n) begin
//     if (!rst_n) begin
//         // Reset logic if needed
//         instr <= 32'h0000_0000;
//     end
//     else begin
//         instr <= {memory[ps + 3], memory[ps + 2], memory[ps + 1], memory[ps]};
//     end
// end

initial begin
//     // Example instructions (in little-endian format)
    // memory[0]   = 8'h13; // addi x0, x0, 0
    // memory[1]   = 8'h00;
    // memory[2]   = 8'h00;
    // memory[3]   = 8'h00;

    // memory[4]   = 8'h93; // addi x1, x0, 5
    // memory[5]   = 8'h00;
    // memory[6]   = 8'h50;
    // memory[7]   = 8'h00;

    // memory[8]   = 8'h13; // addi x2, x0, 10
    // memory[9]   = 8'h01;
    // memory[10]  = 8'hA0;
    // memory[11]  = 8'h00;

    // memory[12]  = 8'hB3; // add x3, x1, x2
    // memory[13]  = 8'h81;
    // memory[14]  = 8'h20;
    // memory[15]  = 8'h00;

    // //addi, x4, x0, 15
    // memory[16]  = 8'h13;
    // memory[17]  = 8'h02;
    // memory[18]  = 8'hF0;
    // memory[19]  = 8'h00;

    // memory[20]  = 8'h63; // beq x3, x4, 28
    // memory[21]  = 8'h84;
    // memory[22]  = 8'h41;
    // memory[23]  = 8'h00;

    // memory[24] = 8'h93; //addi x5, x0, 1 should be skipped
    // memory[25] = 8'h02; 
    // memory[26] = 8'h10; 
    // memory[27] = 8'h00;

    // memory[28] = 8'h93; // addi x5, x0, 2
    // memory[29] = 8'h02; 
    // memory[30] = 8'h20; 
    // memory[31] = 8'h00;

//     // 0x0C: addi x3, x0, -1   -> 0xFFF00193
//     memory[28] = 8'h93; 
//     memory[29] = 8'h01; 
//     memory[30] = 8'hF0; 
//     memory[31] = 8'hFF;

//   // 0x10: sb x3, 4(x0)      -> 0x00300223
//     memory[32] = 8'h23; 
//     memory[33] = 8'h02; 
//     memory[34] = 8'h30; 
//     memory[35] = 8'h00;

//   // 0x14: lb x4, 4(x0)      -> 0x00400203
//     memory[36] = 8'h03; 
//     memory[37] = 8'h02; 
//     memory[38] = 8'h40; 
//     memory[39] = 8'h00;

//   // 0x18: lbu x5, 4(x0)     -> 0x00404283
//     memory[40] = 8'h83; 
//     memory[41] = 8'h42;
//     memory[42] = 8'h40; 
//     memory[43] = 8'h00;

// // 0x00: 0x00001697  auipc x13, 0x1
//   memory[0]  = 8'h97; 
//   memory[1]  = 8'h16; 
//   memory[2]  = 8'h00; 
//   memory[3]  = 8'h00;

//   // 0x04: 0x12345637  lui x12, 0x12345
//   memory[4]  = 8'h37; 
//   memory[5]  = 8'h56;
//   memory[6]  = 8'h34; 
//   memory[7]  = 8'h12;

//   // 0x08: 0x008000EF  jal x1, +8
//   memory[8]  = 8'hEF; memory[9]  = 8'h00; memory[10] = 8'h80; memory[11] = 8'h00;

//   // 0x0C: 0x05500513  addi x10, x0, 0x55  (should be skipped first time)
//   memory[12] = 8'h13; memory[13] = 8'h05; memory[14] = 8'h50; memory[15] = 8'h05;

//   // 0x10: 0x11100513  addi x10, x0, 0x111
//   memory[16] = 8'h13; memory[17] = 8'h05; memory[18] = 8'h10; memory[19] = 8'h11;

//   // 0x14: 0x00008067  jalr x0, 0(x1)
//   memory[20] = 8'h67; memory[21] = 8'h80; memory[22] = 8'h00; memory[23] = 8'h00;

//   // 0x18: 0x22200593  addi x11, x0, 0x222
//   memory[24] = 8'h93; memory[25] = 8'h05; memory[26] = 8'h20; memory[27] = 8'h22;

//   // 0x1C: 0x0000006F  jal x0, 0
//   memory[28] = 8'h6F; memory[29] = 8'h00; memory[30] = 8'h00; memory[31] = 8'h00;

    // Add more instructions as needed

// 0x00: addi x1, x0, 0        (0x00000093)
memory[0]  = 8'h93;
memory[1]  = 8'h00;
memory[2]  = 8'h00;
memory[3]  = 8'h00;

// 0x04: addi x2, x0, 7        (0x00700113)
memory[4]  = 8'h13;
memory[5]  = 8'h01;
memory[6]  = 8'h70;
memory[7]  = 8'h00;

// 0x08: sw x2, 0(x1)          (0x0020A023)
memory[8]  = 8'h23;
memory[9]  = 8'hA0;
memory[10] = 8'h20;
memory[11] = 8'h00;

// 0x0C: lw x3, 0(x1)          (0x0000A183)
memory[12] = 8'h83;
memory[13] = 8'hA1;
memory[14] = 8'h00;
memory[15] = 8'h00;

// 0x10: addi x4, x3, 1        (0x00118213)  // load-use hazard here
memory[16] = 8'h13;
memory[17] = 8'h82;
memory[18] = 8'h11;
memory[19] = 8'h00;
end


endmodule
