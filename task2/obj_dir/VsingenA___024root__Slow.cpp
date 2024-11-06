// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsingenA.h for the primary calling header

#include "VsingenA__pch.h"
#include "VsingenA__Syms.h"
#include "VsingenA___024root.h"

void VsingenA___024root___ctor_var_reset(VsingenA___024root* vlSelf);

VsingenA___024root::VsingenA___024root(VsingenA__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsingenA___024root___ctor_var_reset(this);
}

void VsingenA___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsingenA___024root::~VsingenA___024root() {
}
