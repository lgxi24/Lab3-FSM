// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vauto_f1_fsm.h"
#include "Vauto_f1_fsm__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vauto_f1_fsm::Vauto_f1_fsm(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vauto_f1_fsm__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_fsm{vlSymsp->TOP.rst_fsm}
    , rst_tick{vlSymsp->TOP.rst_tick}
    , en_tick{vlSymsp->TOP.en_tick}
    , data_out{vlSymsp->TOP.data_out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vauto_f1_fsm::Vauto_f1_fsm(const char* _vcname__)
    : Vauto_f1_fsm(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vauto_f1_fsm::~Vauto_f1_fsm() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vauto_f1_fsm___024root___eval_initial(Vauto_f1_fsm___024root* vlSelf);
void Vauto_f1_fsm___024root___eval_settle(Vauto_f1_fsm___024root* vlSelf);
void Vauto_f1_fsm___024root___eval(Vauto_f1_fsm___024root* vlSelf);
#ifdef VL_DEBUG
void Vauto_f1_fsm___024root___eval_debug_assertions(Vauto_f1_fsm___024root* vlSelf);
#endif  // VL_DEBUG
void Vauto_f1_fsm___024root___final(Vauto_f1_fsm___024root* vlSelf);

static void _eval_initial_loop(Vauto_f1_fsm__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vauto_f1_fsm___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vauto_f1_fsm___024root___eval_settle(&(vlSymsp->TOP));
        Vauto_f1_fsm___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vauto_f1_fsm::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vauto_f1_fsm::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vauto_f1_fsm___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vauto_f1_fsm___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vauto_f1_fsm::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vauto_f1_fsm::final() {
    Vauto_f1_fsm___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vauto_f1_fsm::hierName() const { return vlSymsp->name(); }
const char* Vauto_f1_fsm::modelName() const { return "Vauto_f1_fsm"; }
unsigned Vauto_f1_fsm::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vauto_f1_fsm::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vauto_f1_fsm___024root__trace_init_top(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vauto_f1_fsm___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_register(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vauto_f1_fsm::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vauto_f1_fsm___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
