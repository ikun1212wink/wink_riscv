module ysyx_23060240_MEM(
    input mem_rd_en,
    input mem_wr_en,
    input [2:0] memory_rd_ctrl,
    input [1:0] memory_wr_ctrl,
    input [31:0] mem_wr_data,
    input [31:0] mem_rd_addr,
    input [31:0] mem_wr_addr,

    output reg [31:0] mem_rd_data
);
wire [31:0] mem_out;
//import "DPI-C" function int pmem_read(input uint32_t mem_rd_addr);
import "DPI-C" function int pmem_read(input int mem_rd_addr);
/* verilator lint_off LATCH */
always@(*)begin
    if(mem_rd_en)begin
        mem_rd_data=pmem_read(mem_rd_addr);
    end
end
endmodule