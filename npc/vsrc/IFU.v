module ysyx_23060240_IFU(
    input clk,
    input [31:0] pc,
    output reg [31:0] inst
);
import "DPI-C" function int pmem_read(input int pc);
always@(*)begin
    inst=pmem_read(pc);//取指令
end
/* RegisterFile mem_inst(
    .clk(clk),
    .wdata(32'h0),
    .waddr(8'b0),
    .raddr(pc[7:0]),
    .wen(1'b0),
    .rdata(inst)
); */

endmodule