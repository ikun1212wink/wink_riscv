module ysyx_23060240_pc(
    input clk,
    input rst,
    input jump_en,
    input [31:0] jump_pc,
    output reg [31:0] pc
);
//每个时钟周期pc+4
    wire [31:0] pc_plus4;
    assign pc_plus4=pc+32'h4;    
    always@(negedge clk)begin
        if(rst)begin
            pc<=2147483644; //0x7FFF FFFC
        end
        else begin
            if(jump_en)begin
                pc<=jump_pc;
            end
            else begin 
                pc<=pc_plus4;
            end
        end
    end
endmodule