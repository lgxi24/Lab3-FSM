// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauto_f1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vauto_f1_fsm___024root.h"

VL_ATTR_COLD void Vauto_f1_fsm___024root___settle__TOP__0(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state) 
               | (1U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) 
              | (2U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) 
             | (3U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) 
            | (4U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) 
           | (5U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) 
          | (6U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) 
         | (7U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state))) {
        if ((0U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 1U : 0U);
        } else if ((1U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 2U : 1U);
        } else if ((2U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 3U : 2U);
        } else if ((3U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 4U : 3U);
        } else if ((4U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 5U : 4U);
        } else if ((5U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 6U : 5U);
        } else if ((6U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 7U : 6U);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
                = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                    ? 8U : 7U);
        }
    } else if ((8U == vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state 
            = ((IData)(vlSelf->auto_f1_fsm__DOT__en_fsm)
                ? 0U : 8U);
    }
}

VL_ATTR_COLD void Vauto_f1_fsm___024root___eval_initial(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_fsm = vlSelf->rst_fsm;
}

VL_ATTR_COLD void Vauto_f1_fsm___024root___eval_settle(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___eval_settle\n"); );
    // Body
    Vauto_f1_fsm___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root___final(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___final\n"); );
}

VL_ATTR_COLD void Vauto_f1_fsm___024root___ctor_var_reset(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_tick = VL_RAND_RESET_I(1);
    vlSelf->rst_fsm = VL_RAND_RESET_I(1);
    vlSelf->en_tick = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->auto_f1_fsm__DOT__en_fsm = VL_RAND_RESET_I(1);
    vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state = 0;
    vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state = 0;
}
