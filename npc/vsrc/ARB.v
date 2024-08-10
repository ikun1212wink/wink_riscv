module ysyx_23060240_ARB(
    input clk,
    input rst,

    //read address channel
    input [31:0] ifu_araddr,
    input ifu_arvalid,   
    output ifu_arready,
    //read data channel
    input ifu_rready,
    output ifu_rvalid,
    output [31:0] ifu_rdata,
    //write address channel
    input [31:0] ifu_awaddr,
    input ifu_awvalid,
    output ifu_awready,
    //write data channel
    input [31:0] ifu_wdata,
    input ifu_wvalid,
    output ifu_wready,    
    //write response channel
    input ifu_bready,
    output ifu_bvalid,


    //read address channel
    input [31:0] lsu_araddr,
    input lsu_arvalid,   
    output lsu_arready,
    //read data channel
    input lsu_rready,
    output lsu_rvalid,
    output [31:0] lsu_rdata,
    //write address channel
    input [31:0] lsu_awaddr,
    input lsu_awvalid,
    output lsu_awready,
    //write data channel
    input [31:0] lsu_wdata,
    input lsu_wvalid,
    output lsu_wready,    
    //write response channel
    input lsu_bready,
    output lsu_bvalid,


    //read address channel
    output [31:0] saxi_araddr,
    output saxi_arvalid,   
    input saxi_arready,
    //read data channel
    output saxi_rready,
    input saxi_rvalid,
    input [31:0] saxi_rdata,
    //write address channel
    output [31:0] saxi_awaddr,
    output saxi_awvalid,
    input saxi_awready,
    //write data channel
    output [31:0] saxi_wdata,
    output saxi_wvalid,
    input saxi_wready,    
    //write response channel
    output saxi_bready,
    input saxi_bvalid
);
reg arb_ready;
reg [1:0] state;
//ifu read data hand
always@(posedge clk)begin
    if(rst)begin
        arb_ready<=1'b1;
        state<=2'b11;
    end
    else begin
        if(arb_ready && ifu_arvalid)begin
            arb_ready<=1'b0;
            state<=2'b00;//ifu read
        end
        else if(arb_ready && lsu_arvalid)begin
            arb_ready<=1'b0;
            state<=2'b01;//lsu read
        end
        else if((arb_ready) && (lsu_awvalid || lsu_wvalid ))begin
            arb_ready<=1'b0;
            state<=2'b10;//lsu write
        end
        else if(ifu_rvalid && ifu_rready)begin
            arb_ready<=1'b1;
            state<=2'b11;
        end
        else if(lsu_rvalid && lsu_rready)begin
            arb_ready<=1'b1;
            state<=2'b11;
        end
        else if(lsu_bready && lsu_bvalid)begin
            arb_ready<=1'b1;
            state<=2'b11;
        end
        else begin
            arb_ready<=arb_ready;
        end
    end
end
assign saxi_araddr = (state == 2'b00) ? ifu_araddr : 
                     (state == 2'b01) ? lsu_araddr :
                     (state == 2'b10) ? lsu_araddr :  32'h80000000; 

assign saxi_arvalid = (state == 2'b00) ? ifu_arvalid : 
                     (state == 2'b01) ? lsu_arvalid :
                     (state == 2'b10) ? lsu_arvalid : 1'b0; 
/* assign saxi_arready = (state == 2'b00) ? ifu_arready : 
                     (state == 2'b01) ? lsu_arready :
                     (state == 2'b10) ? lsu_arready : ;  */
assign ifu_arready = (state == 2'b00) ? saxi_arready : 1'b0;
assign lsu_arready = (state == 2'b01) ? saxi_arready : 1'b0;

assign saxi_rready = (state == 2'b00) ? ifu_rready : 
                     (state == 2'b01) ? lsu_rready :
                     (state == 2'b10) ? lsu_rready : 1'b0; 
/* assign saxi_rvalid = (state == 2'b00) ? ifu_rvalid : 
                     (state == 2'b01) ? lsu_rvalid :
                     (state == 2'b10) ? lsu_rvalid : ;  */
assign ifu_rvalid = (state == 2'b00) ? saxi_rvalid : 1'b0;
assign lsu_rvalid = (state == 2'b01) ? saxi_rvalid : 1'b0;

/* assign saxi_rdata = (state == 2'b00) ? ifu_rdata : 
                     (state == 2'b01) ? lsu_rdata :
                     (state == 2'b10) ? lsu_rdata : ;  */
assign ifu_rdata = (state == 2'b00) ? saxi_rdata : 32'h0;
assign lsu_rdata = (state == 2'b01) ? saxi_rdata : 32'h0;

/* assign rvalid = (state == 2'b00) ? ifu_rvalid : 
                     (state == 2'b01) ? lsu_rvalid :
                     (state == 2'b10) ? lsu_rvalid : ;  */


assign saxi_awaddr = (state == 2'b00) ? ifu_awaddr : 
                     (state == 2'b01) ? lsu_awaddr :
                     (state == 2'b10) ? lsu_awaddr : 32'h80000000; 

assign saxi_awvalid = (state == 2'b00) ? ifu_awvalid : 
                     (state == 2'b01) ? lsu_awvalid :
                     (state == 2'b10) ? lsu_awvalid : 1'b0; 
/* assign saxi_awready = (state == 2'b00) ? ifu_awready : 
                     (state == 2'b01) ? lsu_awready :
                     (state == 2'b10) ? lsu_awready : ;  */
assign ifu_awready =(state == 2'b00) ? saxi_awready : 1'b0;
assign lsu_awready =((state == 2'b01)||(state == 2'b10)) ? saxi_awready:1'b0;

assign saxi_wdata = (state == 2'b00) ? ifu_wdata: 
                     (state == 2'b01) ? lsu_wdata :
                     (state == 2'b10) ? lsu_wdata : 32'h0; 
assign saxi_wvalid = (state == 2'b00) ? ifu_wvalid : 
                     (state == 2'b01) ? lsu_wvalid :
                     (state == 2'b10) ? lsu_wvalid : 1'b0; 
/* assign saxi_wready = (state == 2'b00) ? ifu_wready : 
                     (state == 2'b01) ? lsu_wready :
                     (state == 2'b10) ? lsu_wready : 0;  */
assign ifu_wready = (state == 2'b00) ? saxi_wready : 1'b0;
assign lsu_wready = ((state == 2'b01)||(state == 2'b10)) ? saxi_wready : 1'b0;

assign saxi_bready = (state == 2'b00) ? ifu_bready : 
                     (state == 2'b01) ? lsu_bready :
                     (state == 2'b10) ? lsu_bready : 1'b0;
/* assign saxi_bvalid = (state == 2'b00) ? ifu_bvalid : 
                     (state == 2'b01) ? lsu_bvalid :
                     (state == 2'b10) ? lsu_bvalid : 0;   */
assign ifu_bvalid = (state == 2'b00) ? saxi_bvalid : 1'b0;
assign lsu_bvalid = ((state == 2'b01)||(state == 2'b10)) ? saxi_bvalid : 1'b0;
endmodule