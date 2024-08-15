module ysyx_23060240(
/*------------------global------------------ */
    input clock,
    input reset,
    input io_interrupt,

/*------------------axi_master------------------ */
    input         io_master_awready,
    output        io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [3:0]  io_master_awid,  
    output [7:0]  io_master_awlen, 
    output [2:0]  io_master_awsize,
    output [1:0]  io_master_awburst,

    input         io_master_wready,
    output        io_master_wvalid,
    output [31:0] io_master_wdata, 
    output [3:0]  io_master_wstrb, 
    output        io_master_wlast, 

    output        io_master_bready,
    input         io_master_bvalid,
    input  [1:0]  io_master_bresp, 
    input  [3:0]  io_master_bid,

    input         io_master_arready,
    output        io_master_arvalid,
    output [31:0] io_master_araddr,
    output [3:0]  io_master_arid,  
    output [7:0]  io_master_arlen, 
    output [2:0]  io_master_arsize,
    output [1:0]  io_master_arburst,

    output        io_master_rready,
    input         io_master_rvalid,
    input  [1:0]  io_master_rresp, 
    input  [31:0] io_master_rdata, 
    input         io_master_rlast,   
    input  [3:0]  io_master_rid,                         

/*------------------axi_slave------------------ */
    output        io_slave_awready,
    input         io_slave_awvalid,
    input [31:0]  io_slave_awaddr,
    input [3:0]   io_slave_awid,  
    input [7:0]   io_slave_awlen, 
    input [2:0]   io_slave_awsize,
    input [1:0]   io_slave_awburst,
    output        io_slave_wready,
    input         io_slave_wvalid,
    input [31:0]  io_slave_wdata, 
    input [3:0]   io_slave_wstrb, 
    input         io_slave_wlast, 
    input         io_slave_bready,
    output        io_slave_bvalid,
    output[1:0]   io_slave_bresp, 
    output[3:0]   io_slave_bid,   
    output        io_slave_arready,
    input         io_slave_arvalid,
    input [31:0]  io_slave_araddr,
    input [3:0]   io_slave_arid,  
    input [7:0]   io_slave_arlen, 
    input [2:0]   io_slave_arsize,
    input [1:0]   io_slave_arburst,
    input         io_slave_rready,
    output        io_slave_rvalid,
    output[1:0]   io_slave_rresp,
    output[31:0]  io_slave_rdata,
    output        io_slave_rlast,
    output[3:0]   io_slave_rid 

/*------------------trace------------------ */
/*     output [31:0] inst,
    output [31:0] pc,
    output difftest,
    output itrace_reg */
);
wire [31:0] inst;
wire [31:0] pc;
wire difftest;
wire itrace_reg;

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

assign jump_pc = ((jump_jtype||jump_branch)==1'b1) ? alu_out : 
                 ((jump_ecall||jump_mret)==1'b1) ? r_csr_data : 32'h0;

//跳转信号
wire jump_jtype;//jal jalr 
wire jump_ecall;//ecall
wire jump_mret; //mret
wire jump_branch;//b type
//总跳转信号
//wire jump_en;

wire [31:0] pc_plus4;

wire [31:0] imm_out;

assign alu_a=alu_a_sel ? rs1_data : pc ;
assign alu_b=(alu_b_sel==2'b00) ? rs2_data :
             (alu_b_sel==2'b01) ? r_csr_data :
             (alu_b_sel==2'b10) ? 32'h0 :
             (alu_b_sel==2'b11) ? imm_out : 32'h0;

assign pc_plus4=pc+32'h4;

//assign jump_en=jump_jtype||jump_branch;

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

wire finish_1,wr_finish,rd_finish,valid_ifu,valid_idu;

ysyx_23060240_IDU IDU(
    .valid_ifu(valid_ifu),
    .finish_1(finish_1),
    .valid_idu(valid_idu),
    .inst(inst),
    .alu_a_sel(alu_a_sel),
    .alu_b_sel(alu_b_sel),
    .w_en(w_en),
    .alu_func(alu_func),
    .jump_jtype(jump_jtype),
    .jump_ecall(jump_ecall),
    .jump_mret(jump_mret),
    .w_sel(w_sel),
    .branch_type(branch_type),
    .memory_rd_ctrl(memory_rd_ctrl),
    .memory_wr_ctrl(memory_wr_ctrl),
    .mem_rd_en(mem_rd_en),
    .mem_wr_en(mem_wr_en),
    .jal_signal(jal),
    .jalr_signal(jalr),
    .w_csr_en(w_csr_en),
    .r_csr_en(r_csr_en)
);

ysyx_23060240_GPR GPR(
    .finish(finish_1||rd_finish),
    .clk(clock),
    .w_data(w_data),
    .r_rs1_addr(inst[19:15]),
    .r_rs2_addr(inst[24:20]),
    .w_rd_addr(inst[11:7]),
    .w_en(w_en),
    .rs1_data(rs1_data),
    .rs2_data(rs2_data)
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

reg [7:0] uart_reg;
/*--------------ifu wire--------------*/
wire [31:0] ifu_araddr;
wire ifu_arvalid;
wire ifu_arready;
wire [3:0] ifu_arid;
wire [7:0] ifu_arlen;
wire [2:0] ifu_arsize;
wire [1:0] ifu_arburst;

wire ifu_rready;
wire ifu_rvalid;
wire [31:0] ifu_rdata;
wire [1:0] ifu_rresp;
wire ifu_rlast;
wire [3:0] ifu_rid;
wire [31:0] ifu_awaddr;
wire ifu_awvalid;
wire ifu_awready;
wire [3:0] ifu_awid;
wire [7:0] ifu_awlen;
wire [2:0] ifu_awsize;
wire [1:0] ifu_awburst;
wire [31:0] ifu_wdata;
wire ifu_wvalid;
wire ifu_wready; 
wire [3:0] ifu_wstrb;
wire ifu_wlast;
wire ifu_bready;
wire ifu_bvalid;
wire [1:0] ifu_bresp;
wire [3:0] ifu_bid;
/*--------------lsu wire--------------*/
wire [31:0] lsu_araddr;
wire lsu_arvalid;
wire lsu_arready;
wire [3:0] lsu_arid;
wire [7:0] lsu_arlen;
wire [2:0] lsu_arsize;
wire [1:0] lsu_arburst;
wire lsu_rready;
wire lsu_rvalid;
wire [31:0] lsu_rdata;
wire [1:0] lsu_rresp;
wire lsu_rlast;
wire [3:0] lsu_rid;
wire [31:0] lsu_awaddr;
wire lsu_awvalid;
wire lsu_awready;
wire [3:0] lsu_awid;
wire [7:0] lsu_awlen;
wire [2:0] lsu_awsize;
wire [1:0] lsu_awburst;
wire [31:0] lsu_wdata;
wire lsu_wvalid;
wire lsu_wready; 
wire [3:0] lsu_wstrb;
wire lsu_wlast;
wire lsu_bready;
wire lsu_bvalid;
wire [1:0] lsu_bresp;
wire [3:0] lsu_bid;

/*--------------saxi wire--------------*/
wire [31:0] saxi_araddr;
wire saxi_arvalid;
wire saxi_arready;
wire [3:0] saxi_arid;
wire [7:0] saxi_arlen;
wire [2:0] saxi_arsize;
wire [1:0] saxi_arburst;
wire saxi_rready;
wire saxi_rvalid;
wire [31:0] saxi_rdata;
wire [1:0] saxi_rresp;
wire saxi_rlast;
wire [3:0] saxi_rid;
wire [31:0] saxi_awaddr;
wire saxi_awvalid;
wire saxi_awready;
wire [3:0] saxi_awid;
wire [7:0] saxi_awlen;
wire [2:0] saxi_awsize;
wire [1:0] saxi_awburst;
wire [31:0] saxi_wdata;
wire saxi_wvalid;
wire saxi_wready; 
wire [3:0] saxi_wstrb;
wire saxi_wlast;
wire saxi_bready;
wire saxi_bvalid;
wire [1:0] saxi_bresp;
wire [3:0] saxi_bid;
/*--------------uart wire--------------*/
wire [31:0] uart_araddr;
wire uart_arvalid;
wire uart_arready;
wire [3:0] uart_arid;
wire [7:0] uart_arlen;
wire [2:0] uart_arsize;
wire [1:0] uart_arburst;

wire uart_rready;
wire uart_rvalid;
wire [31:0] uart_rdata;
wire [1:0] uart_rresp;
wire uart_rlast;
wire [3:0] uart_rid;
wire [31:0] uart_awaddr;
wire uart_awvalid;
wire uart_awready;
wire [3:0] uart_awid;
wire [7:0] uart_awlen;
wire [2:0] uart_awsize;
wire [1:0] uart_awburst;
wire [31:0] uart_wdata;
wire uart_wvalid;
wire uart_wready; 
wire [3:0] uart_wstrb;
wire uart_wlast;
wire uart_bready;
wire uart_bvalid;
wire [1:0] uart_bresp;
wire [3:0] uart_bid;
/*--------------clint wire--------------*/
wire [31:0] clint_araddr;
wire clint_arvalid;
wire clint_arready;
wire [3:0] clint_arid;
wire [7:0] clint_arlen;
wire [2:0] clint_arsize;
wire [1:0] clint_arburst;
wire clint_rready;
wire clint_rvalid;
wire [31:0] clint_rdata;
wire [1:0] clint_rresp;
wire clint_rlast;
wire [3:0] clint_rid;
wire [31:0] clint_awaddr;
wire clint_awvalid;
wire clint_awready;
wire [3:0] clint_awid;
wire [7:0] clint_awlen;
wire [2:0] clint_awsize;
wire [1:0] clint_awburst;
wire [31:0] clint_wdata;
wire clint_wvalid;
wire clint_wready; 
wire [3:0] clint_wstrb;
wire clint_wlast;
wire clint_bready;
wire clint_bvalid;
wire [1:0] clint_bresp;
wire [3:0] clint_bid;

ysyx_23060240_LSU LSU(    
    .clk(clock),
    .rst(reset),
    .mem_wr_en(mem_wr_en&&valid_ifu),
    .memory_rd_ctrl(memory_rd_ctrl),
    .memory_wr_ctrl(memory_wr_ctrl),
    .mem_wr_data(rs2_data),
    .mem_rd_addr(alu_out),
    .mem_wr_addr(alu_out),
    .mem_rd_data(mem_rd_data),

    .valid_idu(valid_idu),
    .rd_finish(rd_finish),
    .wr_finish(wr_finish),

    .lsu_araddr(lsu_araddr),
    .lsu_arvalid(lsu_arvalid),   
    .lsu_arready(lsu_arready),
    .lsu_arid(lsu_arid),
    .lsu_arlen(lsu_arlen),
    .lsu_arsize(lsu_arsize),
    .lsu_arburst(lsu_arburst),

    .lsu_rready(lsu_rready),
    .lsu_rvalid(lsu_rvalid),
    .lsu_rdata(lsu_rdata),
    .lsu_rresp(lsu_rresp),
    .lsu_rlast(lsu_rlast),
    .lsu_rid(lsu_rid),

    .lsu_awaddr(lsu_awaddr),
    .lsu_awvalid(lsu_awvalid),
    .lsu_awready(lsu_awready),
    .lsu_awid(lsu_awid),
    .lsu_awlen(lsu_awlen),
    .lsu_awsize(lsu_awsize),
    .lsu_awburst(lsu_awburst),

    .lsu_wdata(lsu_wdata),
    .lsu_wvalid(lsu_wvalid),
    .lsu_wready(lsu_wready), 
    .lsu_wstrb(lsu_wstrb),
    .lsu_wlast(lsu_wlast),

    .lsu_bready(lsu_bready),
    .lsu_bvalid(lsu_bvalid),
    .lsu_bresp(lsu_bresp),
    .lsu_bid(lsu_bid)

);


ysyx_23060240_IFU IFU(
    .clk(clock),
    .rst(reset),    

    .jump_en(jump_jtype||jump_branch||jump_ecall||jump_mret),
    .jump_pc(jump_pc),    
    .finish(finish_1||rd_finish||wr_finish),
    .valid_ifu(valid_ifu),
    .pc(pc),
    .inst(inst),
    .difftest(difftest),
    .itrace_reg(itrace_reg),

    .ifu_araddr(ifu_araddr),
    .ifu_arvalid(ifu_arvalid),   
    .ifu_arready(ifu_arready),
    .ifu_arid(ifu_arid),
    .ifu_arlen(ifu_arlen),
    .ifu_arsize(ifu_arsize),
    .ifu_arburst(ifu_arburst),

    .ifu_rready(ifu_rready),
    .ifu_rvalid(ifu_rvalid),
    .ifu_rdata(ifu_rdata),
    .ifu_rresp(ifu_rresp),
    .ifu_rlast(ifu_rlast),
    .ifu_rid(ifu_rid),

    .ifu_awaddr(ifu_awaddr),
    .ifu_awvalid(ifu_awvalid),
    .ifu_awready(ifu_awready),
    .ifu_awid(ifu_awid),
    .ifu_awlen(ifu_awlen),
    .ifu_awsize(ifu_awsize),
    .ifu_awburst(ifu_awburst),

    .ifu_wdata(ifu_wdata),
    .ifu_wvalid(ifu_wvalid),
    .ifu_wready(ifu_wready), 
    .ifu_wstrb(ifu_wstrb),
    .ifu_wlast(ifu_wlast),

    .ifu_bready(ifu_bready),
    .ifu_bvalid(ifu_bvalid),
    .ifu_bresp(ifu_bresp),
    .ifu_bid(ifu_bid)
);

ysyx_23060240_XBAR XBAR(
    .clk(clock),
    .rst(reset),

    .ifu_araddr(ifu_araddr),
    .ifu_arvalid(ifu_arvalid),   
    .ifu_arready(ifu_arready),
    .ifu_arid(ifu_arid),
    .ifu_arlen(ifu_arlen),
    .ifu_arsize(ifu_arsize),
    .ifu_arburst(ifu_arburst),
    .ifu_rready(ifu_rready),
    .ifu_rvalid(ifu_rvalid),
    .ifu_rdata(ifu_rdata),
    .ifu_rresp(ifu_rresp),
    .ifu_rlast(ifu_rlast),
    .ifu_rid(ifu_rid),
    .ifu_awaddr(ifu_awaddr),
    .ifu_awvalid(ifu_awvalid),
    .ifu_awready(ifu_awready),
    .ifu_awid(ifu_awid),
    .ifu_awlen(ifu_awlen),
    .ifu_awsize(ifu_awsize),
    .ifu_awburst(ifu_awburst),
    .ifu_wdata(ifu_wdata),
    .ifu_wvalid(ifu_wvalid),
    .ifu_wready(ifu_wready), 
    .ifu_wstrb(ifu_wstrb),
    .ifu_wlast(ifu_wlast),
    .ifu_bready(ifu_bready),
    .ifu_bvalid(ifu_bvalid),
    .ifu_bresp(ifu_bresp),
    .ifu_bid(ifu_bid),

    .lsu_araddr(lsu_araddr),
    .lsu_arvalid(lsu_arvalid),   
    .lsu_arready(lsu_arready),
    .lsu_arid(lsu_arid),
    .lsu_arlen(lsu_arlen),
    .lsu_arsize(lsu_arsize),
    .lsu_arburst(lsu_arburst),
    .lsu_rready(lsu_rready),
    .lsu_rvalid(lsu_rvalid),
    .lsu_rdata(lsu_rdata),
    .lsu_rresp(lsu_rresp),
    .lsu_rlast(lsu_rlast),
    .lsu_rid(lsu_rid),
    .lsu_awaddr(lsu_awaddr),
    .lsu_awvalid(lsu_awvalid),
    .lsu_awready(lsu_awready),
    .lsu_awid(lsu_awid),
    .lsu_awlen(lsu_awlen),
    .lsu_awsize(lsu_awsize),
    .lsu_awburst(lsu_awburst),
    .lsu_wdata(lsu_wdata),
    .lsu_wvalid(lsu_wvalid),
    .lsu_wready(lsu_wready), 
    .lsu_wstrb(lsu_wstrb),
    .lsu_wlast(lsu_wlast),
    .lsu_bready(lsu_bready),
    .lsu_bvalid(lsu_bvalid),
    .lsu_bresp(lsu_bresp),
    .lsu_bid(lsu_bid),


    .io_master_araddr(io_master_araddr),
    .io_master_arvalid(io_master_arvalid),   
    .io_master_arready(io_master_arready),
/*     .io_master_arid(io_master_arid),
    .io_master_arlen(io_master_arlen),
    .io_master_arsize(io_master_arsize),
    .io_master_arburst(io_master_arburst), */
    .io_master_rready(io_master_rready),
    .io_master_rvalid(io_master_rvalid),
    .io_master_rdata(io_master_rdata),
/*     .io_master_rresp(io_master_rresp),
    .io_master_rlast(io_master_rlast),
    .io_master_rid(io_master_rid), */
    .io_master_awaddr(io_master_awaddr),
    .io_master_awvalid(io_master_awvalid),
    .io_master_awready(io_master_awready),
/*     .io_master_awid(io_master_awid),
    .io_master_awlen(io_master_awlen),
    .io_master_awsize(io_master_awsize),
    .io_master_awburst(io_master_awburst), */
    .io_master_wdata(io_master_wdata),
    .io_master_wvalid(io_master_wvalid),
    .io_master_wready(io_master_wready), 
/*     .io_master_wstrb(io_master_wstrb),
    .io_master_wlast(io_master_wlast), */
    .io_master_bready(io_master_bready),
    .io_master_bvalid(io_master_bvalid),
/*     .io_master_bresp(io_master_bresp),
    .io_master_bid(io_master_bid), */

    .clint_araddr(clint_araddr),
    .clint_arvalid(clint_arvalid),   
    .clint_arready(clint_arready),
    .clint_arid(clint_arid),
    .clint_arlen(clint_arlen),
    .clint_arsize(clint_arsize),
    .clint_arburst(clint_arburst),
    .clint_rready(clint_rready),
    .clint_rvalid(clint_rvalid),
    .clint_rdata(clint_rdata),
    .clint_rresp(clint_rresp),
    .clint_rlast(clint_rlast),
    .clint_rid(clint_rid),
    .clint_awaddr(clint_awaddr),
    .clint_awvalid(clint_awvalid),
    .clint_awready(clint_awready),
    .clint_awid(clint_awid),
    .clint_awlen(clint_awlen),
    .clint_awsize(clint_awsize),
    .clint_awburst(clint_awburst),
    .clint_wdata(clint_wdata),
    .clint_wvalid(clint_wvalid),
    .clint_wready(clint_wready), 
    .clint_wstrb(clint_wstrb),
    .clint_wlast(clint_wlast),
    .clint_bready(clint_bready),
    .clint_bvalid(clint_bvalid),
    .clint_bresp(clint_bresp),
    .clint_bid(clint_bid)
);

ysyx_23060240_UART UART(
    .clk(clock),
    .rst(reset),

    .uart_araddr(uart_araddr),
    .uart_arvalid(uart_arvalid),   
    .uart_arready(uart_arready),
    .uart_arid(uart_arid),
    .uart_arlen(uart_arlen),
    .uart_arsize(uart_arsize),
    .uart_arburst(uart_arburst),

    .uart_rready(uart_rready),
    .uart_rvalid(uart_rvalid),
    .uart_rdata(uart_rdata),
    .uart_rresp(uart_rresp),
    .uart_rlast(uart_rlast),
    .uart_rid(uart_rid),

    .uart_awaddr(uart_awaddr),
    .uart_awvalid(uart_awvalid),
    .uart_awready(uart_awready),
    .uart_awid(uart_awid),
    .uart_awlen(uart_awlen),
    .uart_awsize(uart_awsize),
    .uart_awburst(uart_awburst),

    .uart_wdata(uart_wdata),
    .uart_wvalid(uart_wvalid),
    .uart_wready(uart_wready), 
    .uart_wstrb(uart_wstrb),
    .uart_wlast(uart_wlast),

    .uart_bready(uart_bready),
    .uart_bvalid(uart_bvalid),
    .uart_bresp(uart_bresp),
    .uart_bid(uart_bid),
    .uart_reg(uart_reg)
);

ysyx_23060240_CLINT CLINT(
    .clk(clock),
    .rst(reset),

    .clint_araddr(clint_araddr),
    .clint_arvalid(clint_arvalid),   
    .clint_arready(clint_arready),
    .clint_arid(clint_arid),
    .clint_arlen(clint_arlen),
    .clint_arsize(clint_arsize),
    .clint_arburst(clint_arburst),

    .clint_rready(clint_rready),.asic.cpu.cpu.alu_func
                    /home/wink/ysyx-workbench/npc/vsrc/MuxKeyInternal.v:26:3:      Example path: ALWAYS

    .clint_rvalid(clint_rvalid),
    .clint_rdata(clint_rdata),
    .clint_rresp(clint_rresp),
    .clint_rlast(clint_rlast),
    .clint_rid(clint_rid),

    .clint_awaddr(clint_awaddr),
    .clint_awvalid(clint_awvalid),
    .clint_awready(clint_awready),
    .clint_awid(clint_awid),
    .clint_awlen(clint_awlen),
    .clint_awsize(clint_awsize),
    .clint_awburst(clint_awburst),

    .clint_wdata(clint_wdata),
    .clint_wvalid(clint_wvalid),
    .clint_wready(clint_wready), 
    .clint_wstrb(clint_wstrb),
    .clint_wlast(clint_wlast),

    .clint_bready(clint_bready),
    .clint_bvalid(clint_bvalid),
    .clint_bresp(clint_bresp),
    .clint_bid(clint_bid)
);

ysyx_23060240_SRAM SRAM(
    .clk(clock),
    .rst(reset),
    .wmask(memory_wr_ctrl),

    .saxi_araddr(saxi_araddr),
    .saxi_arvalid(saxi_arvalid),   
    .saxi_arready(saxi_arready),
    .saxi_arid(saxi_arid),
    .saxi_arlen(saxi_arlen),
    .saxi_arsize(saxi_arsize),
    .saxi_arburst(saxi_arburst),

    .saxi_rready(saxi_rready),
    .saxi_rvalid(saxi_rvalid),
    .saxi_rdata(saxi_rdata),
    .saxi_rresp(saxi_rresp),
    .saxi_rlast(saxi_rlast),
    .saxi_rid(saxi_rid),

    .saxi_awaddr(saxi_awaddr),
    .saxi_awvalid(saxi_awvalid),
    .saxi_awready(saxi_awready),
    .saxi_awid(saxi_awid),
    .saxi_awlen(saxi_awlen),
    .saxi_awsize(saxi_awsize),
    .saxi_awburst(saxi_awburst),

    .saxi_wdata(saxi_wdata),
    .saxi_wvalid(saxi_wvalid),
    .saxi_wready(saxi_wready), 
    .saxi_wstrb(saxi_wstrb),
    .saxi_wlast(saxi_wlast),

    .saxi_bready(saxi_bready),
    .saxi_bvalid(saxi_bvalid),
    .saxi_bresp(saxi_bresp),
    .saxi_bid(saxi_bid)
);

ysyx_23060240_CSR CSR(
    .finish(finish_1||rd_finish),
    .pc(pc),
    .clk(clock),
    .r_csr_addr(inst[31:20]),
    .w_csr_addr(inst[31:20]),
    .w_csr_data(alu_out),
    .w_csr_en(w_csr_en),
    .r_csr_en(r_csr_en),
    .jump_mret(jump_mret),
    .jump_ecall(jump_ecall),
    .r_csr_data(r_csr_data)
);



//ftrace 手动注释关闭 
/* import "DPI-C" function void trace_func_call(input int pc, input int alu_out,input bit tail);
import "DPI-C" function void trace_func_ret(input int pc);
//import "DPI-C" function void trace_func_ret(input int pc);

always@(posedge clock)begin
    if(jal&&(finish_1||rd_finish||wr_finish))begin
        if(inst[11:7]==1)begin
            trace_func_call(pc,jump_pc,1'b0);
        end
    end
end

always@(posedge clock)begin
    if(jalr&&(finish_1||rd_finish||wr_finish))begin
        if(inst==32'h00008067)begin
            trace_func_ret(pc);
        end
        else if(inst[11:7]==1)begin
            trace_func_call(pc,jump_pc,1'b0);
        end
        else if((inst[11:7]==0)&&(imm_out==32'b0))begin//识别到尾调用，goto...
            trace_func_call(pc,jump_pc,1'b1);
        end
    end
end */

endmodule