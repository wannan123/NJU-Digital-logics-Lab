// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr.h for the primary calling header

#include "verilated.h"

#include "Vlfsr__Syms.h"
#include "Vlfsr___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlfsr___024root___dump_triggers__act(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG

void Vlfsr___024root___eval_triggers__act(Vlfsr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->sw) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__sw));
    vlSelf->__Vtrigrprev__TOP__sw = vlSelf->sw;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlfsr___024root___dump_triggers__act(vlSelf);
    }
#endif
}
