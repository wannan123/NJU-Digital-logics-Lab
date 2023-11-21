module ps2_keyboard(
	input clk,
	input resetn,
	input ps2_clk,
	input ps2_data,
	output reg [9:0] buffer,
	output [7:0] seg0,
	output [7:0] seg1);

        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [5:0] count2;
    reg is_fd = 0;
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
                    (count2 == 6'd30)) begin      // odd  parity
                    $display("receive %x", buffer[8:1]);
     		    count2 <= 0;
     		    is_fd <= 0;
                end
                if(buffer[8:1] == 8'hf0) is_fd <= 1;
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
                count2 <= count2 + 6'b1;
              end
            end
        end
    end
    
    always @(posedge clk) begin
    	if (is_fd == 0) begin 
	case(buffer[4:1])
		4'b0000: seg0 = 8'b00000010;
		4'b0001: seg0 = 8'b10011111;
		4'b0010: seg0 = 8'b00100101;
		4'b0011: seg0 = 8'b00001101;
		4'b0100: seg0 = 8'b10011001;
		4'b0101: seg0 = 8'b01001001;
		4'b0110: seg0 = 8'b01000001;
		4'b0111: seg0 = 8'b00011111;
		4'b1000: seg0 = 8'b00000001;
		4'b1001: seg0 = 8'b00011001;
		4'b1010: seg0 = 8'b00010001;
		4'b1011: seg0 = 8'b11000001;
		4'b1100: seg0 = 8'b01100011;
		4'b1101: seg0 = 8'b10000101;
		4'b1110: seg0 = 8'b01100001;
		4'b1111: seg0 = 8'b01110001;
		default seg0 = 8'b11111111;
	endcase
	end
	else if (is_fd == 1) seg0 = 8'b11111111;

    end
    
    always @(posedge clk) begin
    	if (is_fd == 0) begin 
	case(buffer[8:5])
		4'b0000: seg1 = 8'b00000010;
		4'b0001: seg1 = 8'b10011111;
		4'b0010: seg1 = 8'b00100101;
		4'b0011: seg1 = 8'b00001101;
		4'b0100: seg1 = 8'b10011001;
		4'b0101: seg1 = 8'b01001001;
		4'b0110: seg1 = 8'b01000001;
		4'b0111: seg1 = 8'b00011111;
		4'b1000: seg1 = 8'b00000001;
		4'b1001: seg1 = 8'b00011001;
		4'b1010: seg1 = 8'b00010001;
		4'b1011: seg1 = 8'b11000001;
		4'b1100: seg1 = 8'b01100011;
		4'b1101: seg1 = 8'b10000101;
		4'b1110: seg1 = 8'b01100001;
		4'b1111: seg1 = 8'b01110001;
		default seg1 = 8'b11111111;
	endcase
	end
	else if (is_fd == 1) seg1 = 8'b11111111;

    end


endmodule
