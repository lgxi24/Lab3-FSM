// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vauto_f1_fsm__Syms.h"
#include "Vauto_f1_fsm.h"
#include "Vauto_f1_fsm___024root.h"

// FUNCTIONS
Vauto_f1_fsm__Syms::~Vauto_f1_fsm__Syms()
{
}

Vauto_f1_fsm__Syms::Vauto_f1_fsm__Syms(VerilatedContext* contextp, const char* namep, Vauto_f1_fsm* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
