// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;

class Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(ledr,6,0);
    CData/*2:0*/ alu__DOT__switch;
    CData/*0:0*/ alu__DOT____Vcellout__help____pinNumber7;
    CData/*0:0*/ alu__DOT____Vcellout__help____pinNumber5;
    CData/*3:0*/ alu__DOT____Vcellout__help____pinNumber4;
    CData/*3:0*/ alu__DOT__help__DOT__Xor;
    CData/*4:0*/ alu__DOT__help__DOT__out;
    CData/*3:0*/ alu__DOT__help__DOT__result2;
    CData/*2:0*/ __Vtrigrprev__TOP__alu__DOT__switch;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN16(sw,11,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
