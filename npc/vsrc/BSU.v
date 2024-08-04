module ysyx_23060240_BSU(
    input [31:0] rs1,
    input [31:0] rs2,
    input [2:0] branch_type,
    output reg jump_branch
);
wire signed 	[31:0] signed_rs1;
wire signed 	[31:0] signed_rs2;
wire unsigned 	[31:0] unsigned_rs1;
wire unsigned 	[31:0] unsigned_rs2;

assign signed_rs1 = rs1;
assign signed_rs2 = rs2; 
assign unsigned_rs1 = rs1;
assign unsigned_rs2 = rs2; 

always@(*)begin
    case(branch_type)
        3'b001:jump_branch=(signed_rs1==signed_rs2?1:0);//分支类型1：相等分支 beq
        3'b010:jump_branch=(signed_rs1!=signed_rs2?1:0);//分支类型2：不相等分支 bne
        3'b011:jump_branch=(signed_rs1<signed_rs2?1:0);//分支类型3：小于时分支 blt
        3'b100:jump_branch=(signed_rs1>=signed_rs2)?1:0;//分支类型4：大于等于时分支 bge
        3'b101:jump_branch=(unsigned_rs1<unsigned_rs2?1:0);//分支类型5：无符号小于分支 bltu
        3'b110:jump_branch=(unsigned_rs1>=unsigned_rs2)?1:0;//分支类型6：无符号大于等于分支 bgeu
        default:jump_branch=0;
    endcase
end

endmodule