module ysyx_23060240_IDU(
    input [31:0] inst,
    output alu_a_sel,alu_b_sel,
    output w_en,
    output reg [1:0] w_sel,//后续使用模块译码
    output jump_en,
    output reg [3:0] alu_func//后续使用模块译码
);
wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [11:0] funct12;
/* wire alu_a_sel_imm,alu_a_sel_pc; */
import "DPI-C" function void npc_trap();
assign opcode=inst[6:0];
assign funct3=inst[14:12];
assign funct7=inst[31:25];
assign funct12=inst[31:20];

//指令名称
wire    is_lui;
wire    is_auipc;
wire    is_jal;
wire    is_jalr;
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
                    | is_lb | is_lh | is_lw | is_lbu | is_lhu | is_add | is_addi ;
assign  is_u_type   = is_lui | is_auipc ;
assign  is_jump_type= is_jal ;
assign  is_b_type   = is_beq | is_bne | is_blt | is_bge | is_bltu | is_bgeu ;
assign  is_r_type   = is_add | is_sub | is_sll | is_slt | is_sltu | is_xor 
                    | is_srl | is_sra | is_or | is_and ;
assign  is_i_type   = is_jalr | is_lb | is_lh | is_lw | is_lbu | is_lhu 
                    | is_addi | is_slti | is_sltiu | is_xori | is_ori | is_andi
                    | is_slli | is_srli | is_srai ;
assign  is_s_type   = is_sb | is_sh | is_sw ;

//寄存器写使能信号
assign w_en     =  is_u_type|is_jump_type|is_i_type|is_r_type;
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
    else begin
        w_sel=2'b00;
    end
end  
//跳转使能
assign jump_en = is_jump_type|is_jalr|is_jal;
//加法器a口数据选择
assign alu_a_sel    = is_s_type|is_i_type|is_r_type;
//加法器b口数据选择
assign alu_b_sel    =  ~is_r_type ;
//加法器模式选择（后面要改用标准译码器模块）
always@(*)
begin
    case({(is_auipc|is_jal|is_jalr|is_b_type|is_s_type|is_lb|is_lh|is_lw|is_lbu|is_lhu|is_add|is_addi),is_sub,(is_sll|is_slli),(is_srl|is_srli),(is_sra|is_srai),(is_slt|is_slti),(is_sltu|is_sltiu),(is_xor|is_xori),(is_or|is_ori),(is_and|is_andi),is_lui})
        11'b10000000000:  alu_func=4'b0000;
        11'b01000000000:  alu_func=4'b1000;
        11'b00100000000:  alu_func=4'b0001;
        11'b00010000000:  alu_func=4'b0101;
        11'b00001000000:  alu_func=4'b1101;
        11'b00000100000:  alu_func=4'b0010;
        11'b00000010000:  alu_func=4'b0011;
        11'b00000001000:  alu_func=4'b0100;
        11'b00000000100:  alu_func=4'b0110;
        11'b00000000010:  alu_func=4'b0111;
        11'b00000000001:  alu_func=4'b1110; 
        default:alu_func=4'b0000;
    endcase
end

/* assign alu_func=4'b0000;
assign w_en=1'b1;

assign alu_a_sel_imm=1'b1;
assign alu_a_sel_pc=1'b0;
assign alu_b_sel=1'b1; */

/* ysyx_23060240_MuxKeyWithDefault #(8,7,1) alu_a_sel(
    alu_a_sel,opcode,1'b1,{
        7'b0010111,alu_a_sel_pc,//auipc
        7'b0110111,alu_a_sel_imm,//lui
        7'b1100011,alu_a_sel_imm,//beq,bne,blt,bge,bltu,bgeu
        7'b1101111,alu_a_sel_imm,//jal
        7'b1100111,alu_a_sel_imm,//jalr
        7'b0000011,alu_a_sel_imm,//lb,lh,lw,lbu,lhu
        7'b0100011,alu_a_sel_imm,//sb,sh,sw
        7'b0010011,alu_a_sel_imm//addi,slti,sltiu,xori,ori,andi,slli,srli,srai
    }
); */
always@(*)begin
    if(inst==32'b00000000000100000000000001110011)begin
        npc_trap();
    end
end
endmodule