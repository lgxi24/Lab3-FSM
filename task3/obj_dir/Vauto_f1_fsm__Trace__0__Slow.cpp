// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vauto_f1_fsm__Syms.h"


VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_init_sub__TOP__0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_tick", false,-1);
    tracep->declBit(c+3,"rst_fsm", false,-1);
    tracep->declBit(c+4,"en_tick", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("auto_f1_fsm ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_tick", false,-1);
    tracep->declBit(c+3,"rst_fsm", false,-1);
    tracep->declBit(c+4,"en_tick", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->declBit(c+7,"en_fsm", false,-1);
    tracep->pushNamePrefix("auto_f1 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+9,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clock_tick ");
    tracep->declBus(c+11,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBit(c+7,"tick", false,-1);
    tracep->declBus(c+10,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_init_top(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_init_top\n"); );
    // Body
    Vauto_f1_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vauto_f1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vauto_f1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_register(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vauto_f1_fsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vauto_f1_fsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vauto_f1_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_full_top_0\n"); );
    // Init
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vauto_f1_fsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_tick));
    bufp->fullBit(oldp+3,(vlSelf->rst_fsm));
    bufp->fullBit(oldp+4,(vlSelf->en_tick));
    bufp->fullSData(oldp+5,(vlSelf->N),16);
    bufp->fullCData(oldp+6,(vlSelf->data_out),8);
    bufp->fullBit(oldp+7,(vlSelf->auto_f1_fsm__DOT__en_fsm));
    bufp->fullIData(oldp+8,(vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__current_state),32);
    bufp->fullIData(oldp+9,(vlSelf->auto_f1_fsm__DOT__auto_f1__DOT__next_state),32);
    bufp->fullSData(oldp+10,(vlSelf->auto_f1_fsm__DOT__clock_tick__DOT__count),16);
    bufp->fullIData(oldp+11,(0x10U),32);
}
