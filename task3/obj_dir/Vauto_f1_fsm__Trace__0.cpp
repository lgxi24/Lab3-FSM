// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vauto_f1_fsm__Syms.h"


void Vauto_f1_fsm___024root__trace_chg_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vauto_f1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_chg_top_0\n"); );
    // Init
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vauto_f1_fsm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vauto_f1_fsm___024root__trace_chg_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_tick));
    bufp->chgBit(oldp+2,(vlSelf->rst_fsm));
    bufp->chgBit(oldp+3,(vlSelf->en_tick));
    bufp->chgSData(oldp+4,(vlSelf->N),16);
    bufp->chgCData(oldp+5,(vlSelf->data_out),8);
    bufp->chgBit(oldp+6,(vlSelf->auto_f1_fsm__DOT__en_fsm));
    bufp->chgIData(oldp+7,(vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state),32);
    bufp->chgIData(oldp+8,(vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state),32);
    bufp->chgSData(oldp+9,(vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count),16);
}

void Vauto_f1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_cleanup\n"); );
    // Init
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
