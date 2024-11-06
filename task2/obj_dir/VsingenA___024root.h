// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsingenA.h for the primary calling header

#ifndef VERILATED_VSINGENA___024ROOT_H_
#define VERILATED_VSINGENA___024ROOT_H_  // guard

#include "verilated.h"


class VsingenA__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsingenA___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(incr,7,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(diff,7,0);
    VL_OUT8(DOut1,7,0);
    VL_OUT8(DOut2,7,0);
    CData/*7:0*/ singenA__DOT__Addr1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> singenA__DOT__R1__DOT__RomArr;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsingenA__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsingenA___024root(VsingenA__Syms* symsp, const char* v__name);
    ~VsingenA___024root();
    VL_UNCOPYABLE(VsingenA___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
