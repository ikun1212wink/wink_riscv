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
    output reg rd_finish,

    //read address channel signal
    output [31:0] lsu_araddr,
    output reg lsu_arvalid,
    input lsu_arready,
    //read data channel signal
    output lsu_rready,
    input lsu_rvalid,
    input [31:0] lsu_rdata,
    //write address channel
    output [31:0] lsu_awaddr,
    output reg lsu_awvalid,
    input lsu_awready,
    //write data channel
    output [31:0] lsu_wdata,
    output reg lsu_wvalid,
    input lsu_wready,    
    //write response channel
    output reg lsu_bready,
    input lsu_bvalid

);

//read address channel signal
/* wire [31:0] lsu_araddr;//addr    input [31:0] mem_rd_addr,
reg lsu_arvalid;
wire lsu_arready; */
assign lsu_araddr=mem_rd_addr;
//read data channel signal
/* wire lsu_rvalid; 
wire [31:0] lsu_rdata;//rdata   output reg [31:0] mem_rd_data
reg lsu_rready; */
reg [31:0] mem_move_out;
reg [31:0] mem_out;


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
        else if(lsu_arvalid&&lsu_arready)begin
            axi_arvalid<=1'b0;
        end
        else begin
            axi_arvalid<=axi_arvalid;
        end
    end
end
//lsu_arvalid信号延迟模拟
reg [31:0] counter;
always@(posedge clk)begin
    if(rst)begin
        lsu_arvalid<=1'b0;
        counter<=32'h0;
    end
    else begin
        if(lsu_arvalid&&lsu_arready)begin
            lsu_arvalid<=1'b0;
        end
        else if(valid_idu)begin
            counter<=32'h3;
        end
        else if(counter>1)begin
            counter<=counter-1;
        end
        else if(counter==1)begin
            counter<=counter-1;
            lsu_arvalid<=axi_arvalid;
        end
        else begin
            counter<=32'h0;
            lsu_arvalid<=lsu_arvalid;
        end
    end
end
//AXI read data channel
reg axi_rready;//存放延迟的rready信号
always@(posedge clk)begin
    if(rst)begin
        axi_rready<=1'b0;
        rd_finish<=1'b0;
    end
    else begin
        if(lsu_arvalid && lsu_arready)begin
            axi_rready<=1'b1;
        end
        else if(lsu_rvalid && lsu_rready)begin
            axi_rready<=1'b0;
            rd_finish<=1'b1;
        end
        else begin
            axi_rready<=axi_rready;
            rd_finish<=1'b0;
        end        
    end
end
//lsu_rready信号延迟模拟
reg [31:0] counter_rready;
always@(posedge clk)begin
    if(rst)begin
        lsu_rready<=1'b0;
        counter_rready<=32'h0;
    end
    else begin
        if(lsu_rvalid&&lsu_rready)begin
            lsu_rready<=1'b0;
        end
        else if(lsu_arvalid && lsu_arready)begin
            counter_rready<=32'h7;
        end
        else if(counter_rready>1)begin
            counter_rready<=counter_rready-1;
        end
        else if(counter_rready==1)begin
            counter_rready<=counter_rready-1;
            lsu_rready<=axi_rready;    
        end
        else begin
            counter_rready<=32'h0;
            lsu_rready<=lsu_rready;
        end
    end
end
always@(posedge clk)begin
    if(rst)begin
        mem_out<=32'h0;
    end
    else begin
        if(lsu_rvalid && lsu_rready)begin
            mem_out<=lsu_rdata;
        end
        else begin
            mem_out<=mem_out;
        end
    end
end

//AXI write address channel
assign lsu_awaddr=mem_wr_addr;
always@(posedge clk)begin
    if(rst)begin
        lsu_awvalid<=1'b0;
    end
    else begin
        if(mem_wr_en)begin
            lsu_awvalid<=1'b1;
        end
        else if(lsu_awvalid&&lsu_awready)begin
            lsu_awvalid<=1'b0;
        end
        else begin
            lsu_awvalid<=lsu_awvalid;
        end
    end
end
//AXI write data channel
assign lsu_wdata=mem_wr_data;
always@(posedge clk)begin
    if(rst)begin
        lsu_wvalid<=1'b0;
    end
    else begin
        if(mem_wr_en)begin
            lsu_wvalid<=1'b1;
        end
        else if(lsu_wvalid&&lsu_wready)begin
            lsu_wvalid<=1'b0;
        end
        else begin
            lsu_wvalid<=lsu_wvalid;
        end
    end
end
//AXI write respone channel
//默认一直能接收写完成响应
always@(posedge clk)begin
    if(rst)begin
        lsu_bready<=1'b1;
    end
    else begin
        lsu_bready<=1'b1;
    end
end

//the inst execute end signal 
assign wr_finish=(lsu_bready && lsu_bvalid) ? 1:0;



/* 
ysyx_23060240_SRAM_LSU SRAM_LSU(
    .clk(clk),
    .rst(rst),
    .rvalid(rvalid),
   // .waddr(mem_wr_addr),
    .wmask(memory_wr_ctrl),
   // .w_en(mem_wr_en),
   // .wdata(mem_wr_data),
    .valid_idu(valid_idu),
    .lsu_araddr(lsu_araddr),
    .lsu_arvalid(lsu_arvalid),
    .lsu_arready(lsu_arready),
    .lsu_rready(lsu_rready),
    .lsu_rvalid(lsu_rvalid),
    .lsu_rdata(lsu_rdata),
    .lsu_awaddr(lsu_awaddr),
    .lsu_awvalid(lsu_awvalid),
    .lsu_awready(lsu_awready),
    .lsu_wdata(lsu_wdata),
    .lsu_wvalid(lsu_wvalid),
    .lsu_wready(lsu_wready),
    .lsu_bready(lsu_bready),
    .lsu_bvalid(lsu_bvalid)
); */


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