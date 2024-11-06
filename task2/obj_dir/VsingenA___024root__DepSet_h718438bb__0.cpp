// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsingenA.h for the primary calling header

#include "VsingenA__pch.h"
#include "VsingenA__Syms.h"
#include "VsingenA___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsingenA___024root___dump_triggers__act(VsingenA___024root* vlSelf);
#endif  // VL_DEBUG

void VsingenA___024root___eval_triggers__act(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsingenA___024root___dump_triggers__act(vlSelf);
    }
#endif
}
