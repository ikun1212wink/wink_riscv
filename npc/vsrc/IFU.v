module ysyx_23060240_IFU(
    input clk,
    input rst,
    input jump_en,
    input [31:0] jump_pc,
    input finish_1,
    input finish_2,
    output valid_1,
    output reg [31:0] pc,
    output reg [31:0] inst
);
wire [31:0] raddr;
wire [31:0] rd_sram_data;
reg rd_sram_en;
assign raddr=pc;
initial begin
    pc=32'h80000000;
    rd_sram_en=0;
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



ysyx_23060240_SRAM_IFU SRAM_IFU(
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