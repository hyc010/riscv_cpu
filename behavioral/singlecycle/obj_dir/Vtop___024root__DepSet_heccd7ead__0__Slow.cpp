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
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__ITCM__DOT__memory[0U] = 0x97U;
    vlSelf->top__DOT__ITCM__DOT__memory[1U] = 0x16U;
    vlSelf->top__DOT__ITCM__DOT__memory[2U] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[3U] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[4U] = 0x37U;
    vlSelf->top__DOT__ITCM__DOT__memory[5U] = 0x56U;
    vlSelf->top__DOT__ITCM__DOT__memory[6U] = 0x34U;
    vlSelf->top__DOT__ITCM__DOT__memory[7U] = 0x12U;
    vlSelf->top__DOT__ITCM__DOT__memory[8U] = 0xefU;
    vlSelf->top__DOT__ITCM__DOT__memory[9U] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[0xaU] = 0x80U;
    vlSelf->top__DOT__ITCM__DOT__memory[0xbU] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[0xcU] = 0x13U;
    vlSelf->top__DOT__ITCM__DOT__memory[0xdU] = 5U;
    vlSelf->top__DOT__ITCM__DOT__memory[0xeU] = 0x50U;
    vlSelf->top__DOT__ITCM__DOT__memory[0xfU] = 5U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x10U] = 0x13U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x11U] = 5U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x12U] = 0x10U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x13U] = 0x11U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x14U] = 0x67U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x15U] = 0x80U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x16U] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x17U] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x18U] = 0x93U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x19U] = 5U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x1aU] = 0x20U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x1bU] = 0x22U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x1cU] = 0x6fU;
    vlSelf->top__DOT__ITCM__DOT__memory[0x1dU] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x1eU] = 0U;
    vlSelf->top__DOT__ITCM__DOT__memory[0x1fU] = 0U;
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
    // Init
    CData/*7:0*/ __VdfgTmp_haf80729a__0;
    __VdfgTmp_haf80729a__0 = 0;
    // Body
    vlSelf->__VdfgTmp_hafd6e0d5__0 = vlSelf->top__DOT__ITCM__DOT__memory
        [(0x3ffU & ((IData)(3U) + vlSelf->top__DOT__pc))];
    __VdfgTmp_haf80729a__0 = vlSelf->top__DOT__ITCM__DOT__memory
        [(0x3ffU & ((IData)(2U) + vlSelf->top__DOT__pc))];
    vlSelf->__VdfgTmp_hafc3b2ef__0 = vlSelf->top__DOT__ITCM__DOT__memory
        [(0x3ffU & ((IData)(1U) + vlSelf->top__DOT__pc))];
    vlSelf->__VdfgTmp_hac52b07f__0 = vlSelf->top__DOT__ITCM__DOT__memory
        [(0x3ffU & vlSelf->top__DOT__pc)];
    vlSelf->top__DOT__o_Wb_sel = 0U;
    vlSelf->top__DOT__regfile_write_enable = 0U;
    vlSelf->top__DOT__o_mem_write = 0U;
    vlSelf->top__DOT__o_mem_read = 0U;
    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__o_mem_write 
                                    = ((0U == (7U & 
                                               ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                >> 4U)))
                                        ? 1U : ((1U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                     >> 4U)))
                                                 ? 2U
                                                 : 3U));
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__o_mem_read 
                                    = ((0x40U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                        ? ((0x20U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                            ? 3U : 
                                           ((0x10U 
                                             & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                             ? 6U : 5U))
                                        : ((0x20U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                            ? 3U : 
                                           ((0x10U 
                                             & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                             ? 2U : 1U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ALU_a_source = 0U;
    vlSelf->top__DOT__ALU_b_source = 0U;
    vlSelf->top__DOT__flag_beq = 0U;
    vlSelf->top__DOT__flag_bne = 0U;
    vlSelf->top__DOT__flag_blt = 0U;
    vlSelf->top__DOT__flag_bge = 0U;
    vlSelf->top__DOT__flag_bltu = 0U;
    vlSelf->top__DOT__flag_bgeu = 0U;
    vlSelf->__VdfgTmp_h304dd487__0 = (((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hac52b07f__0));
    vlSelf->__VdfgTmp_hfb26c531__0 = (((IData)(__VdfgTmp_haf80729a__0) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_h304dd487__0));
    vlSelf->top__DOT__rs1_data = ((0U == (0x1fU & (vlSelf->__VdfgTmp_hfb26c531__0 
                                                   >> 0xfU)))
                                   ? 0U : vlSelf->top__DOT__RF__DOT__registers
                                  [(0x1fU & (vlSelf->__VdfgTmp_hfb26c531__0 
                                             >> 0xfU))]);
    vlSelf->top__DOT__instr = (((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                << 0x18U) | vlSelf->__VdfgTmp_hfb26c531__0);
    if ((0x40U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__o_Wb_sel = 2U;
                                vlSelf->top__DOT__regfile_write_enable = 1U;
                                vlSelf->top__DOT__alu_code = 0U;
                                vlSelf->top__DOT__ALU_a_source = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__o_Wb_sel = 2U;
                                vlSelf->top__DOT__regfile_write_enable = 1U;
                                vlSelf->top__DOT__alu_code = 0x10U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__alu_code = 0U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__ALU_a_source = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((0x10U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__o_Wb_sel = 0U;
                                vlSelf->top__DOT__regfile_write_enable = 1U;
                                vlSelf->top__DOT__alu_code = 0x11U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__regfile_write_enable = 1U;
                            vlSelf->top__DOT__alu_code 
                                = (((((((((0U == ((0x3f8U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                      << 2U)) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                        >> 4U)))) 
                                          | (0x100U 
                                             == ((0x3f8U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                     << 2U)) 
                                                 | (7U 
                                                    & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                       >> 4U))))) 
                                         | (7U == (
                                                   (0x3f8U 
                                                    & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                       << 2U)) 
                                                   | (7U 
                                                      & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                         >> 4U))))) 
                                        | (6U == ((0x3f8U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                      << 2U)) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                        >> 4U))))) 
                                       | (4U == ((0x3f8U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                     << 2U)) 
                                                 | (7U 
                                                    & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                       >> 4U))))) 
                                      | (2U == ((0x3f8U 
                                                 & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                    << 2U)) 
                                                | (7U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                      >> 4U))))) 
                                     | (3U == ((0x3f8U 
                                                & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                   << 2U)) 
                                               | (7U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                     >> 4U))))) 
                                    | (1U == ((0x3f8U 
                                               & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                  << 2U)) 
                                              | (7U 
                                                 & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                    >> 4U)))))
                                    ? ((0U == ((0x3f8U 
                                                & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                   << 2U)) 
                                               | (7U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                     >> 4U))))
                                        ? 0U : ((0x100U 
                                                 == 
                                                 ((0x3f8U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                      << 2U)) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                        >> 4U))))
                                                 ? 1U
                                                 : 
                                                ((7U 
                                                  == 
                                                  ((0x3f8U 
                                                    & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                       << 2U)) 
                                                   | (7U 
                                                      & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                         >> 4U))))
                                                  ? 2U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   ((0x3f8U 
                                                     & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                        << 2U)) 
                                                    | (7U 
                                                       & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                          >> 4U))))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    ((0x3f8U 
                                                      & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                         << 2U)) 
                                                     | (7U 
                                                        & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                           >> 4U))))
                                                    ? 4U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                          << 2U)) 
                                                      | (7U 
                                                         & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                            >> 4U))))
                                                     ? 5U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                           << 2U)) 
                                                       | (7U 
                                                          & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                             >> 4U))))
                                                      ? 6U
                                                      : 7U)))))))
                                    : ((5U == ((0x3f8U 
                                                & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                   << 2U)) 
                                               | (7U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                     >> 4U))))
                                        ? 8U : ((0x105U 
                                                 == 
                                                 ((0x3f8U 
                                                   & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                      << 2U)) 
                                                  | (7U 
                                                     & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                        >> 4U))))
                                                 ? 9U
                                                 : 0U)));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__alu_code = 0U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__o_Wb_sel = 0U;
                            vlSelf->top__DOT__regfile_write_enable = 1U;
                            vlSelf->top__DOT__alu_code = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        vlSelf->top__DOT__regfile_write_enable = 1U;
                        vlSelf->top__DOT__alu_code 
                            = ((0x40U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                ? ((0x20U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                    ? ((0x10U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                        ? 2U : 3U) : 
                                   ((0x10U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                     ? ((0x40U & (IData)(vlSelf->__VdfgTmp_hafd6e0d5__0))
                                         ? 9U : 8U)
                                     : 4U)) : ((0x20U 
                                                & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))
                                                    ? 7U
                                                    : 0U)));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        vlSelf->top__DOT__o_Wb_sel = 1U;
                        vlSelf->top__DOT__regfile_write_enable = 1U;
                        vlSelf->top__DOT__alu_code = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__ALU_a_source = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__alu_a = ((IData)(vlSelf->top__DOT__ALU_a_source)
                                ? ((IData)(vlSelf->top__DOT__ALU_a_source)
                                    ? vlSelf->top__DOT__pc
                                    : 0U) : vlSelf->top__DOT__rs1_data);
    if ((0x40U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__ALU_b_source = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__ALU_b_source = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        vlSelf->top__DOT__ALU_b_source = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                    >> 4U)))) {
                                            vlSelf->top__DOT__flag_beq = 1U;
                                        }
                                        if ((0x10U 
                                             & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))) {
                                            vlSelf->top__DOT__flag_bne = 1U;
                                        }
                                    }
                                }
                                if ((0x40U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))) {
                                    if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                    >> 4U)))) {
                                            vlSelf->top__DOT__flag_blt = 1U;
                                        }
                                        if ((0x10U 
                                             & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))) {
                                            vlSelf->top__DOT__flag_bge = 1U;
                                        }
                                    }
                                    if ((0x20U & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                    >> 4U)))) {
                                            vlSelf->top__DOT__flag_bltu = 1U;
                                        }
                                        if ((0x10U 
                                             & (IData)(vlSelf->__VdfgTmp_hafc3b2ef__0))) {
                                            vlSelf->top__DOT__flag_bgeu = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__imm_type = ((0x10U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                           ? 0U : (
                                                   (8U 
                                                    & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                       ? 5U
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                       ? 3U
                                                       : 0U)
                                                      : 0U))));
        } else {
            vlSelf->top__DOT__imm_type = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
        if ((0x10U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__ALU_b_source = 1U;
                        }
                    }
                }
            }
            vlSelf->top__DOT__imm_type = ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                      ? 4U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U));
        } else {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__ALU_b_source = 1U;
                        }
                    }
                }
            }
            vlSelf->top__DOT__imm_type = ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)));
        }
    } else if ((0x10U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
        if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        vlSelf->top__DOT__ALU_b_source = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    vlSelf->top__DOT__ALU_b_source = 1U;
                }
            }
        }
        vlSelf->top__DOT__imm_type = ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 4U
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)));
    } else {
        if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        vlSelf->top__DOT__ALU_b_source = 1U;
                    }
                }
            }
        }
        vlSelf->top__DOT__imm_type = ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)));
    }
    vlSelf->top__DOT__imm_out = ((1U == (IData)(vlSelf->top__DOT__imm_type))
                                  ? (((- (IData)((1U 
                                                  & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                     >> 7U)))) 
                                      << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                   << 4U) 
                                                  | (0xfU 
                                                     & ((IData)(__VdfgTmp_haf80729a__0) 
                                                        >> 4U))))
                                  : ((2U == (IData)(vlSelf->top__DOT__imm_type))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                         >> 7U)))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                << 4U)) 
                                            | (0x1fU 
                                               & ((IData)(vlSelf->__VdfgTmp_h304dd487__0) 
                                                  >> 7U))))
                                      : ((3U == (IData)(vlSelf->top__DOT__imm_type))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                             >> 7U)))) 
                                              << 0xdU) 
                                             | ((0x1000U 
                                                 & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                    << 5U)) 
                                                | ((0x800U 
                                                    & ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                          << 4U)) 
                                                      | (0x1eU 
                                                         & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                            << 1U))))))
                                          : ((4U == (IData)(vlSelf->top__DOT__imm_type))
                                              ? (((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                  << 0x18U) 
                                                 | (((IData)(__VdfgTmp_haf80729a__0) 
                                                     << 0x10U) 
                                                    | (0xf000U 
                                                       & ((IData)(vlSelf->__VdfgTmp_hafc3b2ef__0) 
                                                          << 8U))))
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__imm_type))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                                  >> 7U)))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & ((IData)(vlSelf->__VdfgTmp_hafd6e0d5__0) 
                                                         << 0xdU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->__VdfgTmp_hfb26c531__0) 
                                                        | ((0x800U 
                                                            & ((IData)(__VdfgTmp_haf80729a__0) 
                                                               << 7U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->top__DOT__instr 
                                                                 >> 0x14U))))))
                                                  : 0U)))));
    vlSelf->top__DOT__rs2_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)))
                                   ? 0U : vlSelf->top__DOT__RF__DOT__registers
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0x14U))]);
    vlSelf->top__DOT__branch_taken = 0U;
    if (((IData)(vlSelf->top__DOT__flag_beq) & (vlSelf->top__DOT__rs1_data 
                                                == vlSelf->top__DOT__rs2_data))) {
        vlSelf->top__DOT__branch_taken = 1U;
    } else if (((IData)(vlSelf->top__DOT__flag_bne) 
                & (vlSelf->top__DOT__rs1_data != vlSelf->top__DOT__rs2_data))) {
        vlSelf->top__DOT__branch_taken = 1U;
    } else if (((IData)(vlSelf->top__DOT__flag_blt) 
                & VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data))) {
        vlSelf->top__DOT__branch_taken = 1U;
    } else if (((IData)(vlSelf->top__DOT__flag_bge) 
                & VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data))) {
        vlSelf->top__DOT__branch_taken = 1U;
    } else if (((IData)(vlSelf->top__DOT__flag_bltu) 
                & (vlSelf->top__DOT__rs1_data < vlSelf->top__DOT__rs2_data))) {
        vlSelf->top__DOT__branch_taken = 1U;
    } else if (((IData)(vlSelf->top__DOT__flag_bgeu) 
                & (vlSelf->top__DOT__rs1_data >= vlSelf->top__DOT__rs2_data))) {
        vlSelf->top__DOT__branch_taken = 1U;
    }
    vlSelf->top__DOT__alu_b = ((IData)(vlSelf->top__DOT__ALU_b_source)
                                ? ((IData)(vlSelf->top__DOT__ALU_b_source)
                                    ? vlSelf->top__DOT__imm_out
                                    : 0U) : vlSelf->top__DOT__rs2_data);
    vlSelf->top__DOT__PCsel = vlSelf->top__DOT__branch_taken;
    if ((0x40U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
        if ((0x20U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
            if ((1U & (~ ((IData)(vlSelf->__VdfgTmp_hac52b07f__0) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                                vlSelf->top__DOT__PCsel = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                    if ((2U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                        if ((1U & (IData)(vlSelf->__VdfgTmp_hac52b07f__0))) {
                            vlSelf->top__DOT__PCsel = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__alu_result = ((0x10U & (IData)(vlSelf->top__DOT__alu_code))
                                     ? ((8U & (IData)(vlSelf->top__DOT__alu_code))
                                         ? 0U : ((4U 
                                                  & (IData)(vlSelf->top__DOT__alu_code))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__alu_code))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__alu_code))
                                                    ? vlSelf->top__DOT__alu_b
                                                    : 
                                                   (0xfffffffeU 
                                                    & (vlSelf->top__DOT__alu_a 
                                                       + vlSelf->top__DOT__alu_b))))))
                                     : ((8U & (IData)(vlSelf->top__DOT__alu_code))
                                         ? ((4U & (IData)(vlSelf->top__DOT__alu_code))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->top__DOT__alu_code))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->top__DOT__alu_code))
                                               ? 0U
                                               : VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__alu_a, 1U))))
                                         : ((4U & (IData)(vlSelf->top__DOT__alu_code))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__alu_code))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_code))
                                                  ? 
                                                 VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__alu_a, 1U)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_code))
                                                  ? 
                                                 ((vlSelf->top__DOT__alu_a 
                                                   < vlSelf->top__DOT__alu_b)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelf->top__DOT__alu_a 
                                                  ^ vlSelf->top__DOT__alu_b)))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__alu_code))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_code))
                                                  ? 
                                                 (vlSelf->top__DOT__alu_a 
                                                  | vlSelf->top__DOT__alu_b)
                                                  : 
                                                 (vlSelf->top__DOT__alu_a 
                                                  & vlSelf->top__DOT__alu_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__alu_code))
                                                  ? 
                                                 (vlSelf->top__DOT__alu_a 
                                                  - vlSelf->top__DOT__alu_b)
                                                  : 
                                                 (vlSelf->top__DOT__alu_a 
                                                  + vlSelf->top__DOT__alu_b))))));
    vlSelf->top__DOT__mem_read_data = ((0U != (IData)(vlSelf->top__DOT__o_mem_read))
                                        ? ((1U == (3U 
                                                   & (IData)(vlSelf->top__DOT__o_mem_read)))
                                            ? ((4U 
                                                & (IData)(vlSelf->top__DOT__o_mem_read))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                                   [
                                                                   (0x1fU 
                                                                    & vlSelf->top__DOT__alu_result)] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                   [
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__alu_result)])
                                                : vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                               [(0x1fU 
                                                 & vlSelf->top__DOT__alu_result)])
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->top__DOT__o_mem_read)))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__o_mem_read))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                                    [
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->top__DOT__alu_result))] 
                                                                    >> 7U)))) 
                                                     << 0x10U) 
                                                    | ((vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                        [
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->top__DOT__alu_result))] 
                                                        << 8U) 
                                                       | vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                       [
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__alu_result)]))
                                                    : 
                                                   ((vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->top__DOT__alu_result))] 
                                                     << 8U) 
                                                    | vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                    [
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__alu_result)]))
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__o_mem_read)))
                                                    ? 
                                                   ((vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->top__DOT__alu_result))] 
                                                     << 0x18U) 
                                                    | ((vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                        [
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + vlSelf->top__DOT__alu_result))] 
                                                        << 0x10U) 
                                                       | ((vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                           [
                                                           (0x1fU 
                                                            & ((IData)(1U) 
                                                               + vlSelf->top__DOT__alu_result))] 
                                                           << 8U) 
                                                          | vlSelf->top__DOT__DMEM_UNIT__DOT__memory
                                                          [
                                                          (0x1fU 
                                                           & vlSelf->top__DOT__alu_result)])))
                                                    : 0U)))
                                        : 0U);
    vlSelf->top__DOT__IFU__DOT__next_pc = ((IData)(vlSelf->top__DOT__PCsel)
                                            ? ((IData)(vlSelf->top__DOT__PCsel)
                                                ? vlSelf->top__DOT__alu_result
                                                : 0U)
                                            : ((IData)(4U) 
                                               + vlSelf->top__DOT__pc));
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
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCsel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__o_mem_read = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__o_mem_write = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__o_Wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALU_a_source = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALU_b_source = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__alu_code = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__flag_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flag_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flag_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flag_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flag_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flag_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regfile_write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__DMEM_UNIT__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__DMEM_UNIT__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__RF__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__RF__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__ITCM__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__IFU__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hafd6e0d5__0 = 0;
    vlSelf->__VdfgTmp_hac52b07f__0 = 0;
    vlSelf->__VdfgTmp_hafc3b2ef__0 = 0;
    vlSelf->__VdfgTmp_hfb26c531__0 = 0;
    vlSelf->__VdfgTmp_h304dd487__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
