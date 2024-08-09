module ysyx_23060240_LSU(
    input clk,
    input rst,
    input mem_wr_en,
    input [2:0] memory_rd_ctrl,
    input [7:0] memory_wr_ctrl,
    input [31:0] mem_wr_data,
    input [31:0] mem_rd_addr,
    input [31:0] mem_wr_addr,
    output reg [31:0] mem_rd_data,

    input valid_idu,
    output wr_finish,
    output rd_finish
);

//read address channel signal
wire [31:0] saxi_araddr;//addr    input [31:0] mem_rd_addr,
reg saxi_arvalid;
wire saxi_arready;
assign saxi_araddr=mem_rd_addr;
//read data channel signal
wire saxi_rvalid; 
wire [31:0] saxi_rdata;//rdata   output reg [31:0] mem_rd_data
reg saxi_rready;
reg [31:0] mem_move_out;
reg [31:0] mem_out;
always@(*)begin
    mem_out=saxi_rdata;
end

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
//saxi_arvalid信号延迟模拟
reg [31:0] counter;
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
//saxi_rready信号延迟模拟
reg [31:0] counter_rready;
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
//write address channel signal
wire [31:0] saxi_awaddr;
reg saxi_awvalid;
wire saxi_awready;
assign saxi_awaddr=mem_wr_addr;
//wire data channel signal
wire [31:0] saxi_wdata;
reg saxi_wvalid;
wire saxi_wready;
//wire respone channel signal
reg saxi_bready;
wire saxi_bvalid;

//AXI write address channel
always@(posedge clk)begin
    if(rst)begin
        saxi_awvalid<=1'b0;
    end
    else begin
        if(mem_wr_en)begin
            saxi_awvalid<=1'b1;
        end
        else if(saxi_awvalid&&saxi_awready)begin
            saxi_awvalid<=1'b0;
        end
        else begin
            saxi_awvalid<=saxi_awvalid;
        end
    end
end
//AXI write data channel
assign saxi_wdata=mem_wr_data;
always@(posedge clk)begin
    if(rst)begin
        saxi_wvalid<=1'b0;
    end
    else begin
        if(mem_wr_en)begin
            saxi_wvalid<=1'b1;
        end
        else if(saxi_wvalid&&saxi_wready)begin
            saxi_wvalid<=1'b0;
        end
        else begin
            saxi_wvalid<=saxi_wvalid;
        end
    end
end
//AXI write respone channel
//默认一直能接收写完成响应
always@(posedge clk)begin
    if(rst)begin
        saxi_bready<=1'b1;
    end
    else begin
        saxi_bready<=1'b1;
    end
end

//the inst execute end signal 
assign wr_finish=(saxi_bready && saxi_bvalid) ? 1:0;
wire rvalid;
assign rd_finish=rvalid;



ysyx_23060240_SRAM_LSU SRAM_LSU(
    .clk(clk),
    .rst(rst),
    .rvalid(rvalid),
   // .waddr(mem_wr_addr),
    .wmask(memory_wr_ctrl),
   // .w_en(mem_wr_en),
   // .wdata(mem_wr_data),
    .valid_idu(valid_idu),
    .saxi_araddr(saxi_araddr),
    .saxi_arvalid(saxi_arvalid),
    .saxi_arready(saxi_arready),
    .saxi_rready(saxi_rready),
    .saxi_rvalid(saxi_rvalid),
    .saxi_rdata(saxi_rdata),
    .saxi_awaddr(saxi_awaddr),
    .saxi_awvalid(saxi_awvalid),
    .saxi_awready(saxi_awready),
    .saxi_wdata(saxi_wdata),
    .saxi_wvalid(saxi_wvalid),
    .saxi_wready(saxi_wready),
    .saxi_bready(saxi_bready),
    .saxi_bvalid(saxi_bvalid)
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

/* RegisterFile mem_data(
    .clk(clk),
    .wdata(mem_wr_data),
    .waddr(mem_wr_addr[7:0]),
    .raddr(mem_rd_addr[7:0]),
    .wen(mem_wr_en),
    .rdata(mem_rd_data)
);
 */
endmodule