module ps2_keyboard(
	input clk,
	input resetn,
	input ps2_clk,
	input ps2_data,
	output reg [9:0] buffer,
	output [7:0] seg0,
	output [7:0] seg1,
	output [7:0] seg2,
	output [7:0] seg3,
	output [7:0] seg4,
	output [7:0] seg5
	);

        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [5:0] count2;
    reg [5:0] count3;
    reg is_fd = 1;
    reg [15:0] outputdata;
    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};

    end
    
    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];
	
    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])   &&
                    (count2 == 6'd30)&&
                    (is_fd ==1 )) begin      // odd  parity
                    //$display("receive %x", buffer[8:1]);
     		    count2 <= 0;
     		    is_fd <= 0;
     		    count3 <= count3 + 5'b1;
                end
                if(buffer[8:1] == 8'hf0) is_fd <= 1;
                
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                
                count <= count + 3'b1;
                count2 <= count2 + 5'b1;
              end
            end
        end
    end
    
    always @(posedge clk) begin
    	if (is_fd == 0) begin 
    	seg0 <= 8'b11111111;
	case(buffer[4:1])
		4'b0000: seg0 <= 8'b00000010;
		4'b0001: seg0 <= 8'b10011111;
		4'b0010: seg0 <= 8'b00100101;
		4'b0011: seg0 <= 8'b00001101;
		4'b0100: seg0 <= 8'b10011001;
		4'b0101: seg0 <= 8'b01001001;
		4'b0110: seg0 <= 8'b01000001;
		4'b0111: seg0 <= 8'b00011111;
		4'b1000: seg0 <= 8'b00000001;
		4'b1001: seg0 <= 8'b00011001;
		4'b1010: seg0 <= 8'b00010001;
		4'b1011: seg0 <= 8'b11000001;
		4'b1100: seg0 <= 8'b01100011;
		4'b1101: seg0 <= 8'b10000101;
		4'b1110: seg0 <= 8'b01100001;
		4'b1111: seg0 <= 8'b01110001;
		default seg0 <= 8'b11111111;
	endcase
	end
	else if (is_fd == 1) seg0 <= 8'b11111111;

    end
    
    always @(posedge clk) begin
    	if (is_fd == 0) begin 
    	seg1 <= 8'b11111111;
	case(buffer[8:5])
		4'b0000: seg1 <= 8'b00000010;//0
		4'b0001: seg1 <= 8'b10011111;//1
		4'b0010: seg1 <= 8'b00100101;//2
		4'b0011: seg1 <= 8'b00001101;//3
		4'b0100: seg1 <= 8'b10011001;//4
		4'b0101: seg1 <= 8'b01001001;//5
		4'b0110: seg1 <= 8'b01000001;//6
		4'b0111: seg1 <= 8'b00011111;//7
		4'b1000: seg1 <= 8'b00000001;//8
		4'b1001: seg1 <= 8'b00011001;//9
		4'b1010: seg1 <= 8'b00010001;
		4'b1011: seg1 <= 8'b11000001;
		4'b1100: seg1 <= 8'b01100011;
		4'b1101: seg1 <= 8'b10000101;
		4'b1110: seg1 <= 8'b01100001;
		4'b1111: seg1 <= 8'b01110001;
		default seg1 <= 8'b11111111;
	endcase
	end
	else if (is_fd == 1) seg1 <= 8'b11111111;

    end


    always @(posedge clk) begin
    	if (is_fd == 0) begin 
	case(buffer[8:1])
		8'h1C:begin seg2 <= 8'b01001001;seg3 <= 8'b01000001;end
		8'h32:begin seg2 <= 8'b01000001;seg3 <= 8'b01000001;end
		8'h21:begin seg2 <= 8'b00011111;seg3 <= 8'b01000001;end
		8'h23:begin seg2 <= 8'b00000001;seg3 <= 8'b01000001;end
		8'h24:begin seg2 <= 8'b00011001;seg3 <= 8'b01000001;end
		
		8'h2B:begin seg2 <= 8'b00000010;seg3 <= 8'b00011111;end
		8'h34:begin seg2 <= 8'b10011111;seg3 <= 8'b00011111;end
		8'h33:begin seg2 <= 8'b00100101;seg3 <= 8'b00011111;end
		8'h43:begin seg2 <= 8'b00001101;seg3 <= 8'b00011111;end
		8'h3B:begin seg2 <= 8'b10011001;seg3 <= 8'b00011111;end
		8'h42:begin seg2 <= 8'b01001001;seg3 <= 8'b00011111;end
		8'h4B:begin seg2 <= 8'b01000001;seg3 <= 8'b00011111;end
		8'h3A:begin seg2 <= 8'b00011111;seg3 <= 8'b00011111;end
		8'h31:begin seg2 <= 8'b00000001;seg3 <= 8'b00011111;end
		8'h44:begin seg2 <= 8'b00011001;seg3 <= 8'b00011111;end
		
		8'h4D:begin seg2 <= 8'b00000010;seg3 <= 8'b00000001;end
		8'h15:begin seg2 <= 8'b10011111;seg3 <= 8'b00000001;end
		8'h2D:begin seg2 <= 8'b00100101;seg3 <= 8'b00000001;end
		8'h1B:begin seg2 <= 8'b00001101;seg3 <= 8'b00000001;end
		8'h2C:begin seg2 <= 8'b10011001;seg3 <= 8'b00000001;end
		8'h3C:begin seg2 <= 8'b01001001;seg3 <= 8'b00000001;end
		8'h2A:begin seg2 <= 8'b01000001;seg3 <= 8'b00000001;end
		8'h1D:begin seg2 <= 8'b00011111;seg3 <= 8'b00000001;end
		8'h22:begin seg2 <= 8'b00000001;seg3 <= 8'b00000001;end
		8'h35:begin seg2 <= 8'b00011001;seg3 <= 8'b00000001;end
		
		8'h1A:begin seg2 <= 8'b00000010;seg3 <= 8'b00011001;end
		
		8'h45:begin seg1 <= 8'b00000001;seg3 <= 8'b10011001;end
		8'h16:begin seg2 <= 8'b00011001;seg3 <= 8'b10011001;end
		
		8'h1E:begin seg2 <= 8'b00000010;seg3 <= 8'b01001001;end
		8'h26:begin seg2 <= 8'b10011111;seg3 <= 8'b01001001;end
		8'h25:begin seg2 <= 8'b00100101;seg3 <= 8'b01001001;end
		8'h2E:begin seg2 <= 8'b00001101;seg3 <= 8'b01001001;end
		8'h36:begin seg2 <= 8'b10011001;seg3 <= 8'b01001001;end
		8'h3D:begin seg2 <= 8'b01001001;seg3 <= 8'b01001001;end
		8'h3E:begin seg2 <= 8'b01000001;seg3 <= 8'b01001001;end
		8'h46:begin seg2 <= 8'b00011111;seg3 <= 8'b01001001;end
		default:begin seg2 <= 8'b11111111;seg3 <= 8'b11111111; end
	endcase
	end
	else if (is_fd == 1) begin 
		seg2 <= 8'b11111111;
		seg3 <= 8'b11111111;
		end

    end



     always @(posedge clk) begin
     case(count3) 
     	6'd0:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd1:begin seg4 <= 8'b10011111;seg5 <= 8'b00000010;end
     	6'd2:begin seg4 <= 8'b00100101;seg5 <= 8'b00000010;end
     	6'd3:begin seg4 <= 8'b00001101;seg5 <= 8'b00000010;end
     	6'd4:begin seg4 <= 8'b10011001;seg5 <= 8'b00000010;end
     	6'd5:begin seg4 <= 8'b01001001;seg5 <= 8'b00000010;end
     	6'd6:begin seg4 <= 8'b01000001;seg5 <= 8'b00000010;end
     	6'd7:begin seg4 <= 8'b00011111;seg5 <= 8'b00000010;end
     	6'd8:begin seg4 <= 8'b00000001;seg5 <= 8'b00000010;end
     	6'd9:begin seg4 <= 8'b00011001;seg5 <= 8'b00000010;end
     	6'd10:begin seg5 <= 8'b10011111;seg4 <= 8'b00000010;end
     	6'd11:begin seg5 <= 8'b10011111;seg4 <= 8'b10011111;end
     	6'd12:begin seg5 <= 8'b10011111;seg4 <= 8'b00100101;end
     	6'd13:begin seg5 <= 8'b10011111;seg4 <= 8'b00001101;end
     	6'd14:begin seg5 <= 8'b10011111;seg4 <= 8'b10011001;end
     	6'd15:begin seg5 <= 8'b10011111;seg4 <= 8'b01001001;end
     	6'd16:begin seg5 <= 8'b10011111;seg4 <= 8'b01000001;end
     	6'd17:begin seg5 <= 8'b10011111;seg4 <= 8'b00011111;end
     	6'd18:begin seg5 <= 8'b10011111;seg4 <= 8'b00000001;end
     	6'd19:begin seg5 <= 8'b10011111;seg4 <= 8'b00011001;end
     	6'd20:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd21:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd22:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd23:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd24:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd25:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd26:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd27:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd28:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd29:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd30:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd31:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd32:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd33:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd34:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd35:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd36:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd37:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd38:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd39:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd40:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd41:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd42:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd43:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd44:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd45:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd46:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd47:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd48:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd49:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	6'd50:begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
	default: begin seg4 <= 8'b00000010;seg5 <= 8'b00000010;end
     	endcase
     
     	
     	
     	
     
     
     end



endmodule
