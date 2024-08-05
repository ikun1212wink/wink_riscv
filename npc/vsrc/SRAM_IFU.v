module ysyx_23060240_SRAM_IFU(
     input clk,
     input [31:0] raddr,
     input r_en,
     output reg [31:0] rdata
);

reg [31:0] rdata_temp;

import "DPI-C" function int pmem_read(input int raddr);
always@(*)begin
     rdata_temp= r_en ? pmem_read(raddr) : 32'h0;
end
always@(posedge clk)begin
     rdata<=rdata_temp;
end  
endmodule