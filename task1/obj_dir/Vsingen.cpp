// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsingen__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsingen::Vsingen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsingen__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , rst{vlSymsp->TOP.rst}
    , incr{vlSymsp->TOP.incr}
    , DOut{vlSymsp->TOP.DOut}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsingen::Vsingen(const char* _vcname__)
    : Vsingen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsingen::~Vsingen() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsingen___024root___eval_debug_assertions(Vsingen___024root* vlSelf);
#endif  // VL_DEBUG
void Vsingen___024root___eval_static(Vsingen___024root* vlSelf);
void Vsingen___024root___eval_initial(Vsingen___024root* vlSelf);
void Vsingen___024root___eval_settle(Vsingen___024root* vlSelf);
void Vsingen___024root___eval(Vsingen___024root* vlSelf);

void Vsingen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsingen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsingen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsingen___024root___eval_static(&(vlSymsp->TOP));
        Vsingen___024root___eval_initial(&(vlSymsp->TOP));
        Vsingen___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsingen___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsingen::eventsPending() { return false; }

uint64_t Vsingen::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsingen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsingen___024root___eval_final(Vsingen___024root* vlSelf);

VL_ATTR_COLD void Vsingen::final() {
    Vsingen___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsingen::hierName() const { return vlSymsp->name(); }
const char* Vsingen::modelName() const { return "Vsingen"; }
unsigned Vsingen::threads() const { return 1; }
void Vsingen::prepareClone() const { contextp()->prepareClone(); }
void Vsingen::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsingen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsingen___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsingen___024root__trace_init_top(Vsingen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsingen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsingen___024root*>(voidSelf);
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsingen___024root__trace_decl_types(tracep);
    Vsingen___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vsingen___024root__trace_register(Vsingen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsingen::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsingen::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsingen___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
