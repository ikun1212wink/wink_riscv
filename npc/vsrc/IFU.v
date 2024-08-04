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
assign raddr=pc;

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

//IFU的状态机
/*     reg rd_sram_en;
    reg [31:0] rd_sram_data;
    //信号定义
    reg current_state,next_state;
    //状态机参数
    localparam idle = 0;
    localparam wait_ready = 1;
    //第一段 更新当前的状态
    always@(posedge clk)begin
        if(rst)begin
            pc<=32'h80000000;
            current_state<=idle;
        end
        else begin
            current_state<=next_state;
        end
    end
    //第二段 判断状态转移条件，设置下一个状态
    always@(*)begin
        next_state=0;
        case(current_state)
            idle:
                if(valid)begin
                    next_state=wait_ready;
                end
                else begin
                    next_state=idle;
                end
            wait_ready:
                if(ready)begin
                    next_state=idle;
                end
                else begin
                    next_state=wait_ready;
                end
            default:
                next_state=0;
        endcase
    end
    //第三段 进行每个状态的输出
    always@(posedge clk)begin
        if(rst)begin
            valid=1;
        end
        else begin
            case(current_state)
                idle:
                    rd_sram_en<=1;
                wait_ready:
                    if(ready)begin
                        rd_sram_en<=0;
                        inst<=rd_sram_data;
                        if(jump_en)begin
                            pc<=jump_pc;
                        end
                        else begin
                            pc<=pc+32'h4;
                        end
                    end
                    else begin
                        rd_sram_en<=0;
                        inst<=inst;
                    end
                default: ;
            endcase
        end
    end */





import "DPI-C" function int pmem_read(input int pc);
always@(*)begin
    inst=pmem_read(pc);//取指令
end

/* ysyx_23060240_SRAM_inst SRAM_inst(
    .clk(clk),
    .raddr(raddr),
    .r_en(rd_sram_en),
    .rdata(rd_sram_data)
); */


/* RegisterFile mem_inst(
    .clk(clk),
    .wdata(32'h0),
    .waddr(8'b0),
    .raddr(pc[7:0]),
    .wen(1'b0),
    .rdata(inst)
); */




endmodule