// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu__DOT__switch = (7U & ((IData)(vlSelf->sw) 
                                      >> 8U));
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Valu___024root___nba_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((4U & (IData)(vlSelf->alu__DOT__switch))) {
        if ((2U & (IData)(vlSelf->alu__DOT__switch))) {
            if ((1U & (IData)(vlSelf->alu__DOT__switch))) {
                vlSelf->alu__DOT__help__DOT__Xor = 
                    (0xfU & ((IData)(1U) + (~ (IData)(vlSelf->sw))));
                vlSelf->alu__DOT__help__DOT__out = 
                    (0x1fU & ((0xfU & ((IData)(vlSelf->sw) 
                                       >> 4U)) + (IData)(vlSelf->alu__DOT__help__DOT__Xor)));
                vlSelf->alu__DOT__help__DOT__result2 
                    = (0xfU & (IData)(vlSelf->alu__DOT__help__DOT__out));
                vlSelf->alu__DOT____Vcellout__help____pinNumber4 
                    = (0U == (IData)(vlSelf->alu__DOT__help__DOT__result2));
            } else {
                vlSelf->alu__DOT__help__DOT__Xor = 
                    (0xfU & ((IData)(1U) + (~ (IData)(vlSelf->sw))));
                vlSelf->alu__DOT__help__DOT__out = 
                    (0x1fU & ((0xfU & ((IData)(vlSelf->sw) 
                                       >> 4U)) + (IData)(vlSelf->alu__DOT__help__DOT__Xor)));
                vlSelf->alu__DOT____Vcellout__help____pinNumber7 
                    = (((1U & ((IData)(vlSelf->sw) 
                               >> 7U)) == (1U & ((IData)(vlSelf->alu__DOT__help__DOT__Xor) 
                                                 >> 3U))) 
                       & ((1U & ((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4) 
                                 >> 3U)) != (1U & ((IData)(vlSelf->sw) 
                                                   >> 7U))));
                vlSelf->alu__DOT__help__DOT__result2 
                    = (0xfU & (IData)(vlSelf->alu__DOT__help__DOT__out));
                vlSelf->alu__DOT____Vcellout__help____pinNumber4 
                    = (1U & ((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber7) 
                             ^ ((IData)(vlSelf->alu__DOT__help__DOT__result2) 
                                >> 3U)));
            }
        } else {
            vlSelf->alu__DOT____Vcellout__help____pinNumber4 
                = (0xfU & ((1U & (IData)(vlSelf->alu__DOT__switch))
                            ? (~ (((IData)(vlSelf->sw) 
                                   >> 4U) ^ (IData)(vlSelf->sw)))
                            : (((IData)(vlSelf->sw) 
                                >> 4U) | (IData)(vlSelf->sw))));
        }
    } else if ((2U & (IData)(vlSelf->alu__DOT__switch))) {
        vlSelf->alu__DOT____Vcellout__help____pinNumber4 
            = (0xfU & ((1U & (IData)(vlSelf->alu__DOT__switch))
                        ? (((IData)(vlSelf->sw) >> 4U) 
                           & (IData)(vlSelf->sw)) : 
                       (~ ((IData)(vlSelf->sw) >> 4U))));
    } else if ((1U & (IData)(vlSelf->alu__DOT__switch))) {
        vlSelf->alu__DOT__help__DOT__Xor = (0xfU & 
                                            ((IData)(1U) 
                                             + (~ (IData)(vlSelf->sw))));
        vlSelf->alu__DOT__help__DOT__out = (0x1fU & 
                                            ((0xfU 
                                              & ((IData)(vlSelf->sw) 
                                                 >> 4U)) 
                                             + (IData)(vlSelf->alu__DOT__help__DOT__Xor)));
        vlSelf->alu__DOT____Vcellout__help____pinNumber5 
            = (1U & ((IData)(vlSelf->alu__DOT__help__DOT__out) 
                     >> 4U));
        vlSelf->alu__DOT____Vcellout__help____pinNumber4 
            = (0xfU & (IData)(vlSelf->alu__DOT__help__DOT__out));
        vlSelf->alu__DOT____Vcellout__help____pinNumber7 
            = (((1U & ((IData)(vlSelf->sw) >> 7U)) 
                == (1U & ((IData)(vlSelf->alu__DOT__help__DOT__Xor) 
                          >> 3U))) & ((1U & ((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4) 
                                             >> 3U)) 
                                      != (1U & ((IData)(vlSelf->sw) 
                                                >> 7U))));
    } else {
        vlSelf->alu__DOT__help__DOT__Xor = (0xfU & (IData)(vlSelf->sw));
        vlSelf->alu__DOT__help__DOT__out = (0x1fU & 
                                            ((0xfU 
                                              & ((IData)(vlSelf->sw) 
                                                 >> 4U)) 
                                             + (IData)(vlSelf->alu__DOT__help__DOT__Xor)));
        vlSelf->alu__DOT____Vcellout__help____pinNumber5 
            = (1U & ((IData)(vlSelf->alu__DOT__help__DOT__out) 
                     >> 4U));
        vlSelf->alu__DOT____Vcellout__help____pinNumber4 
            = (0xfU & (IData)(vlSelf->alu__DOT__help__DOT__out));
        vlSelf->alu__DOT____Vcellout__help____pinNumber7 
            = (((1U & ((IData)(vlSelf->sw) >> 7U)) 
                == (1U & ((IData)(vlSelf->alu__DOT__help__DOT__Xor) 
                          >> 3U))) & ((1U & ((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4) 
                                             >> 3U)) 
                                      != (1U & ((IData)(vlSelf->sw) 
                                                >> 7U))));
    }
    vlSelf->ledr = (((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber5) 
                     << 6U) | (((0U == (IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4)) 
                                << 5U) | (((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber7) 
                                           << 4U) | (IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4))));
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Valu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab3-ALU/vsrc/alu.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab3-ALU/vsrc/alu.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Valu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab3-ALU/vsrc/alu.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sw & 0xf000U))) {
        Verilated::overWidthError("sw");}
}
#endif  // VL_DEBUG
