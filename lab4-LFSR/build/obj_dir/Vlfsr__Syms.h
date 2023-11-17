// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLFSR__SYMS_H_
#define VERILATED_VLFSR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlfsr.h"

// INCLUDE MODULE CLASSES
#include "Vlfsr___024root.h"

// SYMS CLASS (contains all model state)
class Vlfsr__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlfsr* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlfsr___024root                TOP;

    // CONSTRUCTORS
    Vlfsr__Syms(VerilatedContext* contextp, const char* namep, Vlfsr* modelp);
    ~Vlfsr__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
