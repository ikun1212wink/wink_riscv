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

assign a0=signed_a+signed_b;//ALU功能0  直接相加 
assign a1=signed_a<<signed_b[4:0];//ALU功能1  （sll）左移rs2的低五位,空位补0  (slli)左移shamt的低五位,空位补0,仅当shamt[5]=0该指令有效
assign a2=signed_a<signed_b?1:0;//ALU功能2  （slt,slti）slt:视为补码比较rs1,rs2,rs1更小，向rd写入1 
assign a3=unsigned_a<unsigned_b?1:0;//ALU功能3  （sltu,sltiu）和功能2差不多，但是看成无符号数

assign a4=signed_a^signed_b;//ALU功能4  （xor,xori）rs1和rs2/imm 按位异或，结果写入rd 
assign a5=signed_a>>signed_b[4:0];//ALU功能5  （srl,srli）作用和功能1同理
assign a6=signed_a|signed_b;//ALU功能6  （or,ori） rs1/rs2按位或写入rd
assign a7=signed_a&signed_b;

assign a8=signed_a-signed_b;//ALU功能8  直接相减
assign a9=32'h0;
assign a10=32'h0;
assign a11=32'h0;

assign a12=32'h0;
assign a13=signed_a>>>signed_b[4:0];//ALU功能13 （sra,srai）sra:rs1右移rs2的第五位，高位用rs1的最高位填充 
assign a14=signed_b;//ALU功能14  lui 将20位的imm符号拓展后左移12位，并将低12位置0,结果写入rd
assign a15=32'h0;

ysyx_23060240_MuxKey #(16,4,32) alumux(
        ALUout,
        alu_func,
    {
        4'b0000,a0,
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