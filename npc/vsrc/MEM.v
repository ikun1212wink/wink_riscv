module ysyx_23060240_MEM(
    input [31:0] pc,//
    input mem_rd_en,
    input mem_wr_en,
    input [2:0] memory_rd_ctrl,
    input [1:0] memory_wr_ctrl,
    input [31:0] mem_wr_data,
    input [31:0] mem_rd_addr,
    input [31:0] mem_wr_addr,

    output reg [31:0] inst,//
    output [31:0] mem_rd_data
);
wire [31:0] mem_out;
//import "DPI-C" function int pmem_read(input uint32_t mem_rd_addr);
import "DPI-C" function int pmem_read(input int pc);

//assign mem_out= (mem_rd_en==1)? pmem_read(mem_rd_addr) : 0;
always@(*)begin
    inst=pmem_read(pc);//取指令
end
endmodule