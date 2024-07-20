module top(
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc
);
wire jal;
wire jalr;
wire [31:0] alu_a,alu_b;
wire [31:0] alu_out;
wire alu_a_sel,alu_b_sel;//加法器输入数据类型选择
wire [3:0] alu_func;//加法器功能选择

wire [31:0] rs1_data,rs2_data;
wire w_en;//写寄存器信号
wire [1:0] w_sel;//写入寄存器的数据类型选择
reg [31:0] w_data;//写入寄存器的数据

wire jump_en;//跳转信号
wire [31:0] pc_plus4;

wire [31:0] imm_out;

assign alu_a=alu_a_sel ? rs1_data : pc ;
assign alu_b=alu_b_sel ? imm_out : rs2_data;

assign pc_plus4=pc+32'h4;

//对写入寄存器的数据类型进行选择
always@(*)
begin
    case(w_sel)
    2'b00:  w_data = 32'h0;
    2'b01:  w_data = pc_plus4;
    2'b10:  w_data = alu_out;
    2'b11:  w_data = 32'h0;
    default:w_data = 32'h0;
    endcase
end



ysyx_23060240_IDU IDU(
    .inst(inst),
    .alu_a_sel(alu_a_sel),
    .alu_b_sel(alu_b_sel),
    .w_en(w_en),
    .alu_func(alu_func),
    .jump_en(jump_en),//
    .w_sel(w_sel),//
    .is_jal(jal),
    .is_jalr(jalr)
);

ysyx_23060240_RegisterFile Register(
    .clk(clk),
    .w_data(w_data),
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
    .jump_en(jump_en),
    .jump_pc(alu_out),
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

import "DPI-C" function void trace_func_call(input int pc, input int alu_out,input bit tail);
import "DPI-C" function void trace_func_ret(input int pc);
//import "DPI-C" function void trace_func_ret(input int pc);

always@(negedge clk)begin
    if(jal)begin
        if(inst[11:7]==1)begin
            trace_func_call(pc,alu_out,1'b0);
        end
    end
end

always@(negedge clk)begin
    if(jalr)begin
        if(inst==32'h00008067)begin
            trace_func_ret(pc);
        end
        else if(inst[11:7]==1)begin
            trace_func_call(pc,alu_out,1'b0);
        end
        else if((inst[11:7]==0)&&(imm_out==32'b0))begin//识别到尾调用，goto...
            trace_func_call(pc,alu_out,1'b1);
        end
    end
end

endmodule