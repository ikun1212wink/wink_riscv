module ysyx_23060240_LSU(
    input clk,
    input rst,
   // input mem_rd_en,
    input mem_wr_en,
    input [2:0] memory_rd_ctrl,
    input [7:0] memory_wr_ctrl,
    input [31:0] mem_wr_data,
    input [31:0] mem_rd_addr,
    input [31:0] mem_wr_addr,
    output reg [31:0] mem_rd_data,

    input valid_idu,
    output  reg finish_2
);
assign saxi_araddr=mem_rd_addr;
always@(*)begin
    mem_out=saxi_rdata;
end
//read address channel
wire [31:0] saxi_araddr;//addr    input [31:0] mem_rd_addr,
reg saxi_arvalid;
wire saxi_arready;

//read data channel
wire saxi_rvalid; 
wire [31:0] saxi_rdata;//rdata   output reg [31:0] mem_rd_data
reg saxi_rready;

reg [31:0] mem_move_out;
reg [31:0] mem_out;

/* reg [31:0] rd_sram_addr;
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
wire rd_sram_en;
assign rd_sram_en=valid_2&signal; */

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

//AXI read address channel
reg axi_arvalid;//存放延迟的arvalid信号
always@(posedge clk)begin
    if(rst)begin
        axi_arvalid<=1'b0;
    end
    else begin
        if(valid_idu)begin
            axi_arvalid<=1'b1;
        end
        else if(saxi_arvalid&&saxi_arready)begin
            axi_arvalid<=1'b0;
        end
        else begin
            axi_arvalid<=axi_arvalid;
        end
    end
end
reg [31:0] counter;
//saxi_arvalid信号延迟模拟
always@(posedge clk)begin
    if(rst)begin
        saxi_arvalid<=1'b0;
        counter<=32'h0;
    end
    else begin
        if(saxi_arvalid&&saxi_arready)begin
            saxi_arvalid<=1'b0;
        end
        else if(valid_idu)begin
            counter<=32'h3;
        end
        else if(counter>1)begin
            counter<=counter-1;
        end
        else if(counter==1)begin
            counter<=counter-1;
            saxi_arvalid<=axi_arvalid;
        end
        else begin
            counter<=32'h0;
            saxi_arvalid<=saxi_arvalid;
        end
    end
end
//AXI read data channel
reg axi_rready;//存放延迟的rready信号
always@(posedge clk)begin
    if(rst)begin
        axi_rready<=1'b0;
    end
    else begin
        if(saxi_arvalid && saxi_arready)begin
            axi_rready<=1'b1;
        end
        else if(saxi_rvalid && saxi_rready)begin
            axi_rready<=1'b0;
        end
        else begin
            axi_rready<=axi_rready;
        end        
    end
end
reg [31:0] counter_rready;
//saxi_rready信号延迟模拟
always@(posedge clk)begin
    if(rst)begin
        saxi_rready<=1'b0;
        counter_rready<=32'h0;
    end
    else begin
        if(saxi_rvalid&&saxi_rready)begin
            saxi_rready<=1'b0;
        end
        else if(saxi_arvalid && saxi_arready)begin
            counter_rready<=32'h7;
        end
        else if(counter_rready>1)begin
            counter_rready<=counter_rready-1;
        end
        else if(counter_rready==1)begin
            counter_rready<=counter_rready-1;
            saxi_rready<=axi_rready;    
        end
        else begin
            counter_rready<=32'h0;
            saxi_rready<=saxi_rready;
        end
    end
end

wire rvalid;
assign finish_2=rvalid;

ysyx_23060240_SRAM_LSU SRAM_LSU(
    .clk(clk),
    .rst(rst),
    .rvalid(rvalid),
    .waddr(mem_wr_addr),
    .wmask(memory_wr_ctrl),
    .w_en(mem_wr_en),
    .wdata(mem_wr_data),
    .valid_idu(valid_idu),
    .saxi_araddr(saxi_araddr),
    .saxi_arvalid(saxi_arvalid),
    .saxi_arready(saxi_arready),
    .saxi_rready(saxi_rready),
    .saxi_rvalid(saxi_rvalid),
    .saxi_rdata(saxi_rdata)
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