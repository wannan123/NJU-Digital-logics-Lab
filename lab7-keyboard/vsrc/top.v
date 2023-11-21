module top (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg [7:0] seg0 = 8'b11111111,
    output reg [7:0] seg1);
    
reg [9:0] buffer;
ps2_keyboard my_keyboard(
    .clk(clk),
    .resetn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .buffer(buffer),
    .seg0(seg0),
    .seg1(seg1)
);
//segs seg(buffer,clk, seg0, seg1);
endmodule

