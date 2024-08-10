module ysyx_23060240_ARB(
    input clk,
    input rst,

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
    output ifu_awready,
    //write data channel
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    output ifu_wready,    
    //write response channel
    input ifu_bready,
    output ifu_bvalid,


    //read address channel
    input [31:0] lsu_araddr,
    input lsu_arvalid,   
    output lsu_arready,
    //read data channel
    input lsu_rready,
    output lsu_rvalid,
    output reg [31:0] lsu_rdata,
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
    input saxi_bvalid
);
reg arb_ready;
//ifu read data hand
always@(posedge clk)begin
    if(rst)begin
        arb_ready<=1'b1;
    end
    else begin
        if(arb_ready && ifu_arvalid)begin //ifu主设备有效
            arb_ready<=1'b0;//占用SRAM
            saxi_araddr<=ifu_araddr;
            saxi_arvalid<=ifu_arvalid;
            ifu_arready<=saxi_arready;
            saxi_rready<=ifu_rready;
            ifu_rvalid<=saxi_rvalid;
            ifu_rdata<=saxi_rdata;
        //写操作暂时不管
        end
        else if(saxi_rvalid && saxi_rready)begin
            arb_ready<=1'b1;//使用SRAM结束，断开连接
        end
        else if(arb_ready && lsu_arvalid)begin
            arb_ready<=1'b0;//占用SRAM
            saxi_araddr<=lsu_araddr;
            saxi_arvalid<=lsu_arvalid;
            lsu_arready<=saxi_arready;
            saxi_rready<=lsu_rready;
            lsu_rvalid<=saxi_rvalid;
            lsu_rdata<=saxi_rdata;
        //写操作暂时不管            
        end
        else if(saxi_rvalid && saxi_rready)begin
            arb_ready<=1'b1;//使用SRAM结束，断开连接
        end
        else if((arb_ready) && (lsu_awvalid || lsu_wvalid ))begin
            arb_ready<=1'b0;//占用SRAM
            //write address channel
            saxi_awaddr<=lsu_awaddr;
            saxi_awvalid<=lsu_awvalid;
            lsu_awready<=saxi_awready;
            //write data channel
            saxi_wdata<=lsu_wdata;
            saxi_wvalid<=lsu_wvalid;
            lsu_wready<=saxi_wready;    
            //write response channel
            saxi_bready<=lsu_bready;
            lsu_bvalid<=saxi_bvalid;
        end
        else if(saxi_bready && saxi_bvalid)begin
            arb_ready<=1'b1;//使用SRAM结束，断开连接
        end
        else begin

        end

    end
end

endmodule