// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauto_f1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vauto_f1_fsm___024root.h"

VL_INLINE_OPT void Vauto_f1_fsm___024root___sequent__TOP__0(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__auto_f1_fsm__DOT__clock_tick__DOT__count;
    // Body
    __Vdly__auto_f1_fsm__DOT__clock_tick__DOT__count 
        = vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count;
    if (vlSelf->rst_tick) {
        vlSelf->auto_f1_fsm__DOT__en_fsm = 0U;
        __Vdly__auto_f1_fsm__DOT__clock_tick__DOT__count 
            = vlSelf->N;
    } else if (vlSelf->en_tick) {
        if ((0U == (IData)(vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count))) {
            vlSelf->auto_f1_fsm__DOT__en_fsm = 1U;
            __Vdly__auto_f1_fsm__DOT__clock_tick__DOT__count 
                = vlSelf->N;
        } else {
            __Vdly__auto_f1_fsm__DOT__clock_tick__DOT__count 
                = (0xffffU & ((IData)(vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count) 
                              - (IData)(1U)));
            vlSelf->auto_f1_fsm__DOT__en_fsm = 0U;
        }
    }
    vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count 
        = __Vdly__auto_f1_fsm__DOT__clock_tick__DOT__count;
}

VL_INLINE_OPT void Vauto_f1_fsm___024root___sequent__TOP__1(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state 
        = ((IData)(vlSelf->rst_fsm) ? 0U : vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state);
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

void Vauto_f1_fsm___024root___eval(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vauto_f1_fsm___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst_fsm) & (~ (IData)(vlSelf->__Vclklast__TOP__rst_fsm))))) {
        Vauto_f1_fsm___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_fsm = vlSelf->rst_fsm;
}

#ifdef VL_DEBUG
void Vauto_f1_fsm___024root___eval_debug_assertions(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_tick & 0xfeU))) {
        Verilated::overWidthError("rst_tick");}
    if (VL_UNLIKELY((vlSelf->rst_fsm & 0xfeU))) {
        Verilated::overWidthError("rst_fsm");}
    if (VL_UNLIKELY((vlSelf->en_tick & 0xfeU))) {
        Verilated::overWidthError("en_tick");}
}
#endif  // VL_DEBUG
