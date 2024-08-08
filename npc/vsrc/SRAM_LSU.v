module ysyx_23060240_SRAM_LSU(
    input clk,
    input rst,
   // input [31:0] raddr,
    input [31:0] waddr,
    input [7:0] wmask,
    input w_en,
   // input r_en,
    input [31:0] wdata,
   // output reg [31:0] rdata
   // input clk,
   // input rst,
    input valid_idu,
    //read address channel
    input [31:0] saxi_araddr,
    input saxi_arvalid,   
    output reg saxi_arready,
    //read data channel
    input saxi_rready,
    output reg saxi_rvalid,
    output [31:0] saxi_rdata 
);
import "DPI-C" function int pmem_read(input int raddr);

//AXI read address channel
always@(posedge clk)begin
     if(rst)begin
          saxi_arready<=1'b0;
     end
     else begin
          if(saxi_arvalid&&saxi_arready)begin
               saxi_arready<=1'b0;
          end
          else if(valid_idu)begin
               saxi_arready<=1'b1;
          end
          else begin
               saxi_arready<=1'b0;
          end
     end
end

reg [31:0] axi_raddr;//暂时存放要读的地址
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
               saxi_rvalid<=1'b0;
          end
     end
end
//AXI memory read
always@(*)begin
     axi_data_to_read=pmem_read(axi_raddr);
end


import "DPI-C" function void pmem_write(input int waddr,input int wdata,input byte wmask);
/* verilator lint_off LATCH */
always@(*)begin
    if(w_en==1)begin
        pmem_write(waddr,wdata,wmask);
    end
end   
endmodule