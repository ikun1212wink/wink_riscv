module ysyx_23060240_ARB(
    input clk,
    input rst,
/* --------------IFU MASTER----------------- */
    //read address channel
    input [31:0] ifu_araddr,
    input ifu_arvalid,   
    output reg ifu_arready,
    //read data channel
    input ifu_rready,
    output reg ifu_rvalid,
    output reg [31:0] ifu_rdata,
    //write address channel
    input [31:0] ifu_awaddr,
    input ifu_awvalid,
    output reg ifu_awready,
    //write data channel
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    output reg ifu_wready,    
    //write response channel
    input ifu_bready,
    output reg ifu_bvalid,

/* --------------LSU MASTER----------------- */
    //read address channel
    input [31:0] lsu_araddr,
    input lsu_arvalid,   
    output reg lsu_arready,
    //read data channel
    input lsu_rready,
    output reg lsu_rvalid,
    output reg [31:0] lsu_rdata,
    //write address channel
    input [31:0] lsu_awaddr,
    input lsu_awvalid,
    output reg lsu_awready,
    //write data channel
    input [31:0] lsu_wdata,
    input lsu_wvalid,
    output reg lsu_wready,    
    //write response channel
    input lsu_bready,
    output reg lsu_bvalid,

/* --------------SRAM SLAVE----------------- */
    //read address channel
    output reg [31:0] saxi_araddr,
    output reg saxi_arvalid,   
    input saxi_arready,
    //read data channel
    output reg saxi_rready,
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
    input saxi_bvalid,

/* --------------UART SLAVE----------------- */
    output reg [31:0] uart_araddr,
    output reg uart_arvalid,   
    input uart_arready,

    //read data channel
    output reg uart_rready,
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
    input uart_bvalid
);
reg arb_ready;
reg [2:0] state;
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
            arb_ready<=1'b0;
            state<=2;
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
            wait_read<=1;
            state<=4;
        end
        else if(ifu_rvalid&&ifu_rready)begin//等待lsu从机读操作完成
            wait_read<=1;
            state<=5;
        end
        else if(saxi_bready&&saxi_bvalid)begin//从机写操作完成,断开通信
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
        3'd0:begin
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
        3'd1:begin//ifu读通信成功&写通道暂时不管
            saxi_araddr=ifu_araddr;
            saxi_arvalid=ifu_arvalid;
            ifu_arready=saxi_arready;
            saxi_rready=ifu_rready;
            ifu_rvalid=saxi_rvalid;
          //  ifu_rdata=saxi_rdata;
        end
        3'd2:begin//lsu读通信成功&写通道暂时不管
            saxi_araddr=lsu_araddr;
          //  lsu_rdata=saxi_rdata;
            saxi_arvalid=lsu_arvalid;
            lsu_arready=saxi_arready;
            saxi_rready=lsu_rready;
            lsu_rvalid=saxi_rvalid; 
        end           
        3'd3:begin//lsu写通信成功&读通道暂时不管
            saxi_awaddr=lsu_awaddr;
            saxi_wdata=lsu_wdata;
            saxi_awvalid=lsu_awvalid;
            lsu_awready=saxi_awready;
            saxi_wvalid=lsu_wvalid;
            lsu_wready=saxi_wready;
            saxi_bready=lsu_bready;
            lsu_bvalid=saxi_bvalid;
        end
        3'd4:begin//切换读出数据到lsu
            lsu_rdata=saxi_rdata;
        end
        3'd5:begin
            ifu_rdata=saxi_rdata;//切换读出数据到ifu
        end
        3'd6:begin//从机切换至UART 读通道暂时不管
            uart_awaddr=lsu_awaddr;
            uart_wdata=lsu_wdata;
            uart_awvalid=lsu_awvalid;
            lsu_awready=uart_awready;
            uart_wvalid=lsu_wvalid;
            lsu_wready=uart_wready;
            uart_bready=lsu_bready;
            lsu_bvalid=uart_bvalid;
        end
        default:begin end
    endcase
end



endmodule