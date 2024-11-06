module counter #(parameter W = 8)(
    input logic clk,
    input logic en,
    input logic rst,
    input logic [W-1:0] incr,
    output logic [W-1:0] CNT
);

always_ff@(posedge clk)
    if (rst) CNT <= incr;
    else CNT <= CNT + {{W-1{1'b0}}, en};

endmodule


