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
import "DPI-C" function void npc_trap();
assign opcode=inst[6:0];
assign funct3=inst[14:12];
assign funct7=inst[31:25];
assign funct12=inst[31:20];

assign alu_func=4'b0000;
assign w_en=1'b1;
assign alu_a_sel=1'b1;
assign alu_b_sel=1'b1;
always@(*)begin
    if(opcode==7'b1110011 && funct12==12'b000000000001)begin
        npc_trap();
    end
end
endmodule