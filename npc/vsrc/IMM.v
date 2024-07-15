module ysyx_23060240_IMM(
    input [31:0] inst,
    output [31:0] immout
);
wire [6:0] opcode;
wire [31:0] out1,out2,out3,out4,out5,out6,out7,out8;
assign out1={inst[31:12],12'b0};
assign out2={inst[31:12],12'b0};
assign out3={{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
assign out4={{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};
assign out5={{12{inst[31]}},inst[19:12],inst[20],inst[30:21],1'b0};
assign out6={{20{inst[31]}},inst[31:20]};
assign out7={{20{inst[31]}},inst[31:25],inst[11:7]};
assign out8={{20{inst[31]}},inst[31:20]};
assign opcode=inst[6:0];

ysyx_23060240_MuxKeyWithDefault #(8,7,32) imm_mux(
    immout,opcode,32'h0,{
        7'b0010111,out1,//auipc
        7'b0110111,out2,//lui
        7'b1100011,out3,//beq,bne,blt,bge,bltu,bgeu
        7'b1101111,out4,//jal
        7'b1100111,out5,//jalr
        7'b0000011,out6,//lb,lh,lw,lbu,lhu
        7'b0100011,out7,//sb,sh,sw
        7'b0010011,out8//addi,slti,sltiu,xori,ori,andi,slli,srli,srai
    }
);

endmodule