// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsingenA__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsingenA::VsingenA(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsingenA__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , incr{vlSymsp->TOP.incr}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , diff{vlSymsp->TOP.diff}
    , DOut1{vlSymsp->TOP.DOut1}
    , DOut2{vlSymsp->TOP.DOut2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsingenA::VsingenA(const char* _vcname__)
    : VsingenA(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsingenA::~VsingenA() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsingenA___024root___eval_debug_assertions(VsingenA___024root* vlSelf);
#endif  // VL_DEBUG
void VsingenA___024root___eval_static(VsingenA___024root* vlSelf);
void VsingenA___024root___eval_initial(VsingenA___024root* vlSelf);
void VsingenA___024root___eval_settle(VsingenA___024root* vlSelf);
void VsingenA___024root___eval(VsingenA___024root* vlSelf);

void VsingenA::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsingenA::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsingenA___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsingenA___024root___eval_static(&(vlSymsp->TOP));
        VsingenA___024root___eval_initial(&(vlSymsp->TOP));
        VsingenA___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsingenA___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsingenA::eventsPending() { return false; }

uint64_t VsingenA::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsingenA::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsingenA___024root___eval_final(VsingenA___024root* vlSelf);

VL_ATTR_COLD void VsingenA::final() {
    VsingenA___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsingenA::hierName() const { return vlSymsp->name(); }
const char* VsingenA::modelName() const { return "VsingenA"; }
unsigned VsingenA::threads() const { return 1; }
void VsingenA::prepareClone() const { contextp()->prepareClone(); }
void VsingenA::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsingenA::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsingenA___024root__trace_decl_types(VerilatedVcd* tracep);

void VsingenA___024root__trace_init_top(VsingenA___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsingenA___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsingenA___024root*>(voidSelf);
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsingenA___024root__trace_decl_types(tracep);
    VsingenA___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void VsingenA___024root__trace_register(VsingenA___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsingenA::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsingenA::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsingenA___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
