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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__if_pc),32);
        bufp->chgIData(oldp+1,(((vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                 [(0x3ffU & ((IData)(3U) 
                                             + vlSelf->top__DOT__if_pc))] 
                                 << 0x18U) | ((vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                               [(0x3ffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->top__DOT__if_pc))] 
                                               << 0x10U) 
                                              | ((vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                                  [
                                                  (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__if_pc))] 
                                                  << 8U) 
                                                 | vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                                 [(0x3ffU 
                                                   & vlSelf->top__DOT__if_pc)])))),32);
        bufp->chgIData(oldp+2,(((IData)(vlSelf->top__DOT__ex_redirect_taken)
                                 ? 0x13U : ((vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                             [(0x3ffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->top__DOT__if_pc))] 
                                             << 0x18U) 
                                            | ((vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                                [(0x3ffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->top__DOT__if_pc))] 
                                                << 0x10U) 
                                               | ((vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                                   [
                                                   (0x3ffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->top__DOT__if_pc))] 
                                                   << 8U) 
                                                  | vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory
                                                  [
                                                  (0x3ffU 
                                                   & vlSelf->top__DOT__if_pc)]))))),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__if_pc)),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__id_pc),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__id_instr),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__id_pc_plus4),32);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->top__DOT__id_instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->top__DOT__id_instr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->top__DOT__id_instr 
                                         >> 7U))),5);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__id_data_imm),32);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__id_control_mem_read),3);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__id_control_mem_write),2);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__id_control_Wb_sel),2);
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__id_control_wb_en));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__id_control_ALU_a_source));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__id_control_ALU_b_source));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__id_control_alu_code),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__id_control_branch_flag),6);
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__id_JAL_taken));
        bufp->chgCData(oldp+20,(((IData)(vlSelf->top__DOT____VdfgTmp_h5a7a53d1__0)
                                  ? 0U : (IData)(vlSelf->top__DOT__id_control_mem_read))),3);
        bufp->chgCData(oldp+21,(((IData)(vlSelf->top__DOT____VdfgTmp_h5a7a53d1__0)
                                  ? 0U : (IData)(vlSelf->top__DOT__id_control_mem_write))),2);
        bufp->chgCData(oldp+22,(((IData)(vlSelf->top__DOT____VdfgTmp_h5a7a53d1__0)
                                  ? 0U : (IData)(vlSelf->top__DOT__id_control_Wb_sel))),2);
        bufp->chgBit(oldp+23,(((~ (IData)(vlSelf->top__DOT____VdfgTmp_h5a7a53d1__0)) 
                               & (IData)(vlSelf->top__DOT__id_control_wb_en))));
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__ex_data_rs1_addr),5);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__ex_data_rs2_addr),5);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__ex_data_rd_addr),5);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ex_data_imm),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ex_data_pc),32);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__ex_control_mem_read),3);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__ex_control_mem_write),2);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__ex_control_Wb_sel),2);
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__ex_control_wb_en));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__ex_control_ALU_a_source));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__ex_control_ALU_b_source));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__ex_JAL_taken));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__ex_redirect_taken));
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__ex_control_alu_code),5);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__ex_control_branch_flag),6);
        bufp->chgIData(oldp+39,(((0U == (IData)(vlSelf->top__DOT__ex_data_rs1_addr))
                                  ? 0U : vlSelf->top__DOT__top_Regfile__DOT__registers
                                 [vlSelf->top__DOT__ex_data_rs1_addr])),32);
        bufp->chgIData(oldp+40,(((0U == (IData)(vlSelf->top__DOT__ex_data_rs2_addr))
                                  ? 0U : vlSelf->top__DOT__top_Regfile__DOT__registers
                                 [vlSelf->top__DOT__ex_data_rs2_addr])),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__ex_rs1_data_fwd),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__ex_rs2_data_fwd),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__ex_data_alu_result),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__ex_pc_plus4),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__me_alu_result),32);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__me_control_mem_read),3);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__me_control_mem_write),2);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__me_control_Wb_sel),2);
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__me_control_wb_en));
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__me_pc_plus4),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__me_rdata),32);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__me_data_rd_addr),5);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__me_rs2_data_fwd),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__wb_mem_rdata),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__wb_alu_result),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__wb_pc_plus4),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__wb_wdata),32);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__wb_control_Wb_sel),2);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__wb_rd_addr),5);
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__wb_control_wb_en));
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__stall));
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__top_EXU__DOT__ex_operand_a),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__top_EXU__DOT__ex_operand_b),32);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken));
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__top_Fwd_unit__DOT__rs1_MUX_sel),2);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__top_Fwd_unit__DOT__rs2_MUX_sel),2);
        bufp->chgCData(oldp+67,((vlSelf->top__DOT__id_instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+68,((7U & (vlSelf->top__DOT__id_instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+69,((0x7fU & vlSelf->top__DOT__id_instr)),7);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__top_IDU__DOT__imm_type),3);
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSelf->top__DOT__stall)))));
        bufp->chgIData(oldp+72,(((IData)(vlSelf->top__DOT__ex_redirect_taken)
                                  ? ((IData)(vlSelf->top__DOT__ex_redirect_taken)
                                      ? vlSelf->top__DOT__ex_data_alu_result
                                      : 0U) : ((IData)(4U) 
                                               + vlSelf->top__DOT__if_pc))),32);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[0]),8);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[1]),8);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[2]),8);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[3]),8);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[4]),8);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[5]),8);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[6]),8);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[7]),8);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[8]),8);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[9]),8);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[10]),8);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[11]),8);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[12]),8);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[13]),8);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[14]),8);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[15]),8);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[16]),8);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[17]),8);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[18]),8);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[19]),8);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[20]),8);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[21]),8);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[22]),8);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[23]),8);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[24]),8);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[25]),8);
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[26]),8);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[27]),8);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[28]),8);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[29]),8);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[30]),8);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[31]),8);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__i),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__top_Regfile__DOT__registers[0]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__top_Regfile__DOT__registers[1]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__top_Regfile__DOT__registers[2]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__top_Regfile__DOT__registers[3]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__top_Regfile__DOT__registers[4]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__top_Regfile__DOT__registers[5]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__top_Regfile__DOT__registers[6]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__top_Regfile__DOT__registers[7]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__top_Regfile__DOT__registers[8]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__top_Regfile__DOT__registers[9]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__top_Regfile__DOT__registers[10]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__top_Regfile__DOT__registers[11]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__top_Regfile__DOT__registers[12]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__top_Regfile__DOT__registers[13]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__top_Regfile__DOT__registers[14]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__top_Regfile__DOT__registers[15]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__top_Regfile__DOT__registers[16]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__top_Regfile__DOT__registers[17]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__top_Regfile__DOT__registers[18]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__top_Regfile__DOT__registers[19]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__top_Regfile__DOT__registers[20]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__top_Regfile__DOT__registers[21]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__top_Regfile__DOT__registers[22]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__top_Regfile__DOT__registers[23]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__top_Regfile__DOT__registers[24]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__top_Regfile__DOT__registers[25]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__top_Regfile__DOT__registers[26]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__top_Regfile__DOT__registers[27]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__top_Regfile__DOT__registers[28]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__top_Regfile__DOT__registers[29]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__top_Regfile__DOT__registers[30]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__top_Regfile__DOT__registers[31]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__top_Regfile__DOT__i),32);
    }
    bufp->chgBit(oldp+139,(vlSelf->clk));
    bufp->chgBit(oldp+140,(vlSelf->rst_n));
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
