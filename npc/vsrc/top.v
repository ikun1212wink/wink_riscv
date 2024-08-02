module top(
    input clk,
    input rst,
    output [31:0] inst,
    output [31:0] pc
);
//ftrace用
wire jal;
wire jalr;

wire w_csr_en;
wire r_csr_en;
wire [31:0] alu_a,alu_b;
wire [31:0] alu_out;
wire alu_a_sel;
wire [1:0] alu_b_sel;//加法器输入数据类型选择
wire [3:0] alu_func;//加法器功能选择
wire [2:0] branch_type;//分支类型
wire [2:0] memory_rd_ctrl;//内存读取模式选择
wire [7:0] memory_wr_ctrl;//写内存模式选择
wire mem_rd_en;//存储器读使能
wire mem_wr_en;//存储器写使能

wire [31:0] mem_rd_data;//存储器读出的数据
wire [31:0] r_csr_data; //系统寄存器读出数据
wire [31:0] rs1_data,rs2_data;//普通寄存器读出数据
wire w_en;//写寄存器信号
wire [1:0] w_sel;//写入寄存器的数据类型选择
reg [31:0] w_data;//写入寄存器的数据
wire [31:0] jump_pc;//PC跳转的值

assign jump_pc = (jump_en==1'b1) ? alu_out : 
                 ((jump_ecall|jump_mret)==1'b1) ? r_csr_data : 32'h0;

//跳转信号
wire jump_jtype;//jal jalr 
wire jump_ecall;//ecall
wire jump_mret; //mret
wire jump_branch;//b type
//总跳转信号
wire jump_en;

wire [31:0] pc_plus4;

wire [31:0] imm_out;

assign alu_a=alu_a_sel ? rs1_data : pc ;
assign alu_b=(alu_b_sel==2'b00) ? rs2_data :
             (alu_b_sel==2'b01) ? r_csr_data :
             (alu_b_sel==2'b10) ? 32'h0 :
             (alu_b_sel==2'b11) ? imm_out : 32'h0;

assign pc_plus4=pc+32'h4;

assign jump_en=jump_jtype||jump_branch;

//对写入寄存器的数据类型进行选择
always@(*)
begin
    case(w_sel)
    2'b00:  w_data = r_csr_data;
    2'b01:  w_data = pc_plus4;
    2'b10:  w_data = alu_out;
    2'b11:  w_data = mem_rd_data;//数据从内存写入寄存器（待完成）
    default:w_data = 32'h0;
    endcase
end



ysyx_23060240_IDU IDU(
    .inst(inst),
    .alu_a_sel(alu_a_sel),
    .alu_b_sel(alu_b_sel),
    .w_en(w_en),
    .alu_func(alu_func),
    .jump_jtype(jump_jtype),//
    .jump_ecall(jump_ecall),
    .jump_mret(jump_mret),
    .w_sel(w_sel),//
    .branch_type(branch_type),//
    .memory_rd_ctrl(memory_rd_ctrl),
    .memory_wr_ctrl(memory_wr_ctrl),
    .mem_rd_en(mem_rd_en),
    .mem_wr_en(mem_wr_en),
    .is_jal(jal),
    .is_jalr(jalr),
    .w_csr_en(w_csr_en),
    .r_csr_en(r_csr_en)
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
    .jump_en(jump_en||jump_ecall||jump_mret),
    .jump_pc(jump_pc),
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

ysyx_23060240_BSU BSU(
    .rs1(rs1_data),
    .rs2(rs2_data),
    .branch_type(branch_type),
    .jump_branch(jump_branch)
);

ysyx_23060240_MEM MEM(
    .mem_rd_en(mem_rd_en),
    .mem_wr_en(mem_wr_en),
    .memory_rd_ctrl(memory_rd_ctrl),
    .memory_wr_ctrl(memory_wr_ctrl),
    .mem_wr_data(rs2_data),
    .mem_rd_addr(alu_out),
    .mem_wr_addr(alu_out),
    .mem_rd_data(mem_rd_data)
);

ysyx_23060240_IFU IFU(
    .pc(pc),
    .inst(inst)
);

ysyx_23060240_CSR CSR(
    .pc(pc),
    .clk(clk),
    .r_csr_addr(inst[31:20]),
    .w_csr_addr(inst[31:20]),
    .w_csr_data(alu_out),
    .w_csr_en(w_csr_en),
    .r_csr_en(r_csr_en),
    .jump_mret(jump_mret),
    .jump_ecall(jump_ecall),
    .r_csr_data(r_csr_data)
);

/* import "DPI-C" function void trace_func_call(input int pc, input int alu_out,input bit tail);
import "DPI-C" function void trace_func_ret(input int pc);
//import "DPI-C" function void trace_func_ret(input int pc);

always@(posedge clk)begin
    if(jal)begin
        if(inst[11:7]==1)begin
            trace_func_call(pc,alu_out,1'b0);
        end
    end
end

always@(posedge clk)begin
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
end */

endmodule