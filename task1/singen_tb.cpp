#include "Vsingen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
// #include "vbuddy.cpp"

int main(int argc, char **argv, char **env)
{
    int i, clk;

    Verilated::commandArgs(argc, argv);

    Vsingen *top = new Vsingen; // verilog instance

    // turning on signal tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("singen.vcd"); // data stored

    /* // sending output values to VBD (in hex, parallel)
    vbdHex(4, (int(top->count) >> 16) & 0xF);
    vbdHex(4, (int(top->count) >> 8) & 0xF);
    vbdHex(4, (int(top->count) >> 4) & 0xF);
    vbdHex(4, int(top->count) & 0xF);
    vbdCycle(i+1)

    // or simply plot the curve

    vbdPlot(int(top->count), 0, 255);
    */

    // input init
    top->clk = 1;
    top->rst = 0;
    top->en = 0;
    top->incr = 32;

    for (i = 0; i < 10000; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->clk = !top->clk;
            top->eval();
        }
        top->rst = (i < 2);
        top->en = 1;
        // int vbdV = int(vbdValue());
        // top->en = i-int(i/vbdV)*vbdV;
        // if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
        if (Verilated::gotFinish())
            exit(0);
    }
    tfp->close();
    exit(0);
}