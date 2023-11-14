// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vf1_fsm___024root.h"

VL_INLINE_OPT void Vf1_fsm___024root___sequent__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->f1_fsm__DOT__current_state = ((IData)(vlSelf->rst)
                                           ? 0U : vlSelf->f1_fsm__DOT__next_state);
    if (((((((((0U == vlSelf->f1_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_fsm__DOT__current_state))) {
        vlSelf->data_out = ((0U == vlSelf->f1_fsm__DOT__current_state)
                             ? 0U : ((1U == vlSelf->f1_fsm__DOT__current_state)
                                      ? 1U : ((2U == vlSelf->f1_fsm__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->f1_fsm__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->f1_fsm__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->f1_fsm__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->f1_fsm__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))));
    } else if ((8U == vlSelf->f1_fsm__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
    }
}

VL_INLINE_OPT void Vf1_fsm___024root___combo__TOP__0(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1_fsm__DOT__current_state) 
               | (1U == vlSelf->f1_fsm__DOT__current_state)) 
              | (2U == vlSelf->f1_fsm__DOT__current_state)) 
             | (3U == vlSelf->f1_fsm__DOT__current_state)) 
            | (4U == vlSelf->f1_fsm__DOT__current_state)) 
           | (5U == vlSelf->f1_fsm__DOT__current_state)) 
          | (6U == vlSelf->f1_fsm__DOT__current_state)) 
         | (7U == vlSelf->f1_fsm__DOT__current_state))) {
        vlSelf->f1_fsm__DOT__next_state = ((0U == vlSelf->f1_fsm__DOT__current_state)
                                            ? (((IData)(vlSelf->en) 
                                                & (IData)(vlSelf->trigger))
                                                ? 1U
                                                : 0U)
                                            : ((1U 
                                                == vlSelf->f1_fsm__DOT__current_state)
                                                ? ((IData)(vlSelf->en)
                                                    ? 2U
                                                    : 1U)
                                                : (
                                                   (2U 
                                                    == vlSelf->f1_fsm__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->en)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((3U 
                                                     == vlSelf->f1_fsm__DOT__current_state)
                                                     ? 
                                                    ((IData)(vlSelf->en)
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((4U 
                                                      == vlSelf->f1_fsm__DOT__current_state)
                                                      ? 
                                                     ((IData)(vlSelf->en)
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((5U 
                                                       == vlSelf->f1_fsm__DOT__current_state)
                                                       ? 
                                                      ((IData)(vlSelf->en)
                                                        ? 6U
                                                        : 5U)
                                                       : 
                                                      ((6U 
                                                        == vlSelf->f1_fsm__DOT__current_state)
                                                        ? 
                                                       ((IData)(vlSelf->en)
                                                         ? 7U
                                                         : 6U)
                                                        : 
                                                       ((IData)(vlSelf->en)
                                                         ? 8U
                                                         : 7U))))))));
    } else if ((8U == vlSelf->f1_fsm__DOT__current_state)) {
        vlSelf->f1_fsm__DOT__next_state = ((IData)(vlSelf->en)
                                            ? 0U : 8U);
    }
}

void Vf1_fsm___024root___eval(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vf1_fsm___024root___sequent__TOP__0(vlSelf);
    }
    Vf1_fsm___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vf1_fsm___024root___eval_debug_assertions(Vf1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
