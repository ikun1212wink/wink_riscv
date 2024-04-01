module ysyx_23060240_pc(
    input clk,
    input rst,
    output reg [31:0] pc
);
//周个时钟周期pc+4
    wire [31:0] pc_plus4;
    assign pc_plus4=pc+32'h4;    
    always@(posedge clk)begin
        if(rst)begin
            pc<=0;
        end
        else begin
            pc<=pc_plus4;
        end
    end
endmodule