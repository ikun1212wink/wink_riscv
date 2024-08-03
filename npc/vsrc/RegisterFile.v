module RegisterFile #(ADDR_WIDTH = 8, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input [ADDR_WIDTH-1:0] raddr,
  input wen,
  output [DATA_WIDTH-1:0] rdata
);
  reg [DATA_WIDTH-1:0] gpr [2**ADDR_WIDTH-1:0];
    //初始化寄存器堆
    integer i;
    initial begin
        for(i=0;i<(2**ADDR_WIDTH);i=i+1)begin
            gpr[i] = 0;
        end
    end
    always @(posedge clk) begin
        if (wen) gpr[waddr] <= wdata;
    end
    assign rdata=gpr[raddr];
endmodule