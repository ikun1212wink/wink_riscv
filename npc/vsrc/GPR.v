module ysyx_23060240_GPR #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
    input clk,
    input [DATA_WIDTH-1:0] w_data,
    input [ADDR_WIDTH-1:0] r_rs1_addr,r_rs2_addr,
    input [ADDR_WIDTH-1:0] w_rd_addr,
    input w_en,//寄存器写使能信号
    output [DATA_WIDTH-1:0] rs1_data,rs2_data
);
    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  //初始化寄存器堆
    integer i;
    initial begin
        for(i=0;i<(2**ADDR_WIDTH);i=i+1)begin
            rf[i] = 0;
        end
    end
//写入寄存器
    always @(posedge clk) begin
        if (w_en&(w_rd_addr!=0)) 
            rf[w_rd_addr] <= w_data;
        else    
            rf[w_rd_addr] <= rf[w_rd_addr];
    end
//读取寄存器
    assign rs1_data=rf[r_rs1_addr];
    assign rs2_data=rf[r_rs2_addr];
endmodule
