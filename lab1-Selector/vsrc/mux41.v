module mux41(
	input [9:0] sw,
	output [1:0] ledr

);

wire [1:0] s;
assign s = sw[1:0];

MuxKeyWithDefault #(4, 2, 2) i0 (ledr, s, 2'b00, {
	 2'b00, sw[3:2],
	 2'b01, sw[5:4],
	 2'b10, sw[7:6],
         2'b11, sw[9:8]
});
endmodule
