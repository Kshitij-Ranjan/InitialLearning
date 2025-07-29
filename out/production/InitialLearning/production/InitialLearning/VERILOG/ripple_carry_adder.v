module ripple_carry_adder(
    output [3:0] sum,
    output carry_out,
    input [3:0] a,
    input [3:0] b,
    input carry_in
);
    assign {carry_out, sum} = a + b + carry_in;
endmodule
