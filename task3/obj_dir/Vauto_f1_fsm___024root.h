// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vauto_f1_fsm.h for the primary calling header

#ifndef VERILATED_VAUTO_F1_FSM___024ROOT_H_
#define VERILATED_VAUTO_F1_FSM___024ROOT_H_  // guard

#include "verilated.h"

class Vauto_f1_fsm__Syms;

class Vauto_f1_fsm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_fsm,0,0);
    VL_IN8(rst_tick,0,0);
    VL_IN8(en_tick,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ auto_f1_fsm__DOT__en_fsm;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_fsm;
    VL_IN16(N,15,0);
    SData/*15:0*/ auto_f1_fsm__DOT__clock_tick__DOT__count;
    IData/*31:0*/ auto_f1_fsm__DOT__auto_f1__DOT__current_state;
    IData/*31:0*/ auto_f1_fsm__DOT__auto_f1__DOT__next_state;

    // INTERNAL VARIABLES
    Vauto_f1_fsm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vauto_f1_fsm___024root(Vauto_f1_fsm__Syms* symsp, const char* name);
    ~Vauto_f1_fsm___024root();
    VL_UNCOPYABLE(Vauto_f1_fsm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
