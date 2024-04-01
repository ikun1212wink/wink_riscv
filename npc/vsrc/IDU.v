module ysyx_23060240_IDU(
    input [31:0] inst,
    output alu_a_sel,alu_b_sel,
    output w_en,
    output [3:0] alu_func,
);
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
assign alu_func=4'b0000;
assign w_en=1'b1;
assign alu_a_sel=1'b1;
assign alu_b_sel=1'b1;

endmodule