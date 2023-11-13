module encode83 (
    input [8:0] sw,
    output reg [7:0] ledr,
    output reg [3:0]  pos,
    output [7:0] seg0);
    


    
    always@(sw)
    
        if(sw[8]) begin
            casez(sw[7:0])
             	8'b0000_0001: begin pos = 4'b1000; ledr = sw[7:0]; end 
             	8'b0000_001z: begin pos = 4'b1001; ledr = 8'b00000010; end
                8'b0000_01zz: begin pos = 4'b1010; ledr = 8'b00000100; end
              	8'b0000_1zzz: begin pos = 4'b1011; ledr = 8'b00001000; end
             	8'b0001_zzzz: begin pos = 4'b1100; ledr = 8'b00010000; end
             	8'b001z_zzzz: begin pos = 4'b1101; ledr = 8'b00100000; end
             	8'b01zz_zzzz: begin pos = 4'b1110; ledr = 8'b01000000; end
             	8'b1zzz_zzzz: begin pos = 4'b1111; ledr = 8'b10000000; end
             	
                default: begin pos = 4'b1000;ledr = 8'b00000000; end
            endcase
        end
        else begin pos = 4'b1000 ; ledr = 8'b00000000; end

    bcd7seg seg(pos,seg0);
endmodule
