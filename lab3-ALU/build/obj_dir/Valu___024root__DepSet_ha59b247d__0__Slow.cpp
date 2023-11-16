// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_ATTR_COLD void Valu___024root___eval_static(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valu___024root___eval_initial(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__alu__DOT__switch = vlSelf->alu__DOT__switch;
}

VL_ATTR_COLD void Valu___024root___eval_final(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Valu___024root___eval_triggers__stl(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(Valu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valu___024root___eval_stl(Valu___024root* vlSelf);

VL_ATTR_COLD void Valu___024root___eval_settle(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Valu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab3-ALU/vsrc/alu.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Valu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__stl(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root___stl_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu__DOT__switch = (7U & ((IData)(vlSelf->sw) 
                                      >> 8U));
    vlSelf->ledr = (((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber5) 
                     << 6U) | (((0U == (IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4)) 
                                << 5U) | (((IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber7) 
                                           << 4U) | (IData)(vlSelf->alu__DOT____Vcellout__help____pinNumber4))));
}

VL_ATTR_COLD void Valu___024root___eval_stl(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Valu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] alu.switch)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] alu.switch)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu___024root___ctor_var_reset(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sw = 0;
    vlSelf->ledr = 0;
    vlSelf->alu__DOT__switch = 0;
    vlSelf->alu__DOT____Vcellout__help____pinNumber7 = 0;
    vlSelf->alu__DOT____Vcellout__help____pinNumber5 = 0;
    vlSelf->alu__DOT____Vcellout__help____pinNumber4 = 0;
    vlSelf->alu__DOT__help__DOT__Xor = 0;
    vlSelf->alu__DOT__help__DOT__out = 0;
    vlSelf->alu__DOT__help__DOT__result2 = 0;
    vlSelf->__Vtrigrprev__TOP__alu__DOT__switch = 0;
    vlSelf->__VactDidInit = 0;
}
