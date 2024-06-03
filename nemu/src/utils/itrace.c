#include <common.h>
#include <elf.h>

//iringbuf
#define MAX_IRINGBUF 16

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;

ItraceNode iringbuf[MAX_IRINGBUF];
int pointer=-1;
void write_inst(word_t pc, uint32_t inst){
    if(pointer<MAX_IRINGBUF){
        pointer++;
    }
    else if(pointer==MAX_IRINGBUF){
        pointer=0;
    }
    iringbuf[pointer].pc = pc;
    iringbuf[pointer].inst = inst;
}

void output_inst(){
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    for(int i=0;i<MAX_IRINGBUF;i++){
        char p[128];
        memset(p, 0, sizeof(p));
        disassemble(p, sizeof(p), iringbuf[i].pc, (uint8_t *)&iringbuf[i].inst, 4);
        if(i==(pointer)){
            printf("--> 0x%x:\t%08x\t%s\n",iringbuf[i].pc,iringbuf[i].inst,p);
        }
        else{
            printf("    0x%x:\t%08x\t%s\n",iringbuf[i].pc,iringbuf[i].inst,p);
        }
    }
}

//mtrace
void display_pread(paddr_t addr,int len){
    printf("pread at "FMT_PADDR", len=%d\n",addr,len);
}
void display_pwrite(paddr_t addr,int len,word_t data){
    printf("pwrite at "FMT_PADDR", len=%d, data="FMT_WORD"\n",addr,len,data);
}


//ftrace
int call_depth=0;
void trace_func_call(paddr_t pc, paddr_t target){
    printf("call from:0x%x to 0x%x\n",pc,target);
}
void trace_func_ret(paddr_t pc){
    printf("return to 0x%x\n",pc);
}
