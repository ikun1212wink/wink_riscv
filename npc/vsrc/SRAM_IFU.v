module ysyx_23060240_SRAM_IFU(
     input clk,
     input [31:0] raddr,
     input r_en,
     output reg [31:0] rdata
);

reg [31:0] rdata_temp;

import "DPI-C" function int pmem_read(input int raddr);
/* verilator lint_off LATCH */
always@(*)begin
     if(r_en)begin
          rdata_temp=pmem_read(raddr);
     end
     else begin
          rdata_temp=rdata_temp;
     end
end
always@(posedge clk)begin
     rdata<=rdata_temp;
end  
endmodule