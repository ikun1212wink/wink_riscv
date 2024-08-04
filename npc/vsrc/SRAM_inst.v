module ysyx_23060240_SRAM_inst(
     input clk,
     input [31:0] raddr,
     input r_en,
     output reg [31:0] rdata
);
import "DPI-C" function int pmem_read(input int pc);
reg [31:0] rdata_temp;
initial begin
     rdata=32'h0;
end
always@(*)begin
     rdata= r_en ? pmem_read(raddr) : rdata_temp;
end
/* always@(posedge clk)begin
     rdata<=rdata_temp;
end   */
endmodule