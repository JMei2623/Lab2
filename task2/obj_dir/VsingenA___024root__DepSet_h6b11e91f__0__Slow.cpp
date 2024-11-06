// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsingenA.h for the primary calling header

#include "VsingenA__pch.h"
#include "VsingenA___024root.h"

VL_ATTR_COLD void VsingenA___024root___eval_static(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsingenA___024root___eval_initial__TOP(VsingenA___024root* vlSelf);

VL_ATTR_COLD void VsingenA___024root___eval_initial(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsingenA___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void VsingenA___024root___eval_initial__TOP(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x65726f6dU;
    __Vtemp_1[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.singenA__DOT__R1__DOT__RomArr)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VsingenA___024root___eval_final(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VsingenA___024root___eval_settle(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsingenA___024root___dump_triggers__act(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VsingenA___024root___dump_triggers__nba(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VsingenA___024root___ctor_var_reset(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->incr = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->diff = VL_RAND_RESET_I(8);
    vlSelf->DOut1 = VL_RAND_RESET_I(8);
    vlSelf->DOut2 = VL_RAND_RESET_I(8);
    vlSelf->singenA__DOT__Addr1 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->singenA__DOT__R1__DOT__RomArr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
