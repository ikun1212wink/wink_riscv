#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char HEX[] = "0123456789ABCDEF";

int printf(const char *fmt, ...) {
    va_list args;
    va_start(args,fmt);
    //char *out=(char*)malloc(4000 * sizeof(char));
    char out[128];
    int ret= vsprintf(out, fmt, args);
    putstr(out);
    va_end(args);
    //free(out);
    return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap){
    char buffer[128];
    char *txt;//字符串类型和字符类型
    int num,len;
    int state=0;
    int i,j;
    for(i=0,j=0;fmt[i]!='\0';i++){
        switch(state){
            case 0://正常复制
                if(fmt[i]!='%'){
                    out[j]=fmt[i];
                    j++;
                }
                else{
                    state=1;
                }
                break;
            case 1://类型匹配
                switch(fmt[i]){
                    case 's':
                        txt=va_arg(ap,char*);
                        for(int k=0;txt[k]!='\0';k++){
                            out[j]=txt[k];
                            j++;
                        }
                        break;
                    case 'd':
                        num=va_arg(ap,int);
                        if(num==0){
                            out[j]='0';
                            j++;
                            break;
                        }
                        if(num<0){
                            out[j]='-';
                            j++;
                            num=-num;
                        }
                        for(len=0;num;num/=10,len++){
                            buffer[len]=HEX[num%10];
                        }
                        for(int k=len-1;k>=0;k--){
                            out[j]=buffer[k];
                            j++;
                        }
                        break;
                    case 'c':
                        out[j]=va_arg(ap,int);
                        j++;
                        break;
                    default:
/*                         putch(fmt[i-3]); 
                        putch(fmt[i-2]); 
                        putch(fmt[i-1]); 
                        putch(fmt[i]);  */
                      assert(0);
                }
            state=0;
            break;
        }
    }
    out[j]='\0';
    return j;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  int i;
  va_start(args,fmt);
  i=vsprintf(out,fmt,args);
  va_end(args);
  return i;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
