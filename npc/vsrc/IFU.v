module ysyx_23060240_IFU(
    input clk,
    input rst,
    input jump_en,
    input [31:0] jump_pc,
    output reg [31:0] pc,
    output reg [31:0] inst
);
initial begin
    pc=32'h80000000;
end
wire [31:0] pc_plus4;
always@(posedge clk)begin
    if(rst)begin
        pc<=32'h80000000;
    end
    else begin
        if(jump_en)begin
            pc<=jump_pc;
        end
        else begin
            pc<=pc+32'h4;
        end
    end
end

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