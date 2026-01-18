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
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ top__DOT__branch_taken;
    CData/*0:0*/ top__DOT__PCsel;
    CData/*2:0*/ top__DOT__o_mem_read;
    CData/*1:0*/ top__DOT__o_mem_write;
    CData/*1:0*/ top__DOT__o_Wb_sel;
    CData/*0:0*/ top__DOT__ALU_a_source;
    CData/*0:0*/ top__DOT__ALU_b_source;
    CData/*2:0*/ top__DOT__imm_type;
    CData/*4:0*/ top__DOT__alu_code;
    CData/*0:0*/ top__DOT__flag_beq;
    CData/*0:0*/ top__DOT__flag_bne;
    CData/*0:0*/ top__DOT__flag_blt;
    CData/*0:0*/ top__DOT__flag_bge;
    CData/*0:0*/ top__DOT__flag_bltu;
    CData/*0:0*/ top__DOT__flag_bgeu;
    CData/*0:0*/ top__DOT__regfile_write_enable;
    CData/*7:0*/ __VdfgTmp_hafd6e0d5__0;
    CData/*7:0*/ __VdfgTmp_hac52b07f__0;
    CData/*7:0*/ __VdfgTmp_hafc3b2ef__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgTmp_h304dd487__0;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__imm_out;
    IData/*31:0*/ top__DOT__alu_a;
    IData/*31:0*/ top__DOT__alu_b;
    IData/*31:0*/ top__DOT__alu_result;
    IData/*31:0*/ top__DOT__rs1_data;
    IData/*31:0*/ top__DOT__rs2_data;
    IData/*31:0*/ top__DOT__mem_read_data;
    IData/*31:0*/ top__DOT__DMEM_UNIT__DOT__i;
    IData/*31:0*/ top__DOT__RF__DOT__i;
    IData/*31:0*/ top__DOT__IFU__DOT__next_pc;
    IData/*23:0*/ __VdfgTmp_hfb26c531__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 32> top__DOT__DMEM_UNIT__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__RF__DOT__registers;
    VlUnpacked<CData/*7:0*/, 1024> top__DOT__ITCM__DOT__memory;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
