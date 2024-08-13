module ysyx_23060240_SRAM(
    input clk,
    input rst,
    input [7:0] wmask,

    //read address channel
    input [31:0] saxi_araddr,
    input saxi_arvalid,   
    output reg saxi_arready,

    input [3:0] saxi_arid,
    input [7:0] saxi_arlen,
    input [2:0] saxi_arsize,
    input [1:0] saxi_arburst,

    //read data channel
    input saxi_rready,
    output reg saxi_rvalid,
    output [31:0] saxi_rdata,

    output [1:0] saxi_rresp,
    output saxi_rlast,
    output [3:0] saxi_rid,


    //write address channel
    input [31:0] saxi_awaddr,
    input saxi_awvalid,
    output saxi_awready,

    input [3:0] saxi_awid,
    input [7:0] saxi_awlen,
    input [2:0] saxi_awsize,
    input [1:0] saxi_awburst,

    //write data channel
    input [31:0] saxi_wdata,
    input saxi_wvalid,
    output saxi_wready,

    input [3:0] saxi_wstrb,
    input saxi_wlast,  
    //write response channel
    input saxi_bready,
    output saxi_bvalid,

    output [1:0] saxi_bresp,
    output [3:0] saxi_bid

);
import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr,input int wdata,input byte wmask);
//AXI read address channel
always@(posedge clk)begin
     if(rst)begin
          saxi_arready<=1'b1;
     end
     else begin
          if(saxi_arvalid&&saxi_arready)begin
               saxi_arready<=1'b0;
          end
          else if(saxi_rready&&saxi_rvalid)begin
               saxi_arready<=1'b1;
          end
          else begin
               saxi_arready<=saxi_arready;
          end
     end
end
reg [31:0] axi_raddr;//暂时存放要读的地址
initial begin//赋初始值
     axi_raddr=32'h80000000;
end
always@(posedge clk)begin
     if(rst)begin
          axi_raddr<=32'h80000000;
     end
     else begin
          if(saxi_arvalid && saxi_arready)begin
               axi_raddr<=saxi_araddr;
          end
          else begin
               axi_raddr<=axi_raddr;
          end
     end
end
//AXI read data channel
reg [31:0] axi_data_to_read;//读数据选择
always@(*)begin
     axi_data_to_read=pmem_read(axi_raddr);
end
always@(posedge clk)begin
     if(rst)begin
          saxi_rdata<=32'h0;
          saxi_rvalid<=1'b0;
     end
     else begin
          if(saxi_arvalid && saxi_arready)begin
               saxi_rvalid<=1'b1;
          end
          else if(saxi_rvalid && saxi_rready)begin
               saxi_rdata<=axi_data_to_read;
               saxi_rvalid<=1'b0;             
          end
          else begin
               saxi_rvalid<=saxi_rvalid;
          end
     end
end

//AXI write address channel
reg aw_hand;//aw握手标志 用于标记写响应
always@(posedge clk)begin
     if(rst)begin
          saxi_awready<=1'b1;
          aw_hand<=1'b0;
     end
     else begin
          if(saxi_awready && saxi_awvalid)begin
               saxi_awready<=1'b0;
               aw_hand<=1'b1;
          end
          else if(saxi_bready && saxi_bvalid)begin
               saxi_awready<=1'b1;
          end
          else if(aw_hand && w_hand)begin
               aw_hand<=1'b0;
          end
          else begin
               saxi_awready<=saxi_awready;
               aw_hand<=aw_hand;
          end
     end
end
reg [31:0] axi_waddr;//暂时存放写数据的地址
initial begin
     axi_waddr=32'h80000000;
end
always@(posedge clk)begin
     if(rst)begin
          axi_waddr<=32'h80000000;
     end
     else begin
          if(saxi_awvalid && saxi_awready)begin
               axi_waddr<=saxi_awaddr;
          end
          else begin
               axi_waddr<=axi_waddr;
          end   
     end
end
//AXI write data channel
reg w_hand;//w握手标志   用于标记写响应
always@(posedge clk)begin
     if(rst)begin
          saxi_wready<=1'b1;
          w_hand<=1'b0;
     end
     else begin
          if(saxi_wready && saxi_wvalid)begin
               saxi_wready<=1'b0;
               w_hand<=1'b1;
          end
          else if(saxi_bready && saxi_bvalid)begin
               saxi_wready<=1'b1;
          end
          else if(w_hand && aw_hand)begin
               w_hand<=1'b0;
          end
          else begin
               saxi_wready<=saxi_wready;
               w_hand<=w_hand;
          end
     end
end
reg [31:0] axi_wdata;
always@(posedge clk)begin
     if(rst)begin
          axi_wdata<=32'h0;
     end
     else begin
          if(saxi_wready && saxi_wvalid)begin
               axi_wdata<=saxi_wdata;
          end
          else begin
               axi_wdata<=axi_wdata;
          end
     end
end
//AXI write respone channel
always@(posedge clk)begin
     if(rst)begin
          saxi_bvalid<=1'b0;
     end
     else begin
          if(aw_hand && w_hand)begin
               saxi_bvalid<=1'b1;
          end
          else if(saxi_bvalid && saxi_bready)begin
               saxi_bvalid<=1'b0;
          end
          else begin
               saxi_bvalid<=saxi_bvalid;
          end
     end
end


//写SRAM模拟
/* verilator lint_off LATCH */
always@(*)begin
    if(w_hand && aw_hand)begin
        pmem_write(axi_waddr,axi_wdata,wmask);
    end
end   
endmodule