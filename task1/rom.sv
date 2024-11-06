module rom #(parameter WAddr = 8, WD = 8)(
    input logic clk,
    input logic [WAddr-1: 0] AddrIn,
    output logic [WD-1: 0] DOut
);

logic [WD-1: 0] RomArr [2**WAddr-1: 0];

initial begin
    $readmemh("sinerom.mem", RomArr);
end;

always_ff@(posedge clk)
    DOut <= RomArr[AddrIn];

endmodule


