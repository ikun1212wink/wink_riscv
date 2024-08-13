module ysyx_23060240_IFU(
    input clk,
    input rst,
    input jump_en,
    input [31:0] jump_pc,
    input finish,
    output reg valid_ifu,
    output reg [31:0] pc,
    output [31:0] inst,
    output reg difftest,
    output reg itrace_reg,
    //read address channel signal
    output [31:0] ifu_araddr,
    output reg ifu_arvalid,
    input ifu_arready,

    output [3:0] ifu_arid,
    output [7:0] ifu_arlen,
    output [2:0] ifu_arsize,
    output [1:0] ifu_arburst,    
    //read data channel signal
    output ifu_rready,
    input ifu_rvalid,
    input [31:0] ifu_rdata,

    input [1:0] ifu_rresp,
    input ifu_rlast,
    input [3:0] ifu_rid,
    //write address channel
    output [31:0] ifu_awaddr,
    output reg ifu_awvalid,
    input ifu_awready,

    output [3:0] ifu_awid,
    output [7:0] ifu_awlen,
    output [2:0] ifu_awsize,
    output [1:0] ifu_awburst,
    //write data channel
    output [31:0] ifu_wdata,
    output reg ifu_wvalid,
    input ifu_wready,    

    output [3:0] ifu_wstrb,
    output ifu_wlast,
    //write response channel
    output reg ifu_bready,
    input ifu_bvalid,

    input [1:0] ifu_bresp,
    input [3:0] ifu_bid
);
assign ifu_araddr=pc;
wire rvalid;
//read address channel
/* wire [31:0] ifu_araddr;//pc
reg ifu_arvalid;
wire ifu_arready; */

//read data channel
/* wire ifu_rvalid;
reg ifu_rready;
wire [31:0] ifu_rdata;//inst */

//difftest signal
always@(posedge clk)begin
    if(rst)begin
        difftest<=1'b0;
    end
    else begin
        if(finish)begin
            difftest<=1'b1;
        end
        else if(difftest==1'b1)begin
            difftest<=1'b0;
        end
        else begin
            difftest<=difftest;
        end
    end
end
//itrace&reg signal
always@(posedge clk)begin
    if(rst)begin
        itrace_reg<=1'b0;
    end
    else begin
        if(ifu_rvalid&&ifu_rready)begin
            itrace_reg<=1'b1;
        end
        else if(itrace_reg)begin
            itrace_reg<=1'b0;
        end
        else begin
            itrace_reg<=itrace_reg;
        end
    end
end

//PC updata
always@(posedge clk)begin
    if(rst)begin
        pc<=32'h80000000;
    end
    else begin
        if(finish)begin
            if(jump_en)begin
                pc<=jump_pc;
            end
            else begin
                pc<=pc+32'h4;
            end
        end
        else begin
            pc<=pc;
        end
    end
end
//AXI read address channel
reg axi_arvalid;//存放延迟的arvalid信号
always@(posedge clk)begin
    if(rst)begin
        axi_arvalid<=1'b0;
    end
    else begin
        if(finish)begin
            axi_arvalid<=1'b1;
        end
        else begin
            axi_arvalid<=axi_arvalid;                        
        end
    end
end
reg [31:0] counter;
//ifu_arvalid信号延迟模拟
always@(posedge clk)begin
    if(rst)begin
        ifu_arvalid<=1'b1;
        counter<=32'h0;
    end
    else begin
        if(ifu_arvalid&&ifu_arready)begin
            ifu_arvalid<=1'b0;
            axi_arvalid<=1'b0;
        end
        else if(finish)begin
            counter<=32'h6;
        end
        else if(counter>1)begin
            counter<=counter-1;
        end
        else if(counter==1)begin
            counter<=counter-1;
            ifu_arvalid<=axi_arvalid;
        end
        else begin
            counter<=32'h0;
            ifu_arvalid<=ifu_arvalid;
        end
    end
end



//AXI read data channel
reg axi_rready;//存放延迟的rready信号
always@(posedge clk)begin
    if(rst)begin
        axi_rready<=1'b0;
        valid_ifu<=1'b0;
    end
    else begin
        if(ifu_arvalid && ifu_arready)begin
            axi_rready<=1'b1;
        end
        else if(ifu_rvalid&&ifu_rready)begin
            axi_rready<=1'b0;
            valid_ifu<=1'b1;
        end
        else begin
            axi_rready<=axi_rready;
            valid_ifu<=1'b0;
        end
    end
end
reg [31:0] counter_rready;
//ifu_rready信号延迟模拟
always@(posedge clk)begin
    if(rst)begin
        ifu_rready<=1'b0;
        counter_rready<=32'h0;
    end
    else begin
        if(ifu_rvalid&&ifu_rready)begin
            ifu_rready<=1'b0;
        end
        else if(ifu_arvalid && ifu_arready)begin
            counter_rready<=32'h4;
        end
        else if(counter_rready>1)begin
            counter_rready<=counter_rready-1;
        end
        else if(counter_rready==1)begin
            counter_rready<=counter_rready-1;
            ifu_rready<=axi_rready;    
        end
        else begin
            counter_rready<=32'h0;
            ifu_rready<=ifu_rready;
        end
    end
end


assign inst=ifu_rdata;


/* ysyx_23060240_SRAM_IFU SRAM_IFU(
    .clk(clk),
    .rst(rst),
    .finish(finish),
    .rvalid(rvalid),
    .ifu_araddr(pc),
    .ifu_arvalid(ifu_arvalid),
    .ifu_arready(ifu_arready),

    .ifu_rready(ifu_rready),
    .ifu_rvalid(ifu_rvalid),
    .ifu_rdata(ifu_rdata)
);  */


/* RegisterFile mem_inst(
    .clk(clk),
    .wdata(32'h0),
    .waddr(8'b0),
    .raddr(pc[7:0]),
    .wen(1'b0),
    .rdata(inst)
); */




endmodule