module alu(
	input [11:0] sw,
	output reg [6:0] ledr
);
reg [3:0] a = sw[7:4];
reg [3:0] b = sw[3:0];
wire [2:0] switch = sw[10:8];
aluhelper help(switch,a,b,ledr[3:0],ledr[6],ledr[5],ledr[4]);

endmodule
