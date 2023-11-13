module bcd7seg(
  input  [3:0] b,
  output reg [7:0] seg
);
// detailed implementation ...

wire [7:0] segs [7:0];

//the last one is dot.
assign segs[0] = 8'b11111101;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;

wire en = b[3];
always@(b or en)
    if(en) begin
        casez(b[2:0])
            3'b000: 	seg = 8'b00000010;
            3'b001:	seg = 8'b10011111;
            3'b010:	seg = 8'b00100101;
            3'b011:	seg = 8'b00001101;
            3'b100:	seg = 8'b10011001;
            3'b101:	seg = 8'b01001001;
            3'b110:	seg = 8'b01000001;
            3'b111: 	seg = 8'b00011111;
                default: seg = 8'b00000011;
        endcase
    end
    else seg = 8'b00000010;

endmodule
