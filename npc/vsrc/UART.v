module ysyx_23060240_UART(
    input clk,
    input rst,

    //read address channel
    input [31:0] uart_araddr,
    input uart_arvalid,   
    output reg uart_arready,

    //read data channel
    input uart_rready,
    output reg uart_rvalid,
    output [31:0] uart_rdata,

    //write address channel
    input [31:0] uart_awaddr,
    input uart_awvalid,
    output uart_awready, //

    //write data channel
    input [31:0] uart_wdata,
    input uart_wvalid,
    output uart_wready, //

     //write response channel
    input uart_bready,
    output uart_bvalid,  //
    output reg [7:0] uart_reg  //
);
localparam uart_addr = 32'ha00003f8;
//AXI write address channel
reg aw_hand;
always@(posedge clk)begin
    if(rst)begin
        uart_awready<=1'b1;
        aw_hand<=1'b0;
    end
    else begin
        if(uart_awready && uart_awvalid)begin
            uart_awready<=1'b0;
            aw_hand<=1'b1;
        end
        else if(uart_bready && uart_bvalid)begin
            uart_awready<=1'b1;
        end
        else if(aw_hand && w_hand)begin
            aw_hand<=1'b0;
        end
        else begin
            uart_awready<=uart_awready;
            aw_hand<=aw_hand;
        end
    end
end
//暂时存放写数据的地址
reg [31:0] waddr;
always@(posedge clk)begin
    if(rst)begin
        waddr<=32'ha0000000;
    end
    else begin
        if(uart_awready && uart_awvalid)begin
            waddr<=uart_awaddr;
        end
        else begin
            waddr<=waddr;
        end
    end
end
//AXI write data channel
reg w_hand;
always@(posedge clk)begin
     if(rst)begin
          uart_wready<=1'b1;
          w_hand<=1'b0;
     end
     else begin
          if(uart_wready && uart_wvalid)begin
            uart_wready<=1'b0;
            w_hand<=1'b1;
          end
          else if(uart_bready && uart_bvalid)begin
            uart_wready<=1'b1;
          end
          else if(w_hand && aw_hand)begin
            w_hand<=1'b0;
          end
          else begin
               uart_wready<=uart_wready;
               w_hand<=w_hand;
          end
     end
end
reg [31:0] wdata;//暂时存放写数据
always@(posedge clk)begin
    if(rst)begin
        wdata<=32'h0;
    end
    else begin
        if(uart_wready && uart_wvalid)begin
            wdata<=uart_wdata;
        end
        else begin
            wdata<=uart_wdata;
        end
    end
end
//AXI write respone channel
always@(posedge clk)begin
     if(rst)begin
          uart_bvalid<=1'b0;
     end
     else begin
          if(aw_hand && w_hand)begin
               uart_bvalid<=1'b1;
          end
          else if(uart_bvalid && uart_bready)begin
               uart_bvalid<=1'b0;
          end
          else begin
               uart_bvalid<=uart_bvalid;
          end
     end
end
//写设备寄存器
/* verilator lint_off LATCH */
always@(*)begin
    if(w_hand && aw_hand)begin
        if(waddr==uart_addr)begin
            uart_reg=wdata[7:0];
            $write("%c", uart_reg);
        end
    end
end

endmodule

