module singenA #(parameter 
    WAddr = 8,
    WD = 8
)(
    input logic [WAddr-1: 0] incr,    
    input logic clk, 
    input logic rst,
    input logic en,
    input logic [WAddr-1: 0] diff,
    output logic [WD-1: 0] DOut1,
    output logic [WD-1: 0] DOut2
);

logic [WAddr-1: 0] Addr1;
logic [WAddr-1: 0] Addr2;

assign Addr2 = Addr1 + diff;

counter C1 (
    .incr (incr),
    .clk (clk),
    .rst (rst),
    .en (en),
    .CNT (Addr1)
);

dualport_rom R1 (
    .clk (clk),
    .Addr1 (Addr1),
    .Addr2 (Addr2),
    .DOut1 (DOut1),
    .DOut2 (DOut2)
);

endmodule
