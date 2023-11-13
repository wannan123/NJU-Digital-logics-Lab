// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencode83.h"
#include "Vencode83__Syms.h"

//============================================================
// Constructors

Vencode83::Vencode83(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencode83__Syms(contextp(), _vcname__, this)}
    , ledr{vlSymsp->TOP.ledr}
    , pos{vlSymsp->TOP.pos}
    , seg0{vlSymsp->TOP.seg0}
    , sw{vlSymsp->TOP.sw}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vencode83::Vencode83(const char* _vcname__)
    : Vencode83(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencode83::~Vencode83() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencode83___024root___eval_debug_assertions(Vencode83___024root* vlSelf);
#endif  // VL_DEBUG
void Vencode83___024root___eval_static(Vencode83___024root* vlSelf);
void Vencode83___024root___eval_initial(Vencode83___024root* vlSelf);
void Vencode83___024root___eval_settle(Vencode83___024root* vlSelf);
void Vencode83___024root___eval(Vencode83___024root* vlSelf);

void Vencode83::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencode83::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencode83___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencode83___024root___eval_static(&(vlSymsp->TOP));
        Vencode83___024root___eval_initial(&(vlSymsp->TOP));
        Vencode83___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencode83___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencode83::eventsPending() { return false; }

uint64_t Vencode83::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencode83::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencode83___024root___eval_final(Vencode83___024root* vlSelf);

VL_ATTR_COLD void Vencode83::final() {
    Vencode83___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencode83::hierName() const { return vlSymsp->name(); }
const char* Vencode83::modelName() const { return "Vencode83"; }
unsigned Vencode83::threads() const { return 1; }
