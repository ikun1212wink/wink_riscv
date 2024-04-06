#include <common.h>
//iringbuf
#define MAX_IRINGBUF 16
typedef struct {
    char *logbuf;
}ItraceNode;
ItraceNode iringbuf[MAX_IRINGBUF];
int pointer=0;
bool full=false;
void write_inst(char *logbuf){
    iringbuf[pointer].logbuf=logbuf;
    if(pointer<MAX_IRINGBUF){
        pointer++;
    }
    else if(pointer==MAX_IRINGBUF){
        pointer=0;
        full=true;
    }
}
void output_inst(){

        printf("%s\n",iringbuf[2].logbuf);
}



