module ysyx_23060240_CSR(
    input [31:0] pc,
    input clk,
    input [11:0] csr_addr,
    input [31:0] w_csr_data,
    input w_csr_en,
    input r_csr_en,
    input jump_mret,
    input jump_ecall,
    output [31:0] r_csr_data
);
 // wire [31:0] r_csr_data;
    reg [31:0] pc_last;
    reg [31:0] csr_mepc;
    reg [31:0] csr_mcause;
    reg [31:0] csr_mstatus;
    reg [31:0] csr_mtvec;


    initial begin
        csr_mstatus=32'h1800;
        csr_mcause=32'hb;
        csr_mepc=32'h0;
        csr_mtvec=32'h0;
    end

    always@(posedge clk)begin
        pc_last<=pc;
    end

    //写csr寄存器
    always@(posedge clk)begin
        if(w_csr_en)begin
            if(csr_addr==12'h300)begin
                //csr_mstatus<=w_csr_data;
                csr_mstatus<=32'h1800;
            end
            else if(csr_addr==12'h305)begin
                csr_mtvec<=w_csr_data;
            end
            else if(csr_addr==12'h341)begin
                csr_mepc<=w_csr_data;
            end
            else if(csr_addr==12'h342)begin
                //csr_mcause<=w_csr_data;
                csr_mcause<=32'hb;
            end
            else begin
                csr_mstatus<=csr_mstatus;
                csr_mtvec<=csr_mtvec;
                csr_mepc<=csr_mepc;
                csr_mcause<=csr_mcause;
            end
        end
        else if(jump_ecall)begin
            csr_mepc<=pc_last;
            csr_mcause<=32'hb;
        end
        else begin
            csr_mstatus<=csr_mstatus;
            csr_mtvec<=csr_mtvec;
            csr_mepc<=csr_mepc;
            csr_mcause<=csr_mcause;
        end
    end
    
    //读取csr寄存器
    assign r_csr_data = ((csr_addr==12'h300)&&(r_csr_en)) ? csr_mstatus:
                        ((csr_addr==12'h305)&&(r_csr_en)) ? csr_mtvec:
                        ((csr_addr==12'h341)&&(r_csr_en)) ? csr_mepc:
                        ((csr_addr==12'h342)&&(r_csr_en)) ? csr_mcause: 
                        (jump_ecall==1'b1)    ? csr_mtvec : 
                        (jump_mret ==1'b1)    ? csr_mepc  : 32'h0;
endmodule