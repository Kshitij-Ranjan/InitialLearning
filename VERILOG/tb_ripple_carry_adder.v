module tb_ripple_carry_adder;
    reg [3:0] a, b;
    reg carry_in;
    wire [3:0] sum;
    wire carry_out;

    ripple_carry_adder uut(sum, carry_out, a, b, carry_in);

    initial begin
        $dumpfile("ripple_carry_adder.vcd");
        $dumpvars(0, tb_ripple_carry_adder);

        // Test 1: 3 + 2 + 0 = 5
        a = 4'b0011; b = 4'b0010; carry_in = 0;
        #10;

        // Test 2: 7 + 8 + 0 = 15
        a = 4'b0111; b = 4'b1000; carry_in = 0;
        #10;

        // Test 3: 9 + 6 + 1 = 16 (carry out expected)
        a = 4'b1001; b = 4'b0110; carry_in = 1;
        #10;

        // Test 4: 15 + 15 + 0 = 30 (carry out expected)
        a = 4'b1111; b = 4'b1111; carry_in = 0;
        #10;

        $finish;
    end
endmodule
