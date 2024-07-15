module ysyx_23060240_IDU(
    input [31:0] inst,
    output alu_a_sel,alu_b_sel,
    output w_en,
    output [3:0] alu_func
);
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [11:0] funct12;
wire alu_a_sel_imm,alu_a_sel_pc;
import "DPI-C" function void npc_trap();
assign opcode=inst[6:0];
assign funct3=inst[14:12];
assign funct7=inst[31:25];
assign funct12=inst[31:20];

assign alu_func=4'b0000;
assign w_en=1'b1;

assign alu_a_sel_imm=1'b1;
assign alu_a_sel_pc=1'b0;
assign alu_b_sel=1'b1;

ysyx_23060240_MuxKeyWithDefault #(8,7,1) alu_a_sel(
    alu_a_sel,opcode,1'b1,{
        7'b0010111,alu_a_sel_pc,//auipc
        7'b0110111,alu_a_sel_imm,//lui
        7'b1100011,alu_a_sel_imm,//beq,bne,blt,bge,bltu,bgeu
        7'b1101111,alu_a_sel_imm,//jal
        7'b1100111,alu_a_sel_imm,//jalr
        7'b0000011,alu_a_sel_imm,//lb,lh,lw,lbu,lhu
        7'b0100011,alu_a_sel_imm,//sb,sh,sw
        7'b0010011,alu_a_sel_imm//addi,slti,sltiu,xori,ori,andi,slli,srli,srai
    }
);
always@(*)begin
    if(inst==32'b00000000000100000000000001110011)begin
        npc_trap();
    end
end
endmodule