module top(
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc
);
wire [31:0] alu_a,alu_b,alu_out;
wire [31:0] rs1_data,rs2_data;
wire alu_a_sel,alu_b_sel;
wire [31:0] imm_out;
wire w_en;
wire [3:0] alu_func;

assign alu_a=alu_a_sel ? rs1_data : pc ;
assign alu_b=alu_b_sel ? imm_out : rs2_data;

ysyx_23060240_IDU IDU(
    .inst(inst),
    .alu_a_sel(alu_a_sel),
    .alu_b_sel(alu_b_sel),
    .w_en(w_en),
    .alu_func(alu_func)
);

ysyx_23060240_RegisterFile Register(
    .clk(clk),
    .w_data(alu_out),
    .r_rs1_addr(inst[19:15]),
    .r_rs2_addr(inst[24:20]),
    .w_rd_addr(inst[11:7]),
    .w_en(w_en),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
);

ysyx_23060240_pc Pc(
    .clk(clk),
    .rst(rst),
    .pc(pc)
);

ysyx_23060240_ALU ALU(
    .SrcA(alu_a),
    .SrcB(alu_b),
    .alu_func(alu_func),
    .ALUout(alu_out)
);

ysyx_23060240_IMM IMM(
    .inst(inst),
    .immout(imm_out)
);

endmodule