module ysyx_23060240_CLINT(
    input clk,
    input rst,

    //read address channel
    input [31:0] clint_araddr,
    input clint_arvalid,   
    output reg clint_arready,

    input [3:0] clint_arid,
    input [7:0] clint_arlen,
    input [2:0] clint_arsize,
    input [1:0] clint_arburst,

    //read data channel
    input clint_rready,
    output reg clint_rvalid,
    output [31:0] clint_rdata,

    output [1:0] clint_rresp,
    output clint_rlast,
    output [3:0] clint_rid,
    //write address channel
    input [31:0] clint_awaddr,
    input clint_awvalid,
    output clint_awready, 

    input [3:0] clint_awid,
    input [7:0] clint_awlen,
    input [2:0] clint_awsize,
    input [1:0] clint_awburst,
    //write data channel
    input [31:0] clint_wdata,
    input clint_wvalid,
    output clint_wready, 

    input [3:0] clint_wstrb,
    input clint_wlast,  
    //write response channel
    input clint_bready,
    output clint_bvalid,

    output [1:0] clint_bresp,
    output [3:0] clint_bid  
);
reg [63:0] mtime;//这是一个只读的设备寄存器
localparam mtime_addr_low = 32'ha0000048;
localparam mtime_addr_high = 32'ha000005c;
always@(posedge clk)begin
    if(rst)begin
        mtime<=64'h0;
    end
    else begin
        mtime<=mtime+64'h1;
    end
end

//AXI read address channel
always@(posedge clk)begin
    if(rst)begin
        clint_arready<=1'b1;
    end
    else begin
        if(clint_arvalid&&clint_arready)begin
               clint_arready<=1'b0;
          end
        else if(clint_rready&&clint_rvalid)begin
            clint_arready<=1'b1;
        end
        else begin
            clint_arready<=clint_arready;
        end
    end
end
//暂时存放要读的地址
reg [31:0] raddr;
always@(posedge clk)begin
     if(rst)begin
          raddr<=32'ha0000000;
     end
     else begin
          if(clint_arvalid && clint_arready)begin
               raddr<=clint_araddr;
          end
          else begin
               raddr<=raddr;
          end
     end
end
//AXI read data channel
always@(posedge clk)begin
    if(rst)begin
        clint_rvalid<=1'b0;
    end
    else begin
        if(clint_arvalid && clint_arready)begin
            clint_rvalid<=1'b1;
        end
        else if(clint_rvalid && clint_rready)begin
            clint_rvalid<=1'b0;
            if(clint_araddr==32'ha0000048)begin
                clint_rdata<=mtime[31:0];
            end
            else if(clint_araddr==32'ha000005c)begin
                clint_rdata<=mtime[63:32];
            end
            else begin
                clint_rdata<=clint_rdata;
            end
        end
        else begin
            clint_rvalid<=clint_rvalid;
        end
    end
end

endmodule