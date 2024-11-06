// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsingenA.h for the primary calling header

#include "VsingenA__pch.h"
#include "VsingenA___024root.h"

void VsingenA___024root___eval_act(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void VsingenA___024root___nba_sequent__TOP__0(VsingenA___024root* vlSelf);

void VsingenA___024root___eval_nba(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VsingenA___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VsingenA___024root___nba_sequent__TOP__0(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__singenA__DOT__Addr1;
    __Vdly__singenA__DOT__Addr1 = 0;
    // Body
    __Vdly__singenA__DOT__Addr1 = vlSelfRef.singenA__DOT__Addr1;
    __Vdly__singenA__DOT__Addr1 = (0xffU & ((IData)(vlSelfRef.rst)
                                             ? (IData)(vlSelfRef.incr)
                                             : ((IData)(vlSelfRef.singenA__DOT__Addr1) 
                                                + (IData)(vlSelfRef.en))));
    vlSelfRef.DOut1 = vlSelfRef.singenA__DOT__R1__DOT__RomArr
        [vlSelfRef.singenA__DOT__Addr1];
    vlSelfRef.DOut2 = vlSelfRef.singenA__DOT__R1__DOT__RomArr
        [(0xffU & ((IData)(vlSelfRef.diff) + (IData)(vlSelfRef.singenA__DOT__Addr1)))];
    vlSelfRef.singenA__DOT__Addr1 = __Vdly__singenA__DOT__Addr1;
}

void VsingenA___024root___eval_triggers__act(VsingenA___024root* vlSelf);

bool VsingenA___024root___eval_phase__act(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsingenA___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VsingenA___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsingenA___024root___eval_phase__nba(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsingenA___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsingenA___024root___dump_triggers__nba(VsingenA___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsingenA___024root___dump_triggers__act(VsingenA___024root* vlSelf);
#endif  // VL_DEBUG

void VsingenA___024root___eval(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsingenA___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("singenA.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VsingenA___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("singenA.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VsingenA___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VsingenA___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsingenA___024root___eval_debug_assertions(VsingenA___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VsingenA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsingenA___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
