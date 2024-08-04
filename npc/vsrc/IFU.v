module ysyx_23060240_IFU(
    input clk,
    input rst,
   // input reg ready,//就绪信号ready,IDU能接收下一条指令
    input jump_en,
    input [31:0] jump_pc,
   // output reg valid,//valid信号IFU可以向IDU发送有效的指令
    output reg [31:0] pc,
    output reg [31:0] inst
);
wire [31:0] raddr;
wire [31:0] rd_sram_data;
reg rd_sram_en;
assign raddr=pc;
always@(*)begin
    inst=rd_sram_data;
end
/* initial begin
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
end */



always@(posedge clk)begin
    if(rst)begin
        rd_sram_en<=0;
        pc<=32'h80000000;
    end
    else begin
        if(rd_sram_en)begin
            rd_sram_en<=0;
        end
        else begin
            rd_sram_en<=1;
            if(jump_en)begin
                pc<=jump_pc;
            end
            else begin
                pc<=pc+32'h4;
            end
        end
    end
end

ysyx_23060240_SRAM_inst SRAM_inst(
    .clk(clk),
    .raddr(raddr),
    .r_en(rd_sram_en),
    .rdata(rd_sram_data)
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