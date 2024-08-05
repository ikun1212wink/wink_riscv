module ysyx_23060240_SRAM_LSU(
    input clk,
    input [31:0] raddr,
    input [31:0] waddr,
    input [7:0] wmask,
    input w_en,
    input r_en,
    input [31:0] wdata,
    output reg [31:0] rdata
);

    reg [31:0] rdata_temp;

    import "DPI-C" function int pmem_read(input int raddr);
    /* verilator lint_off LATCH */
    always@(*)begin
        rdata_temp=r_en ? pmem_read(raddr) : 32'h0;
    end

    import "DPI-C" function void pmem_write(input int waddr,input int wdata,input byte wmask);
    /* verilator lint_off LATCH */
    always@(*)begin
        if(w_en==1)begin
            pmem_write(waddr,wdata,wmask);
        end
    end   
     
    always@(posedge clk)begin
        rdata<=rdata_temp;
    end
endmodule