#include <common.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
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

void parse_elf(const char *elf_file) {
    FILE *file = fopen(elf_file, "rb");
    if (!file) {
        perror("打开文件失败");
        return;
    }

    // 读取 ELF 头
    Elf32_Ehdr ehdr;
    if (fread(&ehdr, 1, sizeof(ehdr), file) != sizeof(ehdr)) {
        perror("读取 ELF 头失败");
        fclose(file);
        return;
    }

    // 定位到节头表的开始位置并读取
    fseek(file, ehdr.e_shoff, SEEK_SET);
    Elf32_Shdr *shdrs = malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
    if (shdrs == NULL) {
        perror("内存分配失败");
        fclose(file);
        return;
    }
    if (fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, file) != ehdr.e_shnum) {
        perror("读取节头表失败");
        free(shdrs);
        fclose(file);
        return;
    }

    // 定位到字符串表：节头表中第 ehdr.e_shstrndx 条目指向字符串表
    Elf32_Shdr strTabSec = shdrs[ehdr.e_shstrndx];
    char *strTab = malloc(strTabSec.sh_size);
    if (strTab == NULL) {
        perror("内存分配失败");
        free(shdrs);
        fclose(file);
        return;
    }
    fseek(file, strTabSec.sh_offset, SEEK_SET);
    if (fread(strTab, 1, strTabSec.sh_size, file) != strTabSec.sh_size) {
        perror("读取字符串表失败");
        free(strTab);
        free(shdrs);
        fclose(file);
        return;
    }

    // 遍历节头表，打印每个节的名称
    for (int i = 0; i < ehdr.e_shnum; ++i) {
        Elf32_Shdr shdr = shdrs[i];
        if (shdr.sh_name < strTabSec.sh_size) {
            printf("Section %d: %s\n", i, &strTab[shdr.sh_name]);
        } else {
            printf("Section %d: <节名超出字符串表范围>\n", i);
        }
    }

    // 清理资源
    free(strTab);
    free(shdrs);
    fclose(file);
}








