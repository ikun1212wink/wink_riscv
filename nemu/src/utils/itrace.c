#include <common.h>
//iringbuf
#define MAX_IRINGBUF 16
typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;
ItraceNode iringbuf[MAX_IRINGBUF];
int pointer=0;
bool full=false;
void write_inst(word_t pc, uint32_t inst){
    iringbuf[pointer].pc = pc;
    iringbuf[pointer].inst = inst;
    if(pointer<MAX_IRINGBUF){
        pointer++;
    }
    else if(pointer==MAX_IRINGBUF){
        pointer=0;
        full=true;
    }
}

void output_inst(){
    for(int i=0;i<MAX_IRINGBUF;i++){
        if(i==pointer){
            printf("--> 0x%x\t0x%x\n",iringbuf[pointer].pc,iringbuf[pointer].inst);
        }
        else{
            printf("    0x%x\t0x%x\n",iringbuf[pointer].pc,iringbuf[pointer].inst);
        }
    }
}

