`include "Defines.vh"
module top(
    input wire clk,
    input wire rst_n
);


wire [`ADDR_WIDTH-1:0] if_pc;
wire [`DATA_WIDTH-1:0] if_instr;
wire [`DATA_WIDTH-1:0] if_instr_flush;     //flush instruction to NOP on branch/jump
wire [`ADDR_WIDTH-1:0] if_pc_plus4;

wire [`ADDR_WIDTH-1:0] id_pc;
wire [`DATA_WIDTH-1:0] id_instr;
wire [`DATA_WIDTH-1:0] id_pc_plus4;

wire [`REG_ADDR_WIDTH-1:0] id_data_rs1_addr;
wire [`REG_ADDR_WIDTH-1:0] id_data_rs2_addr;
wire [`REG_ADDR_WIDTH-1:0] id_data_rd_addr;
wire [`DATA_WIDTH-1:0] id_data_imm;
// wire [`DATA_WIDTH-1:0] id_data_rs1;
// wire [`DATA_WIDTH-1:0] id_data_rs2;

wire [2:0] id_control_mem_read;          //Memory Read Enable
wire [1:0] id_control_mem_write;         //Memory Write Enable
wire [1:0] id_control_Wb_sel;            // 00: from ALU, 01: from Memory, 10: from PC+4
wire id_control_wb_en;       // Register File Write Enable
wire id_control_ALU_a_source;              // 0: from rs1, 1: from pc
wire id_control_ALU_b_source;              // 0: from rs2, 1: from immediate
wire [4:0] id_control_alu_code;
wire [5:0] id_control_branch_flag;
wire id_JAL_taken;               //JAL or JALR taken

// Flush ID stage control signals on branch/jump
wire [2:0] id_control_mem_read_flush;
wire [1:0] id_control_mem_write_flush;
wire [1:0] id_control_Wb_sel_flush;
wire id_control_wb_en_flush;

wire [`REG_ADDR_WIDTH-1:0] ex_data_rs1_addr;
wire [`REG_ADDR_WIDTH-1:0] ex_data_rs2_addr;
wire [`REG_ADDR_WIDTH-1:0] ex_data_rd_addr;
wire [`DATA_WIDTH-1:0] ex_data_imm;
wire [`DATA_WIDTH-1:0] ex_data_pc;
wire [2:0] ex_control_mem_read;
wire [1:0] ex_control_mem_write;
wire [1:0] ex_control_Wb_sel;
wire ex_control_wb_en;
wire ex_control_ALU_a_source;
wire ex_control_ALU_b_source;
wire ex_JAL_taken;
wire ex_redirect_taken;
wire [4:0] ex_control_alu_code;
wire [5:0] ex_control_branch_flag;
wire [`DATA_WIDTH-1:0] ex_data_rs1_data;
wire [`DATA_WIDTH-1:0] ex_data_rs2_data;
wire [`DATA_WIDTH-1:0] ex_rs1_data_fwd;
wire [`DATA_WIDTH-1:0] ex_rs2_data_fwd;
wire [`DATA_WIDTH-1:0] ex_data_alu_result;
wire [`DATA_WIDTH-1:0] ex_pc_plus4;

wire [`DATA_WIDTH-1:0] me_alu_result;
// wire [`DATA_WIDTH-1:0] me_data_rs2_data;
wire [2:0] me_control_mem_read;
wire [1:0] me_control_mem_write;
wire [1:0] me_control_Wb_sel;
wire me_control_wb_en;
wire [`DATA_WIDTH-1:0] me_pc_plus4;
wire [`DATA_WIDTH-1:0] me_rdata;
wire [`REG_ADDR_WIDTH-1:0] me_data_rd_addr;
wire [`DATA_WIDTH-1:0] me_rs2_data_fwd;

wire [`DATA_WIDTH-1:0] wb_mem_rdata;
wire [`DATA_WIDTH-1:0] wb_alu_result;
wire [`DATA_WIDTH-1:0] wb_pc_plus4;
wire [`DATA_WIDTH-1:0] wb_wdata;
wire [1:0] wb_control_Wb_sel;
wire [`REG_ADDR_WIDTH-1:0] wb_rd_addr;
wire wb_control_wb_en;

wire stall;

assign if_instr_flush = (ex_redirect_taken) ? `OPC_NOP : if_instr;

assign id_control_mem_read_flush = (ex_redirect_taken || stall) ? 3'b000 : id_control_mem_read;
assign id_control_mem_write_flush = (ex_redirect_taken || stall) ? 2'b00 : id_control_mem_write;
assign id_control_Wb_sel_flush = (ex_redirect_taken || stall) ? 2'b00 : id_control_Wb_sel;
assign id_control_wb_en_flush = (ex_redirect_taken || stall) ? 1'b0 : id_control_wb_en;

assign stall = (ex_control_mem_read != 3'b000) && (ex_data_rd_addr == id_data_rs1_addr || ex_data_rd_addr == id_data_rs2_addr) ? 1'b1 : 1'b0;

IFU top_IFU (
    .clk(clk),
    .rst_n(rst_n),
    .en(!stall),
    .redirect_taken(ex_redirect_taken),
    .redirect_addr(ex_data_alu_result),
    .if_pc(if_pc),
    .if_instr(if_instr),    //flush instruction to NOP on branch/jump
    .if_pc_plus4(if_pc_plus4)
);

IF_ID top_IF_ID (
    .clk(clk),
    .rst_n(rst_n),
    .en(!stall),
    .if_pc(if_pc),
    .if_instr(if_instr_flush),    //flush instruction to NOP on branch/jump
    .if_pc_plus4(if_pc_plus4),
    .id_pc(id_pc),
    .id_instr(id_instr),
    .id_pc_plus4(id_pc_plus4)
);

IDU top_IDU (
    .id_rs1_addr(id_data_rs1_addr),
    .id_rs2_addr(id_data_rs2_addr),
    .id_rd_addr(id_data_rd_addr),
    .id_imm(id_data_imm),
    .id_control_mem_read(id_control_mem_read),
    .id_control_mem_write(id_control_mem_write),
    .id_control_Wb_sel(id_control_Wb_sel),
    .id_control_wb_en(id_control_wb_en),
    .id_control_ALU_a_source(id_control_ALU_a_source),
    .id_control_ALU_b_source(id_control_ALU_b_source),
    .id_control_alu_code(id_control_alu_code),
    .id_control_branch_flag(id_control_branch_flag),
    .id_instr(id_instr),
    .id_JAL_taken(id_JAL_taken)
);

ID_EX top_ID_EX (
    .clk(clk),
    .rst_n(rst_n),
    .en(1'b1),
    .id_data_rs1_addr(id_data_rs1_addr),
    .id_data_rs2_addr(id_data_rs2_addr),
    .id_data_rd_addr(id_data_rd_addr),
    .id_data_imm(id_data_imm),
    .id_data_pc(id_pc),
    .id_control_mem_read(id_control_mem_read_flush),   
    .id_control_mem_write(id_control_mem_write_flush),
    .id_control_Wb_sel(id_control_Wb_sel_flush),
    .id_control_wb_en(id_control_wb_en_flush),
    .id_control_ALU_a_source(id_control_ALU_a_source),
    .id_control_ALU_b_source(id_control_ALU_b_source),
    .id_control_alu_code(id_control_alu_code),
    .id_control_branch_flag(id_control_branch_flag),
    .id_pc_plus4(id_pc_plus4),
    .id_JAL_taken(id_JAL_taken),
    .ex_data_rs1_addr(ex_data_rs1_addr),
    .ex_data_rs2_addr(ex_data_rs2_addr),
    .ex_data_rd_addr(ex_data_rd_addr),
    .ex_data_imm(ex_data_imm),
    .ex_data_pc(ex_data_pc),
    .ex_control_mem_read(ex_control_mem_read),
    .ex_control_mem_write(ex_control_mem_write),
    .ex_control_Wb_sel(ex_control_Wb_sel), 
    .ex_control_wb_en(ex_control_wb_en),
    .ex_control_ALU_a_source(ex_control_ALU_a_source),
    .ex_control_ALU_b_source(ex_control_ALU_b_source),
    .ex_control_alu_code(ex_control_alu_code),
    .ex_control_branch_flag(ex_control_branch_flag),
    .ex_pc_plus4(ex_pc_plus4),
    .ex_JAL_taken(ex_JAL_taken)
);

EXU top_EXU(
    .ex_data_rs1_data(ex_rs1_data_fwd),
    .ex_data_rs2_data(ex_rs2_data_fwd),
    .ex_data_imm(ex_data_imm),
    .ex_data_pc(ex_data_pc),
    .ex_control_ALU_a_source(ex_control_ALU_a_source),
    .ex_control_ALU_b_source(ex_control_ALU_b_source),
    .ex_control_alu_code(ex_control_alu_code),              // Write back enable in execute stage --- IGNORE ---
    .ex_control_branch_flag(ex_control_branch_flag),
    .ex_JAL_taken(ex_JAL_taken), 
    .ex_alu_result(ex_data_alu_result), 
    .ex_redirect_taken(ex_redirect_taken)            //indicates a branch or jump
);

Fwd_unit top_Fwd_unit(
    .me_data_rd_addr(me_data_rd_addr),
    .wb_rd_addr(wb_rd_addr),
    .ex_data_rs1_addr(ex_data_rs1_addr),
    .ex_data_rs2_addr(ex_data_rs2_addr),
    .ex_data_rs1_data(ex_data_rs1_data),
    .ex_data_rs2_data(ex_data_rs2_data),
    .me_control_wb_en,
    .wb_control_wb_en,
    .me_alu_result(me_alu_result),
    .wb_data(wb_wdata),
    .ex_rs1_data_fwd(ex_rs1_data_fwd),
    .ex_rs2_data_fwd(ex_rs2_data_fwd)
);

EX_ME top_EX_ME (
    .clk(clk),
    .rst_n(rst_n),
    .en(1'b1),
    .ex_alu_result(ex_data_alu_result),
    .ex_data_rs2_data(ex_rs2_data_fwd),
    .ex_control_mem_read(ex_control_mem_read),
    .ex_control_mem_write(ex_control_mem_write),
    .ex_control_Wb_sel(ex_control_Wb_sel),
    .ex_control_wb_en(ex_control_wb_en),
    .ex_pc_plus4(ex_pc_plus4),
    .ex_data_rd_addr(ex_data_rd_addr),
    .me_alu_result(me_alu_result),
    .me_data_rs2_data(me_rs2_data_fwd),
    .me_control_mem_read(me_control_mem_read),
    .me_control_mem_write(me_control_mem_write),
    .me_control_Wb_sel(me_control_Wb_sel),
    .me_control_wb_en(me_control_wb_en),
    .me_pc_plus4(me_pc_plus4),
    .me_data_rd_addr(me_data_rd_addr)
);

MEU top_MEU (
    .clk(clk),
    .rst_n(rst_n),
    .me_addr(me_alu_result),
    .me_wdata(me_rs2_data_fwd),
    .me_control_mem_read(me_control_mem_read),
    .me_control_mem_write(me_control_mem_write),
    .me_rdata(me_rdata)
);

ME_WB top_ME_WB (
    .clk(clk),
    .rst_n(rst_n),
    .en(1'b1),
    .me_mem_rdata(me_rdata),
    .me_alu_result(me_alu_result),
    .me_pc_plus4(me_pc_plus4),
    .me_control_Wb_sel(me_control_Wb_sel),
    .me_control_wb_en(me_control_wb_en),
    .me_rd_addr(me_data_rd_addr),
    .wb_mem_rdata(wb_mem_rdata), 
    .wb_alu_result(wb_alu_result), 
    .wb_pc_plus4(wb_pc_plus4), 
    .wb_control_Wb_sel(wb_control_Wb_sel), 
    .wb_control_wb_en(wb_control_wb_en),
    .wb_rd_addr(wb_rd_addr)
);

WBU top_WBU (
    .wb_mem_rdata(wb_mem_rdata),
    .wb_alu_result(wb_alu_result),
    .wb_pc_plus4(wb_pc_plus4),
    .wb_control_Wb_sel(wb_control_Wb_sel),
    // .wb_control_wb_en(wb_control_wb_en),
    .wb_wdata(wb_wdata)
);

RegisterFile top_Regfile (
    .clk(clk),
    .rst_n(rst_n),
    .read_addr1(ex_data_rs1_addr),
    .read_addr2(ex_data_rs2_addr),
    .write_addr(wb_rd_addr), 
    .write_data(wb_wdata), 
    .we(wb_control_wb_en), 
    .read_data1(ex_data_rs1_data),
    .read_data2(ex_data_rs2_data)
);

endmodule
