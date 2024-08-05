module ysyx_23060240_LSU(
    input clk,
    input mem_rd_en,
    input mem_wr_en,
    input [2:0] memory_rd_ctrl,
    input [7:0] memory_wr_ctrl,
    input [31:0] mem_wr_data,
    input [31:0] mem_rd_addr,
    input [31:0] mem_wr_addr,
    input valid_2,
    output  reg finish_2,
    output reg [31:0] mem_rd_data
    //output [31:0] mem_rd_data
);
reg [31:0] mem_move_out;
reg [31:0] mem_out;
reg [31:0] rd_sram_addr;
initial begin
    rd_sram_addr=32'h80000000;
end
always@(*)begin
    rd_sram_addr=mem_rd_addr;
end
reg signal;
initial begin
    signal=1;
end
always@(posedge clk)begin
    if(valid_2&signal)begin
        finish_2<=1;
        signal<=0;
    end
    else begin
        finish_2<=0;
        signal<=1;
    end
end

/* RegisterFile mem_data(
    .clk(clk),
    .wdata(mem_wr_data),
    .waddr(mem_wr_addr[7:0]),
    .raddr(mem_rd_addr[7:0]),
    .wen(mem_wr_en),
    .rdata(mem_rd_data)
);
 */

/* import "DPI-C" function int pmem_read(input int mem_rd_addr);
import "DPI-C" function void pmem_write(
    input int mem_wr_addr,input int mem_wr_data,input byte memory_wr_ctrl
); */
/* verilator lint_off LATCH */
/* always@(*)begin
    if(mem_rd_en==1)begin
        mem_out=pmem_read(mem_rd_addr);
    end
end */


ysyx_23060240_SRAM_LSU SRAM_LSU(
    .clk(clk),
    .raddr(rd_sram_addr),
    .waddr(mem_wr_addr),
    .wmask(memory_wr_ctrl),
    .w_en(mem_wr_en),
    .r_en(mem_rd_en),
    .wdata(mem_wr_data),
    .rdata(mem_out)
);


always@(*)begin
    case(mem_rd_addr[1:0])
        2'b00:mem_move_out=mem_out;
        2'b01:mem_move_out=mem_out>>8;
        2'b10:mem_move_out=mem_out>>16;
        2'b11:mem_move_out=mem_out>>24;
    endcase
end

always@(*)begin
    case(memory_rd_ctrl)
        3'b001:mem_rd_data={{24{mem_move_out[7]}},mem_move_out[7:0]};//lb
        3'b010:mem_rd_data={24'h0,mem_move_out[7:0]};//lbu
        3'b011:mem_rd_data={{16{mem_move_out[15]}},mem_move_out[15:0]};//lh
        3'b100:mem_rd_data={16'h0,mem_move_out[15:0]};//lhu
        3'b101:mem_rd_data={mem_move_out[31:0]};//lw
        default:mem_rd_data=32'h0;
    endcase
end
/* verilator lint_off LATCH */
/* always@(*)begin
    if(mem_wr_en==1)begin
      pmem_write(mem_wr_addr,mem_wr_data,memory_wr_ctrl);
    end
end */
endmodule