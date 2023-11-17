module lfsr (
    input  sw,
    output reg [7:0] ledr = 8'b00000010,
    output [7:0] seg0,
    output [7:0] seg1);

reg shift;   
always @ (sw) begin
    shift = ledr[4] ^ ledr[3] ^ ledr[2] ^ ledr[0];
    ledr <= {shift,ledr[7:1]};
end    
segs seg(ledr, seg0, seg1);
endmodule
