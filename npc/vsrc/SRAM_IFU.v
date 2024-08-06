module ysyx_23060240_SRAM_IFU(
     input clk,
     input rst,
    //AXI_LITE BUS
    //write address channel
/*     input [4:0] saxi_awaddr,
    input saxi_awvalid,
    output saxi_awready, */
    //read address channel
    input [31:0] saxi_araddr,
    input saxi_arvalid,   
    output saxi_arready,
    //write data channel
/*     input [31:0] saxi_wdata,
    input saxi_wvalid,
    output saxi_wready, */
    //read data channel
    input saxi_rready,
    output saxi_rvalid,
    output [31:0] saxi_rdata
    //write response channel
/*     input saxi_bready,
    output saxi_bvalid */
);

/* reg [31:0] rdata_temp;
import "DPI-C" function int pmem_read(input int raddr); */
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
endmodule