#include <common.h>
//iringbuf
#define MAX_IRINGBUF 16
char logbuff[MAX_IRINGBUF][128];
uint32_t buff[MAX_IRINGBUF];
int pointer=0;
bool full=false;
void write_inst(char *logbuf,uint32_t pc){
    memcpy(logbuff[pointer], logbuf, strlen(logbuf) + 1);
/*     printf("%s\t%d\n",logbuff[pointer],pointer); */
    buff[pointer]=pc;
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
            printf("--> %s\t0x%x\n",logbuff[i],buff[i]);
        }
        else{
            printf("    %s\t0x%x\n",logbuff[i],buff[i]);
        }
    }
}

