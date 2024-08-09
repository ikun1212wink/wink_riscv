module ysyx_23060240_SRAM_IFU(
     input clk,
     input rst,
     input finish,
    //AXI_LITE BUS

    //write address channel
/*     input [4:0] saxi_awaddr,
    input saxi_awvalid,
    output saxi_awready, */

    //read address channel
    input [31:0] saxi_araddr,
    input saxi_arvalid,   
    output reg saxi_arready,

    //write data channel
/*     input [31:0] saxi_wdata,
    input saxi_wvalid,
    output saxi_wready, */

    //read data channel
    input saxi_rready,
    output reg saxi_rvalid,
    output [31:0] saxi_rdata,

    //write response channel
/*     input saxi_bready,
    output saxi_bvalid */
    output reg rvalid
);

initial begin
     axi_raddr=32'h80000000;
end

//reg [31:0] rdata_temp;
import "DPI-C" function int pmem_read(input int raddr);
/* verilator lint_off LATCH */
/* always@(*)begin
     if(r_en)begin
          rdata_temp=pmem_read(raddr);
     end
     else begin
          rdata_temp=rdata_temp;
     end
end
always@(posedge clk)begin
     rdata<=rdata_temp;
end  */ 

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


/* reg axi_wait_for_read;//这是一个模式，等待主机的读数据ready信号发来  等待模式
wire [31:0] axi_data_to_read;//读数据选择
always@(posedge clk)begin
     if(rst)begin
          saxi_rvalid<=1'b0;
          saxi_rdata<=32'b0;
     end
     else begin
          if(axi_wait_for_read)begin//等待主机读数据ready信号模式 等待模式
               if(saxi_rready)begin
                    saxi_rdata<=axi_data_to_read;
                    saxi_rvalid<=1'b1;
                    axi_wait_for_read<=1'b0;//退出等待模式
               end
          end
          else begin//普通模式
               if(axi_need_read&&saxi_rready)begin//有要读信号，分成两种操作  1.我现在读了数据，主机处于准备好的状态 
                    saxi_rdata<=axi_data_to_read;
                    saxi_rvalid<=1'b1;
               end
               else if(axi_need_read)begin//2.我需要等主机准备好，我再把读到的数据发给它
                    axi_wait_for_read<=1'b1;//进入等待模式
                    saxi_rvalid<=1'b1;
               end
               else begin//没有要读信号，valid拉低
                    saxi_valid<=1'b0;
               end
          end
     end
end */

//AXI read data channel
reg [31:0] axi_data_to_read;//读数据选择
reg [31:0] axi_rdata;//存放读出的数据
always@(posedge clk)begin
     if(rst)begin
          axi_rdata<=32'h0;
          saxi_rdata<=32'h0;
          saxi_rvalid<=1'b0;
     end
     else begin
          if(saxi_arvalid && saxi_arready)begin
               saxi_rvalid<=1'b1;
          end
          else if(saxi_rvalid && saxi_rready)begin
               axi_rdata<=axi_data_to_read;
               saxi_rvalid<=1'b0;
          end
          else begin
               saxi_rvalid<=saxi_rvalid;
          end
     end
end
//AXI memory read
always@(*)begin
     axi_data_to_read=pmem_read(axi_raddr);
end
//reg [31:0] delayed_data;
reg [31:0] counter;

//SRAM读延迟模拟
always@(posedge clk)begin
     if(saxi_rvalid && saxi_rready)begin
          counter<=32'h10;
          rvalid<=1'b0;
     end
     else if(counter>1)begin
          counter<=counter-1;
          rvalid<=1'b0;
     end
     else if(counter==1)begin
          counter<=counter-1;
          saxi_rdata<=axi_rdata;
          rvalid<=1'b1;
     end
     else begin
          counter<=32'h0;
          rvalid<=1'b0;
     end
end
endmodule