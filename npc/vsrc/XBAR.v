module ysyx_23060240_XBAR(
    input clk,
    input rst,
    input [2:0] awsize,
    input [2:0] arsize,
/* --------------IFU MASTER----------------- */
    //read address channel
    input [31:0] ifu_araddr,
    input ifu_arvalid,   
    output ifu_arready,
    //read data channel
    input ifu_rready,
    output ifu_rvalid,
    output [31:0] ifu_rdata,
    //write address channel
    input [31:0] ifu_awaddr,
    input ifu_awvalid,
    output ifu_awready,
    //write data channel
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    output ifu_wready,    
    //write response channel
    input ifu_bready,
    output ifu_bvalid,

/* --------------LSU MASTER----------------- */
    //read address channel
    input [31:0] lsu_araddr,
    input lsu_arvalid,   
    output lsu_arready,
    //read data channel
    input lsu_rready,
    output lsu_rvalid,
    output [31:0] lsu_rdata,
    //write address channel
    input [31:0] lsu_awaddr,
    input lsu_awvalid,
    output lsu_awready,
    //write data channel
    input [31:0] lsu_wdata,
    input lsu_wvalid,
    output lsu_wready,    
    //write response channel
    input lsu_bready,
    output lsu_bvalid,

/* --------------SRAM SLAVE----------------- */
/*     //read address channel
    output [31:0] saxi_araddr,
    output saxi_arvalid,   
    input saxi_arready,
    //read data channel
    output saxi_rready,
    input saxi_rvalid,
    input [31:0] saxi_rdata,
    //write address channel
    output [31:0] saxi_awaddr,
    output saxi_awvalid,
    input saxi_awready,
    //write data channel
    output [31:0] saxi_wdata,
    output saxi_wvalid,
    input saxi_wready,    
    //write response channel
    output saxi_bready,
    input saxi_bvalid, */

/* --------------UART SLAVE----------------- */
/*     output [31:0] uart_araddr,
    output uart_arvalid,   
    input uart_arready,

    //read data channel
    output uart_rready,
    input uart_rvalid,
    input [31:0] uart_rdata,

    //write address channel
    output [31:0] uart_awaddr,
    output uart_awvalid,
    input uart_awready, 

    //write data channel
    output [31:0] uart_wdata,
    output uart_wvalid,
    input uart_wready, 

     //write response channel
    output uart_bready,
    input uart_bvalid, */
/* --------------IO_MASTER------------------- */
    //read address channel
    output [31:0] io_master_araddr,
    output io_master_arvalid,   
    input io_master_arready,

    output [3:0]  io_master_arid,  
    output [7:0]  io_master_arlen, 
    output [2:0]  io_master_arsize,
    output [1:0]  io_master_arburst,


    //read data channel
    output io_master_rready,
    input io_master_rvalid,
    input [31:0] io_master_rdata,

    input  [1:0]  io_master_rresp, 
    input         io_master_rlast, 
    input  [3:0]  io_master_rid,   

    //write address channel
    output [31:0] io_master_awaddr,
    output io_master_awvalid,
    input io_master_awready,

    output [3:0]  io_master_awid,  
    output [7:0]  io_master_awlen, 
    output [2:0]  io_master_awsize,
    output [1:0]  io_master_awburst,

    //write data channel
    output [31:0] io_master_wdata,
    output io_master_wvalid,
    input io_master_wready,

    output [3:0]  io_master_wstrb,
    output        io_master_wlast, 

    //write response channel
    output io_master_bready,
    input io_master_bvalid,
    input  [1:0]  io_master_bresp, 
    input  [3:0]  io_master_bid,   

/* --------------CLINT SLAVE----------------- */
    output [31:0] clint_araddr,
    output clint_arvalid,   
    input clint_arready,

    //read data channel
    output clint_rready,
    input clint_rvalid,
    input [31:0] clint_rdata,

    //write address channel
    output [31:0] clint_awaddr,
    output clint_awvalid,
    input clint_awready, 

    //write data channel
    output [31:0] clint_wdata,
    output clint_wvalid,
    input clint_wready, 

     //write response channel
    output clint_bready,
    input clint_bvalid    
);
//仲裁器应该有三种状态 lsu读状态 ifu读状态 默认状态
//状态机参数
localparam IDLE = 0;//默认
localparam IFU_READ = 1;//ifu读
localparam LSU_READ = 2;//lsu读

reg [1:0] current_state,next_state;
//第一段 更新当前的状态
always@(posedge clk)begin
    if(rst)begin
        current_state<=IDLE;
    end
    else begin
        current_state<=next_state;
    end
end
//第二段 判断状态转移条件，设置下一个状态
always@(*)begin
    next_state=0;
    case(current_state)
        IDLE://当前默认状态，判断下一个状态
            if(ifu_arvalid)begin
                next_state=IFU_READ;
            end
            else if(lsu_arvalid)begin
                next_state=LSU_READ;
            end
            else begin
                next_state=IDLE;
            end
        IFU_READ://当前IFU读状态，判断下一个状态
            if(ifu_rvalid && ifu_rready)begin
                next_state=IDLE;
            end
            else begin
                next_state=IFU_READ;
            end
        LSU_READ://当前LSU读状态，判断下一个状态
            if(lsu_rvalid && lsu_rready)begin
                next_state=IDLE;
            end
            else begin
                next_state=LSU_READ;
            end
        default:
            next_state=IDLE;
    endcase
end
//设备地址判断
wire is_clint;
assign is_clint=((lsu_araddr==32'ha0000048)||(lsu_araddr==32'ha000005c));
//首先写通道只有LSU会用到，所以直接和LSU连接就好了，不用进行状态机的状态转移
assign io_master_awid = 4'h0;  
assign io_master_awlen = 8'h0; 
//assign io_master_awsize = 3'h0;
assign io_master_awsize = awsize;
assign io_master_awburst = 2'h0;

assign io_master_wstrb = 4'h0;
assign io_master_wlast = 1'h0;

assign io_master_awaddr  =  lsu_awaddr ;
assign io_master_awvalid = lsu_awvalid ;
assign lsu_awready  =  io_master_awready;
assign io_master_wdata   =  lsu_wdata ;
assign io_master_wvalid  = lsu_wvalid ;
assign lsu_wready   = io_master_wready;
assign io_master_bready  = lsu_bready ;
assign lsu_bvalid   = io_master_bvalid;
//读地址通道仲裁
assign io_master_arid=4'h0; 
assign io_master_arlen=8'h0; 
//assign io_master_arsize=3'h0;
assign io_master_arsize = (current_state == LSU_READ) ? arsize : 3'b010;
assign io_master_arburst=2'h0;

assign io_master_arvalid = (current_state == IFU_READ) ? ifu_arvalid :
                      ((current_state == LSU_READ)&&(~is_clint)) ? lsu_arvalid :
                      (current_state == IDLE) ? 1'h0 : 1'h0;
assign clint_arvalid = ((current_state == LSU_READ)&&(is_clint)) ? lsu_arvalid : 1'h0;


assign ifu_arready = (current_state == IFU_READ) ? io_master_arready : 1'h0;
assign lsu_arready = ((current_state == LSU_READ)&&(~is_clint)) ? io_master_arready :
                     ((current_state == LSU_READ)&&(is_clint)) ? clint_arready : 1'h0;

assign io_master_araddr = (current_state == IFU_READ) ? ifu_araddr :
                     ((current_state == LSU_READ)&&(~is_clint)) ? lsu_araddr :
                     (current_state == IDLE) ? 32'h0 : 32'h0;
assign clint_araddr = ((current_state == LSU_READ)&&(is_clint)) ? lsu_araddr : 32'h0;

//读数据通道仲裁
assign ifu_rvalid = (current_state == IFU_READ) ? io_master_rvalid : 1'h0;
assign lsu_rvalid = ((current_state == LSU_READ)&&(~is_clint)) ? io_master_rvalid : 
                     ((current_state == LSU_READ)&&(is_clint)) ? clint_rvalid : 1'h0;

assign io_master_rready = (current_state == IFU_READ) ? ifu_rready :
                     ((current_state == LSU_READ)&&(~is_clint)) ? lsu_rready :
                     (current_state == IDLE) ? 1'h0 : 1'h0; 
assign clint_rready = ((current_state == LSU_READ)&&(is_clint)) ? lsu_rready : 1'h0;

assign ifu_rdata = (current_state == IFU_READ) ? io_master_rdata : 32'h0;
assign lsu_rdata = ((current_state == LSU_READ)&&(~is_clint)) ? io_master_rdata : 
                   ((current_state == LSU_READ)&&(is_clint)) ? clint_rdata : 32'h0;

endmodule