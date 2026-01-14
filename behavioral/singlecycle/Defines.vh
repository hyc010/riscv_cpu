`ifndef DEFINES_VH
`define DEFINES_VH

//Parameters
`define DATA_WIDTH      32
`define ADDR_WIDTH      32
`define REG_ADDR_WIDTH  5

//IMM Types
`define IMM_R          3'b000
`define IMM_I          3'b001
`define IMM_S          3'b010
`define IMM_B          3'b011
`define IMM_U          3'b100
`define IMM_J          3'b101 

//alu operand sources
`define alu_a_source_rs1 1'b0
`define alu_a_source_pc  1'b1
`define alu_b_source_rs2 1'b0
`define alu_b_source_imm 1'b1

//DMEM Operation Codes
//Memory Read Types
`define MEM_READ_BYTE    3'b001
`define MEM_READ_HALF    3'b010
`define MEM_READ_WORD    3'b011
`define MEM_READ_BYTE_U  3'b101
`define MEM_READ_HALF_U  3'b110
//Memory Write Types
`define MEM_WRITE_BYTE   2'b01
`define MEM_WRITE_HALF   2'b10
`define MEM_WRITE_WORD   2'b11

`define DMEM_SIZE       32  //Data Memory Size in bytes


//Instruction Opcodes
`define OPC_OP        7'b0110011
`define OPC_OP_IMM    7'b0010011
`define OPC_LOAD      7'b0000011
`define OPC_STORE     7'b0100011
`define OPC_BRANCH    7'b1100011
`define OPC_JAL       7'b1101111
`define OPC_JALR      7'b1100111
`define OPC_LUI       7'b0110111
`define OPC_AUIPC     7'b0010111

//ALU Operation Codes
`define ALU_ADD       5'b00000        // Addition
`define ALU_SUB       5'b00001        // Subtraction
`define ALU_AND       5'b00010        // Bitwise AND
`define ALU_OR        5'b00011        // Bitwise OR
`define ALU_XOR       5'b00100        // Bitwise XOR
`define ALU_SLT       5'b00101        // Set Less Than
`define ALU_SLTU      5'b00110        // Set Less Than Unsigned
`define ALU_SLL       5'b00111        // Shift Left Logical
`define ALU_SRL       5'b01000        // Shift Right Logical
`define ALU_SRA       5'b01001        // Shift Right Arithmetic
`define ALU_BEQ       5'b01010        // Branch if Equal
`define ALU_BNE       5'b01011        // Branch if Not Equal
`define ALU_BLT       5'b01100        // Branch if Less Than
`define ALU_BGE       5'b01101        // Branch if Greater Than or Equal
`define ALU_BLTU      5'b01110        // Branch if Less Than Unsigned
`define ALU_BGEU      5'b01111        // Branch if Greater Than or Equal Unsigned
`define ALU_JALR_ADD  5'b10000        // JALR Addition
`define ALU_LUI       5'b10001        // Load Upper Immediate
`define ALU_AUIPC     5'b10010        // Add Upper Immediate to PC

`endif 


