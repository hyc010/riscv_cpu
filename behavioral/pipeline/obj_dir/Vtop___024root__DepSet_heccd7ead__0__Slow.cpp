// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0U] = 0x93U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[1U] = 0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[2U] = 0x50U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[3U] = 0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[4U] = 0x13U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[5U] = 1U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[6U] = 0xa0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[7U] = 0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[8U] = 0xb3U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[9U] = 0x81U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0xaU] = 0x20U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0xbU] = 0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0xcU] = 0x13U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0xdU] = 2U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0xeU] = 0xf0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0xfU] = 0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0x10U] = 0x63U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0x11U] = 4U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0x12U] = 0U;
    vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[0x13U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__id_control_ALU_a_source = 0U;
    vlSelf->top__DOT__id_control_mem_read = 0U;
    vlSelf->top__DOT__id_control_mem_write = 0U;
    if ((1U & (~ (vlSelf->top__DOT__id_instr >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__id_instr >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__id_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__id_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_mem_read 
                                    = ((0x4000U & vlSelf->top__DOT__id_instr)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__id_instr)
                                            ? 3U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__id_instr)
                                             ? 6U : 5U))
                                        : ((0x2000U 
                                            & vlSelf->top__DOT__id_instr)
                                            ? 3U : 
                                           ((0x1000U 
                                             & vlSelf->top__DOT__id_instr)
                                             ? 2U : 1U)));
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__id_instr)) {
            if ((1U & (~ (vlSelf->top__DOT__id_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__id_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_mem_write 
                                    = ((0U == (7U & 
                                               (vlSelf->top__DOT__id_instr 
                                                >> 0xcU)))
                                        ? 1U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__id_instr 
                                                     >> 0xcU)))
                                                 ? 2U
                                                 : 3U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__id_control_Wb_sel = 0U;
    vlSelf->top__DOT__id_control_ALU_b_source = 0U;
    vlSelf->top__DOT__id_control_branch_flag = 0U;
    vlSelf->top__DOT__id_control_wb_en = 0U;
    vlSelf->top__DOT__id_JAL_taken = 0U;
    if ((0x40U & vlSelf->top__DOT__id_instr)) {
        if ((0x20U & vlSelf->top__DOT__id_instr)) {
            if ((1U & (~ (vlSelf->top__DOT__id_instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__id_instr)) {
                    if ((4U & vlSelf->top__DOT__id_instr)) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_ALU_a_source = 1U;
                                vlSelf->top__DOT__id_control_alu_code = 0U;
                                vlSelf->top__DOT__id_control_Wb_sel = 2U;
                                vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                                vlSelf->top__DOT__id_control_wb_en = 1U;
                                vlSelf->top__DOT__id_JAL_taken = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSelf->top__DOT__id_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_ALU_a_source = 1U;
                            }
                        }
                    }
                    if ((4U & vlSelf->top__DOT__id_instr)) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_alu_code = 0x10U;
                                vlSelf->top__DOT__id_control_Wb_sel = 2U;
                                vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                                vlSelf->top__DOT__id_control_wb_en = 1U;
                                vlSelf->top__DOT__id_JAL_taken = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->top__DOT__id_instr)) {
                        if ((1U & vlSelf->top__DOT__id_instr)) {
                            vlSelf->top__DOT__id_control_alu_code = 0U;
                            vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__id_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                if ((0x4000U & vlSelf->top__DOT__id_instr)) {
                                    vlSelf->top__DOT__id_control_branch_flag 
                                        = ((0x2000U 
                                            & vlSelf->top__DOT__id_instr)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__id_instr)
                                                ? (0x20U 
                                                   | (IData)(vlSelf->top__DOT__id_control_branch_flag))
                                                : (0x10U 
                                                   | (IData)(vlSelf->top__DOT__id_control_branch_flag)))
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__id_instr)
                                                ? (8U 
                                                   | (IData)(vlSelf->top__DOT__id_control_branch_flag))
                                                : (4U 
                                                   | (IData)(vlSelf->top__DOT__id_control_branch_flag))));
                                } else if ((1U & (~ 
                                                  (vlSelf->top__DOT__id_instr 
                                                   >> 0xdU)))) {
                                    vlSelf->top__DOT__id_control_branch_flag 
                                        = ((0x1000U 
                                            & vlSelf->top__DOT__id_instr)
                                            ? (2U | (IData)(vlSelf->top__DOT__id_control_branch_flag))
                                            : (1U | (IData)(vlSelf->top__DOT__id_control_branch_flag)));
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__top_IDU__DOT__imm_type 
                = ((0x10U & vlSelf->top__DOT__id_instr)
                    ? 0U : ((8U & vlSelf->top__DOT__id_instr)
                             ? ((4U & vlSelf->top__DOT__id_instr)
                                 ? ((2U & vlSelf->top__DOT__id_instr)
                                     ? ((1U & vlSelf->top__DOT__id_instr)
                                         ? 5U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSelf->top__DOT__id_instr)
                              ? ((2U & vlSelf->top__DOT__id_instr)
                                  ? ((1U & vlSelf->top__DOT__id_instr)
                                      ? 1U : 0U) : 0U)
                              : ((2U & vlSelf->top__DOT__id_instr)
                                  ? ((1U & vlSelf->top__DOT__id_instr)
                                      ? 3U : 0U) : 0U))));
        } else {
            vlSelf->top__DOT__top_IDU__DOT__imm_type = 0U;
        }
    } else {
        if ((1U & (~ (vlSelf->top__DOT__id_instr >> 5U)))) {
            if ((0x10U & vlSelf->top__DOT__id_instr)) {
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__id_instr)) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_ALU_a_source = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelf->top__DOT__id_instr)) {
            if ((0x10U & vlSelf->top__DOT__id_instr)) {
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__id_instr)) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_alu_code = 0x11U;
                                vlSelf->top__DOT__id_control_Wb_sel = 0U;
                                vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                                vlSelf->top__DOT__id_control_wb_en = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->top__DOT__id_instr)) {
                        if ((1U & vlSelf->top__DOT__id_instr)) {
                            vlSelf->top__DOT__id_control_alu_code 
                                = (((((((((0U == ((0x3f8U 
                                                   & (vlSelf->top__DOT__id_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top__DOT__id_instr 
                                                        >> 0xcU)))) 
                                          | (0x100U 
                                             == ((0x3f8U 
                                                  & (vlSelf->top__DOT__id_instr 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->top__DOT__id_instr 
                                                       >> 0xcU))))) 
                                         | (7U == (
                                                   (0x3f8U 
                                                    & (vlSelf->top__DOT__id_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top__DOT__id_instr 
                                                         >> 0xcU))))) 
                                        | (6U == ((0x3f8U 
                                                   & (vlSelf->top__DOT__id_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top__DOT__id_instr 
                                                        >> 0xcU))))) 
                                       | (4U == ((0x3f8U 
                                                  & (vlSelf->top__DOT__id_instr 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->top__DOT__id_instr 
                                                       >> 0xcU))))) 
                                      | (2U == ((0x3f8U 
                                                 & (vlSelf->top__DOT__id_instr 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->top__DOT__id_instr 
                                                      >> 0xcU))))) 
                                     | (3U == ((0x3f8U 
                                                & (vlSelf->top__DOT__id_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->top__DOT__id_instr 
                                                     >> 0xcU))))) 
                                    | (1U == ((0x3f8U 
                                               & (vlSelf->top__DOT__id_instr 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->top__DOT__id_instr 
                                                    >> 0xcU)))))
                                    ? ((0U == ((0x3f8U 
                                                & (vlSelf->top__DOT__id_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->top__DOT__id_instr 
                                                     >> 0xcU))))
                                        ? 0U : ((0x100U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->top__DOT__id_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top__DOT__id_instr 
                                                        >> 0xcU))))
                                                 ? 1U
                                                 : 
                                                ((7U 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->top__DOT__id_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->top__DOT__id_instr 
                                                         >> 0xcU))))
                                                  ? 2U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->top__DOT__id_instr 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->top__DOT__id_instr 
                                                          >> 0xcU))))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->top__DOT__id_instr 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->top__DOT__id_instr 
                                                           >> 0xcU))))
                                                    ? 4U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->top__DOT__id_instr 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->top__DOT__id_instr 
                                                            >> 0xcU))))
                                                     ? 5U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->top__DOT__id_instr 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->top__DOT__id_instr 
                                                             >> 0xcU))))
                                                      ? 6U
                                                      : 7U)))))))
                                    : ((5U == ((0x3f8U 
                                                & (vlSelf->top__DOT__id_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->top__DOT__id_instr 
                                                     >> 0xcU))))
                                        ? 8U : ((0x105U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->top__DOT__id_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->top__DOT__id_instr 
                                                        >> 0xcU))))
                                                 ? 9U
                                                 : 0U)));
                            vlSelf->top__DOT__id_control_wb_en = 1U;
                        }
                    }
                }
                vlSelf->top__DOT__top_IDU__DOT__imm_type 
                    = ((8U & vlSelf->top__DOT__id_instr)
                        ? 0U : ((4U & vlSelf->top__DOT__id_instr)
                                 ? ((2U & vlSelf->top__DOT__id_instr)
                                     ? ((1U & vlSelf->top__DOT__id_instr)
                                         ? 4U : 0U)
                                     : 0U) : 0U));
            } else {
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__id_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__id_instr)) {
                            if ((1U & vlSelf->top__DOT__id_instr)) {
                                vlSelf->top__DOT__id_control_alu_code = 0U;
                                vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                            }
                        }
                    }
                }
                vlSelf->top__DOT__top_IDU__DOT__imm_type 
                    = ((8U & vlSelf->top__DOT__id_instr)
                        ? 0U : ((4U & vlSelf->top__DOT__id_instr)
                                 ? 0U : ((2U & vlSelf->top__DOT__id_instr)
                                          ? ((1U & vlSelf->top__DOT__id_instr)
                                              ? 2U : 0U)
                                          : 0U)));
            }
        } else if ((0x10U & vlSelf->top__DOT__id_instr)) {
            if ((1U & (~ (vlSelf->top__DOT__id_instr 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__id_instr)) {
                    if ((2U & vlSelf->top__DOT__id_instr)) {
                        if ((1U & vlSelf->top__DOT__id_instr)) {
                            vlSelf->top__DOT__id_control_alu_code = 0U;
                            vlSelf->top__DOT__id_control_Wb_sel = 0U;
                            vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                            vlSelf->top__DOT__id_control_wb_en = 1U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__id_instr)) {
                    if ((1U & vlSelf->top__DOT__id_instr)) {
                        vlSelf->top__DOT__id_control_alu_code 
                            = ((0x4000U & vlSelf->top__DOT__id_instr)
                                ? ((0x2000U & vlSelf->top__DOT__id_instr)
                                    ? ((0x1000U & vlSelf->top__DOT__id_instr)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->top__DOT__id_instr)
                                     ? ((0x40000000U 
                                         & vlSelf->top__DOT__id_instr)
                                         ? 9U : 8U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->top__DOT__id_instr)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__id_instr)
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__id_instr)
                                                    ? 7U
                                                    : 0U)));
                        vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                        vlSelf->top__DOT__id_control_wb_en = 1U;
                    }
                }
            }
            vlSelf->top__DOT__top_IDU__DOT__imm_type 
                = ((8U & vlSelf->top__DOT__id_instr)
                    ? 0U : ((4U & vlSelf->top__DOT__id_instr)
                             ? ((2U & vlSelf->top__DOT__id_instr)
                                 ? ((1U & vlSelf->top__DOT__id_instr)
                                     ? 4U : 0U) : 0U)
                             : ((2U & vlSelf->top__DOT__id_instr)
                                 ? ((1U & vlSelf->top__DOT__id_instr)
                                     ? 1U : 0U) : 0U)));
        } else {
            if ((1U & (~ (vlSelf->top__DOT__id_instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__id_instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__id_instr)) {
                        if ((1U & vlSelf->top__DOT__id_instr)) {
                            vlSelf->top__DOT__id_control_alu_code = 0U;
                            vlSelf->top__DOT__id_control_Wb_sel = 1U;
                            vlSelf->top__DOT__id_control_ALU_b_source = 1U;
                            vlSelf->top__DOT__id_control_wb_en = 1U;
                        }
                    }
                }
            }
            vlSelf->top__DOT__top_IDU__DOT__imm_type 
                = ((8U & vlSelf->top__DOT__id_instr)
                    ? 0U : ((4U & vlSelf->top__DOT__id_instr)
                             ? 0U : ((2U & vlSelf->top__DOT__id_instr)
                                      ? ((1U & vlSelf->top__DOT__id_instr)
                                          ? 1U : 0U)
                                      : 0U)));
        }
    }
    vlSelf->top__DOT__me_rdata = ((0U != (IData)(vlSelf->top__DOT__me_control_mem_read))
                                   ? ((1U == (3U & (IData)(vlSelf->top__DOT__me_control_mem_read)))
                                       ? ((4U & (IData)(vlSelf->top__DOT__me_control_mem_read))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->top__DOT__me_alu_result)] 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                              [(0x1fU 
                                                & vlSelf->top__DOT__me_alu_result)])
                                           : vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                          [(0x1fU & vlSelf->top__DOT__me_alu_result)])
                                       : ((2U == (3U 
                                                  & (IData)(vlSelf->top__DOT__me_control_mem_read)))
                                           ? ((4U & (IData)(vlSelf->top__DOT__me_control_mem_read))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                                  [
                                                                  (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelf->top__DOT__me_alu_result))] 
                                                                  >> 7U)))) 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->top__DOT__me_alu_result))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                     [
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__me_alu_result)]))
                                               : ((
                                                   vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->top__DOT__me_alu_result))] 
                                                   << 8U) 
                                                  | vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__me_alu_result)]))
                                           : ((3U == 
                                               (3U 
                                                & (IData)(vlSelf->top__DOT__me_control_mem_read)))
                                               ? ((
                                                   vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->top__DOT__me_alu_result))] 
                                                   << 0x18U) 
                                                  | ((vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->top__DOT__me_alu_result))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                         [
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->top__DOT__me_alu_result))] 
                                                         << 8U) 
                                                        | vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory
                                                        [
                                                        (0x1fU 
                                                         & vlSelf->top__DOT__me_alu_result)])))
                                               : 0U)))
                                   : 0U);
    vlSelf->top__DOT__ex_data_rs1_data = ((0U == (IData)(vlSelf->top__DOT__ex_data_rs1_addr))
                                           ? 0U : vlSelf->top__DOT__top_Regfile__DOT__registers
                                          [vlSelf->top__DOT__ex_data_rs1_addr]);
    vlSelf->top__DOT__ex_data_rs2_data = ((0U == (IData)(vlSelf->top__DOT__ex_data_rs2_addr))
                                           ? 0U : vlSelf->top__DOT__top_Regfile__DOT__registers
                                          [vlSelf->top__DOT__ex_data_rs2_addr]);
    vlSelf->top__DOT__id_data_imm = ((1U == (IData)(vlSelf->top__DOT__top_IDU__DOT__imm_type))
                                      ? (((- (IData)(
                                                     (vlSelf->top__DOT__id_instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->top__DOT__id_instr 
                                            >> 0x14U))
                                      : ((2U == (IData)(vlSelf->top__DOT__top_IDU__DOT__imm_type))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__id_instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__id_instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__id_instr 
                                                      >> 7U))))
                                          : ((3U == (IData)(vlSelf->top__DOT__top_IDU__DOT__imm_type))
                                              ? (((- (IData)(
                                                             (vlSelf->top__DOT__id_instr 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & (vlSelf->top__DOT__id_instr 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__id_instr 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->top__DOT__id_instr 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->top__DOT__id_instr 
                                                                >> 7U))))))
                                              : ((4U 
                                                  == (IData)(vlSelf->top__DOT__top_IDU__DOT__imm_type))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->top__DOT__id_instr)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->top__DOT__top_IDU__DOT__imm_type))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->top__DOT__id_instr 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->top__DOT__id_instr 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->top__DOT__id_instr) 
                                                         | ((0x800U 
                                                             & (vlSelf->top__DOT__id_instr 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->top__DOT__id_instr 
                                                                  >> 0x14U))))))
                                                   : 0U)))));
    vlSelf->top__DOT__top_EXU__DOT__ex_operand_a = 
        ((IData)(vlSelf->top__DOT__ex_control_ALU_a_source)
          ? ((IData)(vlSelf->top__DOT__ex_control_ALU_a_source)
              ? vlSelf->top__DOT__ex_data_pc : 0U) : vlSelf->top__DOT__ex_data_rs1_data);
    vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 0U;
    if (((IData)(vlSelf->top__DOT__ex_control_branch_flag) 
         & (vlSelf->top__DOT__ex_data_rs1_data == vlSelf->top__DOT__ex_data_rs2_data))) {
        vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 1U;
    } else if ((((IData)(vlSelf->top__DOT__ex_control_branch_flag) 
                 >> 1U) & (vlSelf->top__DOT__ex_data_rs1_data 
                           != vlSelf->top__DOT__ex_data_rs2_data))) {
        vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 1U;
    } else if ((((IData)(vlSelf->top__DOT__ex_control_branch_flag) 
                 >> 2U) & VL_LTS_III(32, vlSelf->top__DOT__ex_data_rs1_data, vlSelf->top__DOT__ex_data_rs2_data))) {
        vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 1U;
    } else if ((((IData)(vlSelf->top__DOT__ex_control_branch_flag) 
                 >> 3U) & VL_GTES_III(32, vlSelf->top__DOT__ex_data_rs1_data, vlSelf->top__DOT__ex_data_rs2_data))) {
        vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 1U;
    } else if ((((IData)(vlSelf->top__DOT__ex_control_branch_flag) 
                 >> 4U) & (vlSelf->top__DOT__ex_data_rs1_data 
                           < vlSelf->top__DOT__ex_data_rs2_data))) {
        vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 1U;
    } else if ((((IData)(vlSelf->top__DOT__ex_control_branch_flag) 
                 >> 5U) & (vlSelf->top__DOT__ex_data_rs1_data 
                           >= vlSelf->top__DOT__ex_data_rs2_data))) {
        vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = 1U;
    }
    vlSelf->top__DOT__top_EXU__DOT__ex_operand_b = 
        ((IData)(vlSelf->top__DOT__ex_control_ALU_b_source)
          ? ((IData)(vlSelf->top__DOT__ex_control_ALU_b_source)
              ? vlSelf->top__DOT__ex_data_imm : 0U)
          : vlSelf->top__DOT__ex_data_rs2_data);
    vlSelf->top__DOT__ex_redirect_taken = ((IData)(vlSelf->top__DOT__ex_JAL_taken) 
                                           | (IData)(vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken));
    vlSelf->top__DOT__ex_data_alu_result = ((0x10U 
                                             & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                             ? ((8U 
                                                 & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                    ? vlSelf->top__DOT__top_EXU__DOT__ex_operand_b
                                                    : 
                                                   (0xfffffffeU 
                                                    & (vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                       + vlSelf->top__DOT__top_EXU__DOT__ex_operand_b))))))
                                             : ((8U 
                                                 & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                    ? 0U
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__top_EXU__DOT__ex_operand_a, 1U))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                    ? 
                                                   VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__top_EXU__DOT__ex_operand_a, 1U)
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                    ? 
                                                   ((vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                     < vlSelf->top__DOT__top_EXU__DOT__ex_operand_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                    ^ vlSelf->top__DOT__top_EXU__DOT__ex_operand_b)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                    ? 
                                                   (vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                    | vlSelf->top__DOT__top_EXU__DOT__ex_operand_b)
                                                    : 
                                                   (vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                    & vlSelf->top__DOT__top_EXU__DOT__ex_operand_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ex_control_alu_code))
                                                    ? 
                                                   (vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                    - vlSelf->top__DOT__top_EXU__DOT__ex_operand_b)
                                                    : 
                                                   (vlSelf->top__DOT__top_EXU__DOT__ex_operand_a 
                                                    + vlSelf->top__DOT__top_EXU__DOT__ex_operand_b))))));
    vlSelf->top__DOT__top_IFU__DOT__IFU_instrfetch__DOT__next_pc 
        = ((IData)(vlSelf->top__DOT__ex_redirect_taken)
            ? ((IData)(vlSelf->top__DOT__ex_redirect_taken)
                ? vlSelf->top__DOT__ex_data_alu_result
                : 0U) : ((IData)(4U) + vlSelf->top__DOT__if_pc));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_control_mem_read = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__id_control_mem_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_control_Wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_control_wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_control_ALU_a_source = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_control_ALU_b_source = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_control_alu_code = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__id_control_branch_flag = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__id_JAL_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_data_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_data_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_data_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_data_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_control_mem_read = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ex_control_mem_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ex_control_Wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ex_control_wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_control_ALU_a_source = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_control_ALU_b_source = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_JAL_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_redirect_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_control_alu_code = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_control_branch_flag = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__ex_data_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_data_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_data_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__me_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__me_data_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__me_control_mem_read = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__me_control_mem_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__me_control_Wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__me_control_wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__me_pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__me_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__me_data_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__wb_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_control_Wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__wb_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__wb_control_wb_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__top_IFU__DOT__IFU_instrfetch__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__top_IFU__DOT__IFU_IMEM__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__top_IDU__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__top_EXU__DOT__ex_operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_EXU__DOT__ex_operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__top_EXU__DOT__ex_branch_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__top_MEU__DOT__MEU_DMEM__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__top_Regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__top_Regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
