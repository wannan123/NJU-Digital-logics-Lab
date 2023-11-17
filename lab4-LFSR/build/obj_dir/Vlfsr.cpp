// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlfsr.h"
#include "Vlfsr__Syms.h"

//============================================================
// Constructors

Vlfsr::Vlfsr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlfsr__Syms(contextp(), _vcname__, this)}
    , sw{vlSymsp->TOP.sw}
    , ledr{vlSymsp->TOP.ledr}
    , seg0{vlSymsp->TOP.seg0}
    , seg1{vlSymsp->TOP.seg1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlfsr::Vlfsr(const char* _vcname__)
    : Vlfsr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlfsr::~Vlfsr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlfsr___024root___eval_debug_assertions(Vlfsr___024root* vlSelf);
#endif  // VL_DEBUG
void Vlfsr___024root___eval_static(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval_initial(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval_settle(Vlfsr___024root* vlSelf);
void Vlfsr___024root___eval(Vlfsr___024root* vlSelf);

void Vlfsr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlfsr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlfsr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlfsr___024root___eval_static(&(vlSymsp->TOP));
        Vlfsr___024root___eval_initial(&(vlSymsp->TOP));
        Vlfsr___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlfsr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlfsr::eventsPending() { return false; }

uint64_t Vlfsr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlfsr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlfsr___024root___eval_final(Vlfsr___024root* vlSelf);

VL_ATTR_COLD void Vlfsr::final() {
    Vlfsr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlfsr::hierName() const { return vlSymsp->name(); }
const char* Vlfsr::modelName() const { return "Vlfsr"; }
unsigned Vlfsr::threads() const { return 1; }
