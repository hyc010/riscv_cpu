// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__pc),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelf->top__DOT__pc)),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__instr),32);
        bufp->chgCData(oldp+3,((0x7fU & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))),7);
        bufp->chgCData(oldp+4,((7U & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                      >> 4U))),3);
        bufp->chgCData(oldp+5,((0x7fU & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                         >> 1U))),7);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->__VdfgTmp_hfb26c531__0 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top__DOT__instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+8,((0x1fU & ((IData)(vlSelf->__VdfgTmp_h304dd487__0) 
                                         >> 7U))),5);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__imm_out),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__alu_a),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__alu_b),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__alu_result),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__rs2_data),32);
        bufp->chgIData(oldp+15,(((0U == (IData)(vlSelf->top__DOT__o_Wb_sel))
                                  ? vlSelf->top__DOT__alu_result
                                  : ((1U == (IData)(vlSelf->top__DOT__o_Wb_sel))
                                      ? vlSelf->top__DOT__mem_read_data
                                      : ((2U == (IData)(vlSelf->top__DOT__o_Wb_sel))
                                          ? ((IData)(4U) 
                                             + vlSelf->top__DOT__pc)
                                          : 0U)))),32);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__branch_taken));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__PCsel));
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__o_mem_read),3);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__o_mem_write),2);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__o_Wb_sel),2);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__ALU_a_source));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__ALU_b_source));
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__imm_type),3);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__alu_code),5);
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__flag_beq));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__flag_bne));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__flag_blt));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__flag_bge));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__flag_bltu));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__flag_bgeu));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__regfile_write_enable));
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__mem_read_data),32);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[0]),8);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[1]),8);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[2]),8);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[3]),8);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[4]),8);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[5]),8);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[6]),8);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[7]),8);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[8]),8);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[9]),8);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[10]),8);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[11]),8);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[12]),8);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[13]),8);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[14]),8);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[15]),8);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[16]),8);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[17]),8);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[18]),8);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[19]),8);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[20]),8);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[21]),8);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[22]),8);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[23]),8);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[24]),8);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[25]),8);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[26]),8);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[27]),8);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[28]),8);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[29]),8);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[30]),8);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__DMEM_UNIT__DOT__memory[31]),8);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__DMEM_UNIT__DOT__i),32);
        bufp->chgIData(oldp+66,(((IData)(vlSelf->top__DOT__PCsel)
                                  ? ((IData)(vlSelf->top__DOT__PCsel)
                                      ? vlSelf->top__DOT__alu_result
                                      : 0U) : ((IData)(4U) 
                                               + vlSelf->top__DOT__pc))),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__RF__DOT__registers[0]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__RF__DOT__registers[1]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__RF__DOT__registers[2]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__RF__DOT__registers[3]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__RF__DOT__registers[4]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__RF__DOT__registers[5]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__RF__DOT__registers[6]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__RF__DOT__registers[7]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__RF__DOT__registers[8]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__RF__DOT__registers[9]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__RF__DOT__registers[10]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__RF__DOT__registers[11]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__RF__DOT__registers[12]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__RF__DOT__registers[13]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__RF__DOT__registers[14]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__RF__DOT__registers[15]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__RF__DOT__registers[16]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__RF__DOT__registers[17]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__RF__DOT__registers[18]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__RF__DOT__registers[19]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__RF__DOT__registers[20]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__RF__DOT__registers[21]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__RF__DOT__registers[22]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__RF__DOT__registers[23]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__RF__DOT__registers[24]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__RF__DOT__registers[25]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__RF__DOT__registers[26]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__RF__DOT__registers[27]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__RF__DOT__registers[28]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__RF__DOT__registers[29]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__RF__DOT__registers[30]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__RF__DOT__registers[31]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__RF__DOT__i),32);
    }
    bufp->chgBit(oldp+100,(vlSelf->clk));
    bufp->chgBit(oldp+101,(vlSelf->rst_n));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
