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

/* --------------SRAM SLAVE----------------- */
    //read address channel
    output reg [31:0] saxi_araddr,
    output reg saxi_arvalid,   
    input saxi_arready,

    output [3:0] saxi_arid,
    output [7:0] saxi_arlen,
    output [2:0] saxi_arsize,
    output [1:0] saxi_arburst,
    //read data channel
    output reg saxi_rready,
    input saxi_rvalid,
    input [31:0] saxi_rdata,

    input [1:0] saxi_rresp,
    input saxi_rlast,
    input [3:0] saxi_rid,
    //write address channel
    output [31:0] saxi_awaddr,
    output saxi_awvalid,
    input saxi_awready,

    output [3:0] saxi_awid,
    output [7:0] saxi_awlen,
    output [2:0] saxi_awsize,
    output [1:0] saxi_awburst,
    //write data channel
    output [31:0] saxi_wdata,
    output saxi_wvalid,
    input saxi_wready,  

    output [3:0] saxi_wstrb,
    output saxi_wlast,  
    //write response channel
    output saxi_bready,
    input saxi_bvalid,

    input [1:0] saxi_bresp,
    input [3:0] saxi_bid,

/* --------------UART SLAVE----------------- */
    output reg [31:0] uart_araddr,
    output reg uart_arvalid,   
    input uart_arready,

    output [3:0] uart_arid,
    output [7:0] uart_arlen,
    output [2:0] uart_arsize,
    output [1:0] uart_arburst,
    //read data channel
    output reg uart_rready,
    input uart_rvalid,
    input [31:0] uart_rdata,

    input [1:0] uart_rresp,
    input uart_rlast,
    input [3:0] uart_rid,
    //write address channel
    output [31:0] uart_awaddr,
    output uart_awvalid,
    input uart_awready, 

    output [3:0] uart_awid,
    output [7:0] uart_awlen,
    output [2:0] uart_awsize,
    output [1:0] uart_awburst,
    //write data channel
    output [31:0] uart_wdata,
    output uart_wvalid,
    input uart_wready, 

    output [3:0] uart_wstrb,
    output uart_wlast,  
     //write response channel
    output uart_bready,
    input uart_bvalid,

    input [1:0] uart_bresp,
    input [3:0] uart_bid,

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
        else if(arb_ready&&lsu_arvalid)begin//lsu通信成功
            if((lsu_araddr==32'ha0000048)||(lsu_araddr==32'ha000005c))begin
                arb_ready<=1'b0;
                state<=7;
            end
            else begin
                arb_ready<=1'b0;
                state<=2;     
            end
        end
        else if(arb_ready&&(lsu_awvalid||lsu_wvalid))begin//lsu通信成功
            if(lsu_awaddr==32'ha00003f8)begin
                arb_ready<=1'b0;
                state<=6;
            end
            else begin
                arb_ready<=1'b0;
                state<=3;
            end
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
            saxi_arvalid=1'b0;
            saxi_rready=1'b0;
            saxi_wdata=32'h00000000;
            saxi_wvalid=1'b0;
            saxi_bready=1'b0;
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
        4'd1:begin//ifu读通信成功&写通道暂时不管
            saxi_araddr=ifu_araddr;
            saxi_arvalid=ifu_arvalid;
            ifu_arready=saxi_arready;
            saxi_rready=ifu_rready;
            ifu_rvalid=saxi_rvalid;
          //  ifu_rdata=saxi_rdata;
        end
        4'd2:begin//lsu读通信成功&写通道暂时不管
            saxi_araddr=lsu_araddr;
          //  lsu_rdata=saxi_rdata;
            saxi_arvalid=lsu_arvalid;
            lsu_arready=saxi_arready;
            saxi_rready=lsu_rready;
            lsu_rvalid=saxi_rvalid; 
        end           
        4'd3:begin//lsu写通信成功&读通道暂时不管
            saxi_awaddr=lsu_awaddr;
            saxi_wdata=lsu_wdata;
            saxi_awvalid=lsu_awvalid;
            lsu_awready=saxi_awready;
            saxi_wvalid=lsu_wvalid;
            lsu_wready=saxi_wready;
            saxi_bready=lsu_bready;
            lsu_bvalid=saxi_bvalid;
        end
        4'd4:begin//切换读出数据到lsu
            lsu_rdata=saxi_rdata;
        end
        4'd5:begin
            ifu_rdata=saxi_rdata;//切换读出数据到ifu
        end
        4'd6:begin//从机切换至UART 读通道暂时不管
            uart_awaddr=lsu_awaddr;
            uart_wdata=lsu_wdata;
            uart_awvalid=lsu_awvalid;
            lsu_awready=uart_awready;
            uart_wvalid=lsu_wvalid;
            lsu_wready=uart_wready;
            uart_bready=lsu_bready;
            lsu_bvalid=uart_bvalid;
        end
        4'd7:begin//从机切换至CLINT 写通道暂时不管
            clint_araddr=lsu_araddr;
          //  lsu_rdata=saxi_rdata;
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