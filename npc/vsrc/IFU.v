module ysyx_23060240_IFU(
    input [31:0] pc,
    output reg [31:0] inst
);
import "DPI-C" function int pmem_read(input int pc);
always@(*)begin
    inst=pmem_read(pc);//取指令
end


endmodule