// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VsingenA__Syms.h"


void VsingenA___024root__trace_chg_0_sub_0(VsingenA___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsingenA___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root__trace_chg_0\n"); );
    // Init
    VsingenA___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsingenA___024root*>(voidSelf);
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsingenA___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsingenA___024root__trace_chg_0_sub_0(VsingenA___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.incr),8);
    bufp->chgBit(oldp+1,(vlSelfRef.clk));
    bufp->chgBit(oldp+2,(vlSelfRef.rst));
    bufp->chgBit(oldp+3,(vlSelfRef.en));
    bufp->chgCData(oldp+4,(vlSelfRef.diff),8);
    bufp->chgCData(oldp+5,(vlSelfRef.DOut1),8);
    bufp->chgCData(oldp+6,(vlSelfRef.DOut2),8);
    bufp->chgCData(oldp+7,(vlSelfRef.singenA__DOT__Addr1),8);
    bufp->chgCData(oldp+8,((0xffU & ((IData)(vlSelfRef.diff) 
                                     + (IData)(vlSelfRef.singenA__DOT__Addr1)))),8);
}

void VsingenA___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root__trace_cleanup\n"); );
    // Init
    VsingenA___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsingenA___024root*>(voidSelf);
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
