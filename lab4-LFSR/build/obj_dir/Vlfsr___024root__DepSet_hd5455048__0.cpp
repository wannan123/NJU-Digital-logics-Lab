// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "verilated.h"

#include "Vlfsr___024root.h"

void Vlfsr___024root___eval_act(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 256> Vlfsr__ConstPool__TABLE_h7f3545b7_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vlfsr__ConstPool__TABLE_hc0989a30_0;

VL_INLINE_OPT void Vlfsr___024root___nba_sequent__TOP__0(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ lfsr__DOT__shift;
    lfsr__DOT__shift = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    lfsr__DOT__shift = (1U & VL_REDXOR_8((0x1dU & (IData)(vlSelf->ledr))));
    vlSelf->ledr = (((IData)(lfsr__DOT__shift) << 7U) 
                    | (0x7fU & ((IData)(vlSelf->ledr) 
                                >> 1U)));
    __Vtableidx1 = vlSelf->ledr;
    vlSelf->seg0 = Vlfsr__ConstPool__TABLE_h7f3545b7_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->ledr;
    vlSelf->seg1 = Vlfsr__ConstPool__TABLE_hc0989a30_0
        [__Vtableidx2];
}

void Vlfsr___024root___eval_nba(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vlfsr___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vlfsr___024root___eval_triggers__act(Vlfsr___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr___024root___dump_triggers__act(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr___024root___dump_triggers__nba(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr___024root___eval(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vlfsr___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vlfsr___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab4-LFSR/vsrc/lfsr.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vlfsr___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vlfsr___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab4-LFSR/vsrc/lfsr.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vlfsr___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sw & 0xfeU))) {
        Verilated::overWidthError("sw");}
}
#endif  // VL_DEBUG
