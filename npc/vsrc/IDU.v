module ysyx_23060240_IDU(
    input [31:0] inst,
    output alu_a_sel,
    output [1:0] alu_b_sel,
    output w_en,
    output reg [1:0] w_sel,//后续使用模块译码
    output jump_jtype,
    output jump_ecall,
    output jump_mret,
    output reg [2:0] branch_type,//后续使用模块译码
    output reg [3:0] alu_func,//后续使用模块译码
    output reg [2:0] memory_rd_ctrl,//后续使用模块译码
    output reg [7:0] memory_wr_ctrl,//后续使用模块译码
    output mem_rd_en,
    output mem_wr_en,
    //用于ftrace
    output is_jal,
    output is_jalr,
    //写系统寄存器
    output w_csr_en,
    output r_csr_en
);
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [11:0] funct12;
wire [24:0] sys_funct;
/* wire alu_a_sel_imm,alu_a_sel_pc; */
import "DPI-C" function void npc_trap();

assign opcode=inst[6:0];
assign funct3=inst[14:12];
assign funct7=inst[31:25];
assign funct12=inst[31:20];
assign sys_funct=inst[31:7];
//指令名称
wire    is_lui;
wire    is_auipc;
//wire    is_jal;
//wire    is_jalr;
wire    is_beq;
wire    is_bne;
wire    is_blt;
wire    is_bge;
wire    is_bltu;
wire    is_bgeu;
wire    is_lb;
wire    is_lh;
wire    is_lw;
wire    is_lbu;
wire    is_lhu;
wire    is_sb;
wire    is_sh;
wire    is_sw;
wire    is_addi;
wire    is_slti;
wire    is_sltiu;
wire    is_xori;
wire    is_ori;
wire    is_andi;
wire    is_slli;
wire    is_srli;
wire    is_srai;
wire    is_add;
wire    is_sub;
wire    is_sll;
wire    is_slt;
wire    is_sltu;
wire    is_xor;
wire    is_srl;
wire    is_sra;
wire    is_or;
wire    is_and;
wire    is_csrrs;
wire    is_csrrw;
wire    is_ecall;
wire    is_mret;

assign  is_lui  = (opcode == 7'h37) ;
assign  is_auipc= (opcode == 7'h17) ;
assign  is_jal  = (opcode == 7'h6F) ;

assign  is_jalr = (opcode == 7'h67) && (funct3 ==3'h0) ;
assign  is_beq  = (opcode == 7'h63) && (funct3 ==3'h0) ;
assign  is_bne  = (opcode == 7'h63) && (funct3 ==3'h1) ;
assign  is_blt  = (opcode == 7'h63) && (funct3 ==3'h4) ;
assign  is_bge  = (opcode == 7'h63) && (funct3 ==3'h5) ;
assign  is_bltu = (opcode == 7'h63) && (funct3 ==3'h6) ;
assign  is_bgeu = (opcode == 7'h63) && (funct3 ==3'h7) ;
assign  is_lb   = (opcode == 7'h03) && (funct3 ==3'h0) ;
assign  is_lh   = (opcode == 7'h03) && (funct3 ==3'h1) ;
assign  is_lw   = (opcode == 7'h03) && (funct3 ==3'h2) ;
assign  is_lbu  = (opcode == 7'h03) && (funct3 ==3'h4) ;
assign  is_lhu  = (opcode == 7'h03) && (funct3 ==3'h5) ;
assign  is_sb   = (opcode == 7'h23) && (funct3 ==3'h0) ;
assign  is_sh   = (opcode == 7'h23) && (funct3 ==3'h1) ;
assign  is_sw   = (opcode == 7'h23) && (funct3 ==3'h2) ;
assign  is_addi = (opcode == 7'h13) && (funct3 ==3'h0) ;
assign  is_slti = (opcode == 7'h13) && (funct3 ==3'h2) ;
assign  is_sltiu= (opcode == 7'h13) && (funct3 ==3'h3) ;
assign  is_xori = (opcode == 7'h13) && (funct3 ==3'h4) ;
assign  is_ori  = (opcode == 7'h13) && (funct3 ==3'h6) ;
assign  is_andi = (opcode == 7'h13) && (funct3 ==3'h7) ;
assign  is_csrrs= (opcode == 7'h73) && (funct3 ==3'h2) ;
assign  is_csrrw= (opcode == 7'h73) && (funct3 ==3'h1) ;
assign  is_ecall= (opcode == 7'h73) && (sys_funct== 25'h0);
assign  is_mret = (opcode == 7'h73) && (sys_funct== 25'h604000);

assign  is_slli = (opcode == 7'h13) && (funct3 ==3'h1) && (funct7 == 7'h00);
assign  is_srli = (opcode == 7'h13) && (funct3 ==3'h5) && (funct7 == 7'h00);
assign  is_srai = (opcode == 7'h13) && (funct3 ==3'h5) && (funct7 == 7'h20);
assign  is_add  = (opcode == 7'h33) && (funct3 ==3'h0) && (funct7 == 7'h00);
assign  is_sub  = (opcode == 7'h33) && (funct3 ==3'h0) && (funct7 == 7'h20);
assign  is_sll  = (opcode == 7'h33) && (funct3 ==3'h1) && (funct7 == 7'h00);
assign  is_slt  = (opcode == 7'h33) && (funct3 ==3'h2) && (funct7 == 7'h00);
assign  is_sltu = (opcode == 7'h33) && (funct3 ==3'h3) && (funct7 == 7'h00);
assign  is_xor  = (opcode == 7'h33) && (funct3 ==3'h4) && (funct7 == 7'h00);
assign  is_srl  = (opcode == 7'h33) && (funct3 ==3'h5) && (funct7 == 7'h00);
assign  is_sra  = (opcode == 7'h33) && (funct3 ==3'h5) && (funct7 == 7'h20);
assign  is_or   = (opcode == 7'h33) && (funct3 ==3'h6) && (funct7 == 7'h00);
assign  is_and  = (opcode == 7'h33) && (funct3 ==3'h7) && (funct7 == 7'h00);



//指令类型
wire    is_add_type;
wire    is_u_type;
wire    is_jump_type;
wire    is_b_type;
wire    is_r_type;
wire    is_i_type;
wire    is_s_type;

assign  is_add_type = is_auipc | is_jal | is_jalr | is_b_type | is_s_type 
                       | is_lb | is_lh  | is_lw   | is_lbu    | is_lhu   | is_add | is_addi ;
assign  is_u_type   = is_lui | is_auipc ;
assign  is_jump_type= is_jal ;
assign  is_b_type   = is_beq | is_bne | is_blt | is_bge | is_bltu | is_bgeu ;
assign  is_r_type   = is_add | is_sub | is_sll | is_slt | is_sltu | is_xor 
                    | is_srl | is_sra | is_or  | is_and ;
assign  is_i_type   = is_jalr | is_lb   | is_lh    | is_lw   | is_lbu | is_lhu 
                    | is_addi | is_slti | is_sltiu | is_xori | is_ori | is_andi
                    | is_slli | is_srli | is_srai  | is_csrrs|is_csrrw;
assign  is_s_type   = is_sb | is_sh | is_sw ;

//寄存器写使能信号
assign w_en     =  is_u_type|is_jump_type|is_i_type|is_r_type;
//存储器读使能
assign mem_rd_en = is_lb|is_lh|is_lw|is_lbu|is_lhu;
//存储器写使能
assign mem_wr_en = is_sb|is_sh|is_sw;
//系统寄存器写使能
assign w_csr_en = is_csrrs|is_csrrw;
//系统寄存器读使能
assign r_csr_en = is_csrrs|is_csrrw;

//寄存器写入数据类型选择（后面要改用标准译码器模块）
always@(*)
begin
    if(is_jalr|is_jal)begin//存入存储器的类型：pc+4
        w_sel=2'b01;
    end
    else if(is_addi|is_slti|is_sltiu|is_xori|is_ori|is_andi|is_slli|is_srli|is_srai|
            is_r_type|
            is_u_type)begin//存入寄存器的类型：ALU的计算结果
        w_sel=2'b10;
    end
    else if(is_lb | is_lh | is_lw | is_lbu | is_lhu)begin//存入寄存器的类型：内存中的数据
        w_sel=2'b11;
    end
    else if(is_csrrs | is_csrrw)begin
        w_sel=2'b00;
    end
    else begin
        w_sel=2'b00;
    end
end  
//J跳转使能
assign jump_jtype = is_jump_type|is_jalr|is_jal;
//ecall跳转使能
assign jump_ecall = is_ecall;
//mret跳转使能
assign jump_mret = is_mret; 

//分支类型选择
always@(*)begin
    case({is_beq, is_bne, is_blt, is_bge, is_bltu, is_bgeu})
        6'b100000:branch_type=3'b001;//分支类型1：相等分支
        6'b010000:branch_type=3'b010;//分支类型2：不相等分支
        6'b001000:branch_type=3'b011;//分支类型3：小于时分支
        6'b000100:branch_type=3'b100;//分支类型4：大于等于时分支
        6'b000010:branch_type=3'b101;//分支类型5：无符号小于分支
        6'b000001:branch_type=3'b110;//分支类型6：无符号大于等于分支
        default:branch_type=3'b000;
    endcase
end

//加法器a口数据选择
assign alu_a_sel    = is_s_type|is_i_type|is_r_type;

//加法器b口数据选择
assign alu_b_sel    =  (is_r_type==1'b1) ? 2'b00 :
                       (is_csrrs ==1'b1) ? 2'b01 :
                       (is_csrrw ==1'b1) ? 2'b10 : 2'b11;
//加法器模式选择（后面要改用标准译码器模块）
always@(*)
begin
    case({(is_auipc|is_jal|is_jalr|is_b_type|is_s_type|is_lb|is_lh|is_lw|is_lbu|is_lhu|is_add|is_addi),
            is_sub |is_csrrw,
            (is_sll|is_slli),
            (is_srl|is_srli),
            (is_sra|is_srai),
            (is_slt|is_slti),
            (is_sltu|is_sltiu),
            (is_xor|is_xori),
            (is_or|is_ori|is_csrrs),
            (is_and|is_andi),
             is_lui })
        11'b10000000000:  alu_func=4'b0000;//ALU功能0  直接相加 
        11'b01000000000:  alu_func=4'b1000;//ALU功能8  直接相减
        11'b00100000000:  alu_func=4'b0001;//ALU功能1  （sll）左移rs2的低五位,空位补0  (slli)左移shamt的低五位,空位补0,仅当shamt[5]=0该指令有效
        11'b00010000000:  alu_func=4'b0101;//ALU功能5  （srl,srli）作用和功能1同理
        11'b00001000000:  alu_func=4'b1101;//ALU功能13 （sra,srai）sra:rs1右移rs2的第五位，高位用rs1的最高位填充   
        11'b00000100000:  alu_func=4'b0010;//ALU功能2  （slt,slti）slt:视为补码比较rs1,rs2,rs1更小，向rd写入1 
        11'b00000010000:  alu_func=4'b0011;//ALU功能3  （sltu,sltiu）和功能2差不多，但是看成无符号数
        11'b00000001000:  alu_func=4'b0100;//ALU功能4  （xor,xori）rs1和rs2/imm 按位异或，结果写入rd 
        11'b00000000100:  alu_func=4'b0110;//ALU功能6  （csrrs,or,ori） rs1和rs2/imm按位或写入rd
        11'b00000000010:  alu_func=4'b0111;//ALU功能7  （and,andi） rs1和rs2/imm按位与写入rd
        11'b00000000001:  alu_func=4'b1110;//ALU功能14  lui 将20位的imm符号拓展后左移12位，并将低12位置0,结果写入rd 
        default:alu_func=4'b0000;
    endcase
end

//[2:0]memory_rd_ctrl 读内存模式选择器
always@(*)
begin
    case({is_lb,is_lbu,is_lh,is_lhu,is_lw})
        5'b10000:  memory_rd_ctrl=3'b001;
        5'b01000:  memory_rd_ctrl=3'b010;
        5'b00100:  memory_rd_ctrl=3'b011;
        5'b00010:  memory_rd_ctrl=3'b100;
        5'b00001:  memory_rd_ctrl=3'b101;
        default:memory_rd_ctrl=3'b000;
    endcase
end

//[1:0]memory_wr_ctrl 写内存模式选择器
always@(*)
begin
    case({is_sb,is_sh,is_sw})
        3'b100:  memory_wr_ctrl=8'b00000001;
        3'b010:  memory_wr_ctrl=8'b00000010;
        3'b001:  memory_wr_ctrl=8'b00000011;
        default:memory_wr_ctrl=8'b00000000;
    endcase
end  

always@(*)begin
    if(inst==32'b00000000000000000000000001101111)begin
        npc_trap();
    end
end
endmodule