module ysyx_23060240_CLINT(
    input clk,
    input rst,

    //read address channel
    input [31:0] clint_araddr,
    input clint_arvalid,   
    output reg clint_arready,

    //read data channel
    input clint_rready,
    output reg clint_rvalid,
    output [31:0] clint_rdata,

    //write address channel
    input [31:0] clint_awaddr,
    input clint_awvalid,
    output clint_awready, //

    //write data channel
    input [31:0] clint_wdata,
    input clint_wvalid,
    output clint_wready, //

     //write response channel
    input clint_bready,
    output clint_bvalid  //
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
assign clint_rdata = (clint_araddr==32'ha0000048) ? mtime[31:0] :
                     (clint_araddr==32'ha000005c) ? mtime[63:32] : 32'h0;
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
        end
        else begin
            clint_rvalid<=clint_rvalid;
        end
    end
end

endmodule