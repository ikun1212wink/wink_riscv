module ysyx_23060240_ALU(
    input [31:0] SrcA,SrcB,
    input [3:0] alu_func,
    output [31:0] ALUout
);
wire signed [31:0] signed_a;
wire signed [31:0] signed_b;
wire unsigned 	[31:0] unsigned_a;
wire unsigned 	[31:0] unsigned_b;
wire [31:0] a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15;

assign unsigned_a=SrcA;
assign unsigned_b=SrcB;
assign signed_a=SrcA;
assign signed_b=SrcB;

assign a0=signed_a+signed_b;
assign a1=signed_a<<signed_b[4:0];
assign a2=signed_a<signed_b?1:0;
assign a3=unsigned_a<unsigned_b?1:0;

assign a4=signed_a^signed_b;
assign a5=signed_a>>signed_b[4:0];
assign a6=signed_a|signed_b;
assign a7=32'h0;

assign a8=signed_a-signed_b;
assign a9=32'h0;
assign a10=32'h0;
assign a11=32'h0;

assign a12=32'h0;
assign a13=signed_a>>>signed_b[4:0];
assign a14=signed_b;
assign a15=32'h0;

ysyx_23060240_MuxKey #(16,4,32) alumux(
        ALUout,
        alu_func,
    {
        4'b0000,a0,//直接相加
        4'b0001,a1,
        4'b0010,a2,
        4'b0011,a3,

        4'b0100,a4,
        4'b0101,a5,
        4'b0110,a6,
        4'b0111,a7,

        4'b1000,a8,
        4'b1001,a9,
        4'b1010,a10,
        4'b1011,a11,

        4'b1100,a12,
        4'b1101,a13,
        4'b1110,a14,
        4'b1111,a15
    }
);

endmodule