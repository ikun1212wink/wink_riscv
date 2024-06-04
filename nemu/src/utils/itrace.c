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
// 全局变量
Elf32_Sym *global_symtab = NULL;
char *global_strtab = NULL;
int global_num_symbols = 0;
Elf32_Word global_strtab_size = 0;

// 根据地址查找函数名
const char *find_func_name(paddr_t addr) {
    if (global_symtab == NULL || global_strtab == NULL) {
        return NULL;
    }
    for (int i = 0; i < global_num_symbols; i++) {
        Elf32_Sym sym = global_symtab[i];
        if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC && addr >= sym.st_value && addr < sym.st_value + sym.st_size) {
            return &global_strtab[sym.st_name];
        }
    }
    return NULL;
}

void trace_func_call(paddr_t pc, paddr_t target) {
    const char *pc_name = find_func_name(pc);
    if (pc_name ) {
        printf("call from %s to 0x%x\n", pc_name, target);
    } else {
        printf("call from 0x%x to 0x%x\n", pc, target);
    }
}

void trace_func_ret(paddr_t pc) {
    const char *func_name = find_func_name(pc);
    if (func_name) {
        printf("return to %s\n", func_name);
    } else {
        printf("return to 0x%x\n", pc);
    }
}

void parse_elf(const char *elf_file) {
    FILE *file = fopen(elf_file, "rb");
    if (!file) {
        perror("打开文件失败");
        return;
    }

    Elf32_Ehdr ehdr;
    if (fread(&ehdr, 1, sizeof(ehdr), file) != sizeof(ehdr)) {
        perror("读取 ELF 头失败");
        fclose(file);
        return;
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
        ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
        ehdr.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "不是有效的 ELF 文件\n");
        fclose(file);
        return;
    }

    if (ehdr.e_ident[EI_CLASS] != ELFCLASS32) {
        fprintf(stderr, "不是一个 32 位 ELF 文件\n");
        fclose(file);
        return;
    }

    Elf32_Shdr *shdrs = malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
    if (!shdrs) {
        perror("内存分配失败");
        fclose(file);
        return;
    }

    fseek(file, ehdr.e_shoff, SEEK_SET);
    if (fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, file) != ehdr.e_shnum) {
        perror("读取节头表失败");
        free(shdrs);
        fclose(file);
        return;
    }

    // 定位到字符串表并读取
    Elf32_Shdr shstrtab_shdr = shdrs[ehdr.e_shstrndx];
    char *shstrtab = malloc(shstrtab_shdr.sh_size);
    if (!shstrtab) {
        perror("内存分配失败");
        free(shdrs);
        fclose(file);
        return;
    }

    fseek(file, shstrtab_shdr.sh_offset, SEEK_SET);
    if (fread(shstrtab, 1, shstrtab_shdr.sh_size, file) != shstrtab_shdr.sh_size) {
        perror("读取节头字符串表失败");
        free(shstrtab);
        free(shdrs);
        fclose(file);
        return;
    }

    // 定位并读取符号表和对应的字符串表
    for (int i = 0; i < ehdr.e_shnum; i++) {
        Elf32_Shdr shdr = shdrs[i];
        if (shdr.sh_type == SHT_SYMTAB) {
            global_symtab = malloc(shdr.sh_size);
            if (!global_symtab) {
                perror("内存分配失败");
                break;
            }

            fseek(file, shdr.sh_offset, SEEK_SET);
            if (fread(global_symtab, 1, shdr.sh_size, file) != shdr.sh_size) {
                perror("读取符号表失败");
                free(global_symtab);
                global_symtab = NULL;
                break;
            }
            global_num_symbols = shdr.sh_size / sizeof(Elf32_Sym);
        } else if (shdr.sh_type == SHT_STRTAB && i != ehdr.e_shstrndx) {
            global_strtab = malloc(shdr.sh_size);
            if (!global_strtab) {
                perror("内存分配失败");
                break;
            }

            fseek(file, shdr.sh_offset, SEEK_SET);
            if (fread(global_strtab, 1, shdr.sh_size, file) != shdr.sh_size) {
                perror("读取符号字符串表失败");
                free(global_strtab);
                global_strtab = NULL;
                break;
            }
            global_strtab_size = shdr.sh_size;
        }
    }

    // 清理资源
    free(shstrtab);
    free(shdrs);
    fclose(file);
}









