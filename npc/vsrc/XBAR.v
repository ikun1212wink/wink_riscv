module ysyx_23060240_XBAR(
    input clk,
    input rst,
/* --------------IFU MASTER----------------- */
    //read address channel
    input [31:0] ifu_araddr,
    input ifu_arvalid,   
    output reg ifu_arready,

    input [3:0] ifu_arid,
    input [7:0] ifu_arlen,
    input [2:0] ifu_arsize,
    input [1:0] ifu_arburst, 
    //read data channel
    input ifu_rready,
    output reg ifu_rvalid,
    output reg [31:0] ifu_rdata,

    output [1:0] ifu_rresp,
    output ifu_rlast,
    output [3:0] ifu_rid,
    //write address channel
    input [31:0] ifu_awaddr,
    input ifu_awvalid,
    output reg ifu_awready,

    input [3:0] ifu_awid,
    input [7:0] ifu_awlen,
    input [2:0] ifu_awsize,
    input [1:0] ifu_awburst,
    //write data channel
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    output reg ifu_wready,  

    input [3:0] ifu_wstrb,
    input ifu_wlast,
    //write response channel
    input ifu_bready,
    output reg ifu_bvalid,

    output [1:0] ifu_bresp,
    output [3:0] ifu_bid,
/* --------------LSU MASTER----------------- */
    //read address channel
    input [31:0] lsu_araddr,
    input lsu_arvalid,   
    output reg lsu_arready,

    input [3:0] lsu_arid,
    input [7:0] lsu_arlen,
    input [2:0] lsu_arsize,
    input [1:0] lsu_arburst, 
    //read data channel
    input lsu_rready,
    output reg lsu_rvalid,
    output reg [31:0] lsu_rdata,

    output [1:0] lsu_rresp,
    output lsu_rlast,
    output [3:0] lsu_rid,
    //write address channel
    input [31:0] lsu_awaddr,
    input lsu_awvalid,
    output reg lsu_awready,

    input [3:0] lsu_awid,
    input [7:0] lsu_awlen,
    input [2:0] lsu_awsize,
    input [1:0] lsu_awburst,
    //write data channel
    input [31:0] lsu_wdata,
    input lsu_wvalid,
    output reg lsu_wready,

    input [3:0] lsu_wstrb,
    input lsu_wlast,    
    //write response channel
    input lsu_bready,
    output reg lsu_bvalid,

    output [1:0] lsu_bresp,
    output [3:0] lsu_bid,

/* --------------IO_MASTER SLAVE----------------- */
    output reg [31:0] io_master_araddr,
    output reg io_master_arvalid,   
    input io_master_arready,

/*     output [3:0] io_master_arid,
    output [7:0] io_master_arlen,
    output [2:0] io_master_arsize,
    output [1:0] io_master_arburst, */
    //read data channel
    output reg io_master_rready,
    input io_master_rvalid,
    input [31:0] io_master_rdata,

/*     input [1:0] io_master_rresp,
    input io_master_rlast,
    input [3:0] io_master_rid, */
    //write address channel
    output [31:0] io_master_awaddr,
    output io_master_awvalid,
    input io_master_awready,

/*     output [3:0] io_master_awid,
    output [7:0] io_master_awlen,
    output [2:0] io_master_awsize,
    output [1:0] io_master_awburst, */
    //write data channel
    output [31:0] io_master_wdata,
    output io_master_wvalid,
    input io_master_wready,  

/*     output [3:0] io_master_wstrb,
    output io_master_wlast,   */
    //write response channel
    output io_master_bready,
    input io_master_bvalid,

/*     input [1:0] io_master_bresp,
    input [3:0] io_master_bid, */

/* --------------CLINT SLAVE----------------- */
    output reg [31:0] clint_araddr,
    output reg clint_arvalid,   
    input clint_arready,

    output [3:0] clint_arid,
    output [7:0] clint_arlen,
    output [2:0] clint_arsize,
    output [1:0] clint_arburst,
    //read data channel
    output reg clint_rready,
    input clint_rvalid,
    input [31:0] clint_rdata,

    input [1:0] clint_rresp,
    input clint_rlast,
    input [3:0] clint_rid,
    //write address channel
    output [31:0] clint_awaddr,
    output clint_awvalid,
    input clint_awready, 

    output [3:0] clint_awid,
    output [7:0] clint_awlen,
    output [2:0] clint_awsize,
    output [1:0] clint_awburst,
    //write data channel
    output [31:0] clint_wdata,
    output clint_wvalid,
    input clint_wready, 

    output [3:0] clint_wstrb,
    output clint_wlast, 
     //write response channel
    output clint_bready,
    input clint_bvalid,

    input [1:0] clint_bresp,
    input [3:0] clint_bid  
);
reg arb_ready;
reg [3:0] state;
reg wait_read;
always@(posedge clk)begin
    if(rst)begin
        arb_ready<=1'b1;
        state<=0;//默认状态，无通信操作
        wait_read<=0;
    end
    else begin
        if(arb_ready&&ifu_arvalid)begin//ifu通信成功
            arb_ready<=1'b0;
            state<=1;
        end
        else if(arb_ready&&lsu_arvalid)begin//lsu读通信成功
            if((lsu_araddr==32'ha0000048)||(lsu_araddr==32'ha000005c))begin
                arb_ready<=1'b0;
                state<=7;
            end
            else begin
                arb_ready<=1'b0;
                state<=2;     
            end
        end
        else if(arb_ready&&(lsu_awvalid||lsu_wvalid))begin//lsu写通信成功
/*             if(lsu_awaddr==32'ha00003f8)begin
                arb_ready<=1'b0;
                state<=6;
            end
            else begin */
                arb_ready<=1'b0;
                state<=3;
       //     end
        end
        else if(lsu_rvalid&&lsu_rready)begin//等待lsu从机读操作完成
            if((lsu_araddr==32'ha0000048)||(lsu_araddr==32'ha000005c))begin
                wait_read<=1;
                state<=8;  
            end
            else begin
                wait_read<=1;
                state<=4;      
            end
        end
        else if(ifu_rvalid&&ifu_rready)begin//等待lsu从机读操作完成
            wait_read<=1;
            state<=5;
        end
        else if(lsu_bready&&lsu_bvalid)begin//从机写操作完成,断开通信
            state<=0;
            arb_ready<=1'b1;
        end
        else if(wait_read)begin//从机操作完成，断开通信
            arb_ready<=1'b1;
            state<=0;
            wait_read<=0;
        end
        else begin
            arb_ready<=arb_ready;
            state<=state;
        end
    end
end

/* verilator lint_off LATCH */ 
always@(*)begin
    case(state)
        4'd0:begin
            io_master_arvalid=1'b0;
            io_master_rready=1'b0;
            io_master_wdata=32'h00000000;
            io_master_wvalid=1'b0;
            io_master_bready=1'b0;
            ifu_arready=1'b0;
            lsu_arready=1'b0;
            ifu_rvalid=1'b0;
            lsu_rvalid=1'b0;
            ifu_awready=1'b0;
            lsu_awready=1'b0;
            ifu_wready=1'b0;
            lsu_wready=1'b0;
            ifu_bvalid=1'b0;
            lsu_bvalid=1'b0;
        end
        4'd1:begin//ifu*=io_master_arready;
            io_master_rready=ifu_rready;
            ifu_rvalid=io_master_rvalid;
          //  ifu_rdata=io_master_rdata;
        end
        4'd2:begin//lsu读通信成功&写通道暂时不管
            io_master_araddr=lsu_araddr;
          //  lsu_rdata=io_master_rdata;
            io_master_arvalid=lsu_arvalid;
            lsu_arready=io_master_arready;
            io_master_rready=lsu_rready;
            lsu_rvalid=io_master_rvalid; 
        end           
        4'd3:begin//lsu写通信成功&读通道暂时不管
            io_master_awaddr=lsu_awaddr;
            io_master_wdata=lsu_wdata;
            io_master_awvalid=lsu_awvalid;
            lsu_awready=io_master_awready;
            io_master_wvalid=lsu_wvalid;
            lsu_wready=io_master_wready;
            io_master_bready=lsu_bready;
            lsu_bvalid=io_master_bvalid;
        end
        4'd4:begin//切换读出数据到lsu
            lsu_rdata=io_master_rdata;
        end
        4'd5:begin
            ifu_rdata=io_master_rdata;//切换读出数据到ifu
        end
/*         4'd6:begin//从机切换至UART 读通道暂时不管
            uart_awaddr=lsu_awaddr;
            uart_wdata=lsu_wdata;
            uart_awvalid=lsu_awvalid;
            lsu_awready=uart_awready;
            uart_wvalid=lsu_wvalid;
            lsu_wready=uart_wready;
            uart_bready=lsu_bready;
            lsu_bvalid=uart_bvalid;
        end */
        4'd7:begin//从机切换至CLINT 写通道暂时不管
            clint_araddr=lsu_araddr;
          //  lsu_rdata=io_master_rdata;
            clint_arvalid=lsu_arvalid;
            lsu_arready=clint_arready;
            clint_rready=lsu_rready;
            lsu_rvalid=clint_rvalid; 
        end
        4'd8:begin
            lsu_rdata=clint_rdata;
        end
        default:begin end
    endcase
end



endmodule