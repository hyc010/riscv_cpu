// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*2:0*/ top__DOT__id_control_mem_read;
        CData/*1:0*/ top__DOT__id_control_mem_write;
        CData/*1:0*/ top__DOT__id_control_Wb_sel;
        CData/*0:0*/ top__DOT__id_control_wb_en;
        CData/*0:0*/ top__DOT__id_control_ALU_a_source;
        CData/*0:0*/ top__DOT__id_control_ALU_b_source;
        CData/*4:0*/ top__DOT__id_control_alu_code;
        CData/*5:0*/ top__DOT__id_control_branch_flag;
        CData/*0:0*/ top__DOT__id_JAL_taken;
        CData/*4:0*/ top__DOT__ex_data_rs1_addr;
        CData/*4:0*/ top__DOT__ex_data_rs2_addr;
        CData/*4:0*/ top__DOT__ex_data_rd_addr;
        CData/*2:0*/ top__DOT__ex_control_mem_read;
        CData/*1:0*/ top__DOT__ex_control_mem_write;
        CData/*1:0*/ top__DOT__ex_control_Wb_sel;
        CData/*0:0*/ top__DOT__ex_control_wb_en;
        CData/*0:0*/ top__DOT__ex_control_ALU_a_source;
        CData/*0:0*/ top__DOT__ex_control_ALU_b_source;
        CData/*0:0*/ top__DOT__ex_JAL_taken;
        CData/*0:0*/ top__DOT__ex_redirect_taken;
        CData/*4:0*/ top__DOT__ex_control_alu_code;
        CData/*5:0*/ top__DOT__ex_control_branch_flag;
        CData/*2:0*/ top__DOT__me_control_mem_read;
        CData/*1:0*/ top__DOT__me_control_mem_write;
        CData/*1:0*/ top__DOT__me_control_Wb_sel;
        CData/*0:0*/ top__DOT__me_control_wb_en;
        CData/*4:0*/ top__DOT__me_data_rd_addr;
        CData/*1:0*/ top__DOT__wb_control_Wb_sel;
        CData/*4:0*/ top__DOT__wb_rd_addr;
        CData/*0:0*/ top__DOT__wb_control_wb_en;
        CData/*2:0*/ top__DOT__top_IDU__DOT__imm_type;
        CData/*0:0*/ top__DOT__top_EXU__DOT__ex_branch_taken;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__if_pc;
        IData/*31:0*/ top__DOT__id_pc;
        IData/*31:0*/ top__DOT__id_instr;
        IData/*31:0*/ top__DOT__id_pc_plus4;
        IData/*31:0*/ top__DOT__id_data_imm;
        IData/*31:0*/ top__DOT__ex_data_imm;
        IData/*31:0*/ top__DOT__ex_data_pc;
        IData/*31:0*/ top__DOT__ex_data_rs1_data;
        IData/*31:0*/ top__DOT__ex_data_rs2_data;
        IData/*31:0*/ top__DOT__ex_data_alu_result;
        IData/*31:0*/ top__DOT__ex_pc_plus4;
        IData/*31:0*/ top__DOT__me_alu_result;
        IData/*31:0*/ top__DOT__me_data_rs2_data;
        IData/*31:0*/ top__DOT__me_pc_plus4;
        IData/*31:0*/ top__DOT__me_rdata;
        IData/*31:0*/ top__DOT__wb_mem_rdata;
        IData/*31:0*/ top__DOT__wb_alu_result;
        IData/*31:0*/ top__DOT__wb_pc_plus4;
        IData/*31:0*/ top__DOT__top_IFU__DOT__IFU_instrfetch__DOT__next_pc;
        IData/*31:0*/ top__DOT__top_EXU__DOT__ex_operand_a;
        IData/*31:0*/ top__DOT__top_EXU__DOT__ex_operand_b;
        IData/*31:0*/ top__DOT__top_MEU__DOT__MEU_DMEM__DOT__i;
        IData/*31:0*/ top__DOT__top_Regfile__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 1024> top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory;
        VlUnpacked<CData/*7:0*/, 32> top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> top__DOT__top_Regfile__DOT__registers;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
