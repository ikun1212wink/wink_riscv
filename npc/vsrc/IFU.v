module ysyx_23060240_IFU(
    input clk,
    input rst,
    input jump_en,
    input [31:0] jump_pc,
    input finish,
    output valid_ifu,
    output reg [31:0] pc,
    output [31:0] inst
);
assign saxi_araddr=pc;
wire rvalid;
//read address channel
wire [31:0] saxi_araddr;//pc
reg saxi_arvalid;
wire saxi_arready;

//read data channel
wire saxi_rvalid;
reg saxi_rready;
wire [31:0] saxi_rdata;//inst


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
//saxi_arvalid信号延迟模拟
always@(posedge clk)begin
    if(rst)begin
        saxi_arvalid<=1'b1;
        counter<=32'h0;
    end
    else begin
        if(saxi_arvalid&&saxi_arready)begin
            saxi_arvalid<=1'b0;
        end
        else if(finish)begin
            counter<=32'h6;
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
        else if(saxi_rvalid&&saxi_rready)begin
            axi_rready<=1'b0;
        end
/*         if(saxi_rvalid && saxi_rready)begin
            saxi_rready<=1'b0;
        end */
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
            counter_rready<=32'h4;
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


assign inst=saxi_rdata;
assign valid_ifu=rvalid;

/* always@(posedge clk)begin
    if(rst)begin
        valid_ifu<=1'b0;
    end
    else begin
        if(saxi_rvalid && saxi_rready)begin
            valid_ifu<=1'b1;
        end
        else if(valid_ifu)begin
            valid_ifu<=1'b0;
        end
    end
end */

/* //wire [31:0] raddr;
wire [31:0] rd_sram_data;
reg rd_sram_en;
//assign raddr=pc;
initial begin
    pc=32'h80000000;
end
always@(*)begin
    inst=rd_sram_data;
end

always@(posedge clk)begin
    if(rst)begin
        rd_sram_en<=1;
    end
    else begin
        if(rd_sram_en==1'b1)begin
            rd_sram_en<=0;
        end
        else if(finish_1||finish_2)begin
            rd_sram_en<=1;
        end
        else begin
            rd_sram_en<=rd_sram_en;
        end
    end
end
assign valid_1=~rd_sram_en;
always@(posedge clk)begin
    if(rst)begin
        pc<=32'h80000000;
    end
    else if(finish_1||finish_2)begin
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
*/


ysyx_23060240_SRAM_IFU SRAM_IFU(
    .clk(clk),
    .rst(rst),
    .finish(finish),
    .rvalid(rvalid),
    .saxi_araddr(pc),
    .saxi_arvalid(saxi_arvalid),
    .saxi_arready(saxi_arready),

    .saxi_rready(saxi_rready),
    .saxi_rvalid(saxi_rvalid),
    .saxi_rdata(saxi_rdata)
); 


/* RegisterFile mem_inst(
    .clk(clk),
    .wdata(32'h0),
    .waddr(8'b0),
    .raddr(pc[7:0]),
    .wen(1'b0),
    .rdata(inst)
); */




endmodule