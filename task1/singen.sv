module singen #(parameter WAddr = 8, WD = 8)(
    input logic clk,
    input logic en,
    input logic rst,
    input logic [WAddr-1: 0] incr,
    output logic [WD-1: 0] DOut
);

logic [WAddr-1: 0] Addr;

counter CNTAddr (
    .clk(clk),
    .en(en),
    .rst(rst),
    .incr(incr),
    .CNT(Addr)
);

rom ROM1 (
    .clk(clk),
    .AddrIn(Addr),
    .DOut(DOut)
);

endmodule

