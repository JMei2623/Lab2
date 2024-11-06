module dualport_rom #(parameter 
    WAddr = 8,
    WD = 8
)(
    input  logic  clk,
    input  logic [WAddr-1: 0] Addr1,
    input  logic [WAddr-1: 0] Addr2,
    output logic [WD-1: 0] DOut1,
    output logic [WD-1: 0] DOut2
);

logic [WD - 1 : 0] RomArr [2 ** WAddr - 1 : 0];

initial begin
    $readmemh("sinerom.mem", RomArr);
end;

always_ff @ (posedge clk) 
begin
    DOut1 <= RomArr[Addr1];
    DOut2 <= RomArr[Addr2];
end

endmodule

