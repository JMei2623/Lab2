// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsingen.h for the primary calling header

#include "Vsingen__pch.h"
#include "Vsingen___024root.h"

VL_ATTR_COLD void Vsingen___024root___eval_static(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsingen___024root___eval_initial__TOP(Vsingen___024root* vlSelf);

VL_ATTR_COLD void Vsingen___024root___eval_initial(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsingen___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsingen___024root___eval_initial__TOP(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x65726f6dU;
    __Vtemp_1[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.singen__DOT__ROM1__DOT__RomArr)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsingen___024root___eval_final(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsingen___024root___eval_settle(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingen___024root___dump_triggers__act(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsingen___024root___dump_triggers__nba(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsingen___024root___ctor_var_reset(Vsingen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsingen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsingen___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->incr = VL_RAND_RESET_I(8);
    vlSelf->DOut = VL_RAND_RESET_I(8);
    vlSelf->singen__DOT__Addr = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->singen__DOT__ROM1__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
