module top (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg [7:0] seg0 = 8'b11111111,
    output reg [7:0] seg1 = 8'b11111111,
    output reg [7:0] seg2 = 8'b11111111,
    output reg [7:0] seg3 = 8'b11111111,
    output reg [7:0] seg4 = 8'b11111111,
    output reg [7:0] seg5 = 8'b11111111);
    
reg [9:0] buffer;
ps2_keyboard my_keyboard(
    .clk(clk),
    .resetn(~rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .buffer(buffer),
    .seg0(seg0),
    .seg1(seg1),
    .seg2(seg2),
    .seg3(seg3),
    .seg4(seg4),
    .seg5(seg5)
);
//segs seg(buffer,clk, seg0, seg1);
endmodule

