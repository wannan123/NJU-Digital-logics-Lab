// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 64> Vtop__ConstPool__TABLE_ha76d1d05_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vtop__ConstPool__TABLE_hcc9f901f_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vtop__ConstPool__TABLE_h57f10034_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vtop__ConstPool__TABLE_hb000505d_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vtop__ConstPool__TABLE_h83bf1bda_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vtop__ConstPool__TABLE_h1b76b545_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vtop__ConstPool__TABLE_he7806526_0;
extern const VlUnpacked<CData/*7:0*/, 2048> Vtop__ConstPool__TABLE_h9b45e5e7_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*10:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__count = 0;
    CData/*5:0*/ __Vdly__top__DOT__my_keyboard__DOT__count3;
    __Vdly__top__DOT__my_keyboard__DOT__count3 = 0;
    CData/*5:0*/ __Vdly__top__DOT__my_keyboard__DOT__count2;
    __Vdly__top__DOT__my_keyboard__DOT__count2 = 0;
    CData/*0:0*/ __Vdly__top__DOT__my_keyboard__DOT__is_fd;
    __Vdly__top__DOT__my_keyboard__DOT__is_fd = 0;
    SData/*9:0*/ __Vdly__top__DOT__buffer;
    __Vdly__top__DOT__buffer = 0;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__buffer = vlSelf->top__DOT__buffer;
    __Vdly__top__DOT__my_keyboard__DOT__is_fd = vlSelf->top__DOT__my_keyboard__DOT__is_fd;
    __Vdly__top__DOT__my_keyboard__DOT__count2 = vlSelf->top__DOT__my_keyboard__DOT__count2;
    __Vdly__top__DOT__my_keyboard__DOT__count3 = vlSelf->top__DOT__my_keyboard__DOT__count3;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
            if ((((((~ (IData)(vlSelf->top__DOT__buffer)) 
                    & (IData)(vlSelf->ps2_data)) & 
                   VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__buffer) 
                                           >> 1U)))) 
                  & (0x1eU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count2))) 
                 & (IData)(vlSelf->top__DOT__my_keyboard__DOT__is_fd))) {
                __Vdly__top__DOT__my_keyboard__DOT__count3 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count3)));
                __Vdly__top__DOT__my_keyboard__DOT__count2 = 0U;
                __Vdly__top__DOT__my_keyboard__DOT__is_fd = 0U;
            }
            __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
            if ((0xf0U == (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                    >> 1U)))) {
                __Vdly__top__DOT__my_keyboard__DOT__is_fd = 1U;
            }
        } else {
            vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h7d00f130__0 
                = vlSelf->ps2_data;
            __Vdly__top__DOT__my_keyboard__DOT__count2 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count2)));
            if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                __Vdly__top__DOT__buffer = (((~ ((IData)(1U) 
                                                 << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                                             & (IData)(__Vdly__top__DOT__buffer)) 
                                            | (0x3ffU 
                                               & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h7d00f130__0) 
                                                  << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
            }
            __Vdly__top__DOT__my_keyboard__DOT__count 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
        }
    }
    __Vtableidx4 = vlSelf->top__DOT__my_keyboard__DOT__count3;
    vlSelf->seg4 = Vtop__ConstPool__TABLE_ha76d1d05_0
        [__Vtableidx4];
    vlSelf->seg5 = Vtop__ConstPool__TABLE_hcc9f901f_0
        [__Vtableidx4];
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__buffer) 
                     << 1U) | (IData)(vlSelf->top__DOT__my_keyboard__DOT__is_fd));
    vlSelf->seg0 = Vtop__ConstPool__TABLE_h57f10034_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__buffer) 
                     << 1U) | (IData)(vlSelf->top__DOT__my_keyboard__DOT__is_fd));
    vlSelf->seg1 = Vtop__ConstPool__TABLE_hb000505d_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->top__DOT__buffer) 
                     << 1U) | (IData)(vlSelf->top__DOT__my_keyboard__DOT__is_fd));
    if ((1U & Vtop__ConstPool__TABLE_h83bf1bda_0[__Vtableidx3])) {
        vlSelf->seg2 = Vtop__ConstPool__TABLE_h1b76b545_0
            [__Vtableidx3];
    }
    vlSelf->seg3 = Vtop__ConstPool__TABLE_he7806526_0
        [__Vtableidx3];
    if ((4U & Vtop__ConstPool__TABLE_h83bf1bda_0[__Vtableidx3])) {
        vlSelf->seg1 = Vtop__ConstPool__TABLE_h9b45e5e7_0
            [__Vtableidx3];
    }
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->top__DOT__my_keyboard__DOT__count2 = __Vdly__top__DOT__my_keyboard__DOT__count2;
    vlSelf->top__DOT__my_keyboard__DOT__count3 = __Vdly__top__DOT__my_keyboard__DOT__count3;
    vlSelf->top__DOT__buffer = __Vdly__top__DOT__buffer;
    vlSelf->top__DOT__my_keyboard__DOT__is_fd = __Vdly__top__DOT__my_keyboard__DOT__is_fd;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab7-keyboard/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wannan/Desktop/NJU-Digital-logics-Lab/lab7-keyboard/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
