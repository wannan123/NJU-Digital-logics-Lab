module aluhelper(
	input [2:0] switch,
	input [3:0] a,
	input [3:0] b,
	
	output reg [3:0] result,
	output reg carry,
	
	output reg zero,
	output reg overflow
);
reg cin;
reg [3:0] Xor;
reg [4:0] out;
reg [3:0] result2;

//because we need judge sub overflow. 

always @ (result) begin
	if(result == 4'b0000) zero = 1;
	else zero = 0;
end


always @ (switch) begin
		case(switch)
			3'b000: begin 
				cin = 0;
				Xor = ({4{cin}} ^ b) + {{3'b000},cin};
				out = a + Xor;
				carry =out[4];result = out[3:0];
				overflow = (a[3] == Xor[3]) && (result [3] != a[3]);
				end
			3'b001:	begin 
				cin = 1;
				Xor = ({4{cin}} ^ b) + {{3'b000},cin};
				out = a + Xor;
				carry =out[4];result = out[3:0];
				overflow = (a[3] == Xor[3]) && (result [3] != a[3]);
				end
				
			3'b010: result = ~a;
			3'b011:	result = a & b;
			3'b100:	result = a | b;
			3'b101:	result = ~(a ^ b);
			3'b110: begin
				cin = 1;
				Xor = ({4{cin}} ^ b) + {{3'b000},cin};
				out = a + Xor;
				overflow = (a[3] == Xor[3]) && (result [3] != a[3]);
				result2 = out[3:0];
				result = {{3'b000},{overflow ^ result2[3]}};
				end
			3'b111: begin
				cin = 1;
				Xor = ({4{cin}} ^ b) + {{3'b000},cin};
				out = a + Xor;
				result2 = out[3:0];
				result = {3'b000,{(result2 == 4'b0000)}};
				end
		default: Xor = Xor;
		endcase

end



endmodule
