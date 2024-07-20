#include <sim.h>
#include <memory.h>
#include <trace.h>
#include <stdlib.h>
#include <stdio.h>
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void itrace(){
    char logbuf[500];
    char *p=logbuf;
    p += snprintf(p, sizeof(logbuf), FMT_WORD ":", dut.pc);
    int ilen=4;
    int i;
    uint8_t *inst = (uint8_t *)&dut.inst;
    for (i = ilen - 1; i >= 0; i --) {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
  disassemble(p, logbuf + sizeof(logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, dut.pc, dut.pc), (uint8_t *)&dut.inst, ilen);
    printf("%s\n",logbuf);
}


//ftrace
// 全局变量
Elf32_Sym *global_symtab = NULL;
char *global_strtab = NULL;
int global_num_symbols = 0;
Elf32_Word global_strtab_size = 0;
int depth=0;

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

    Elf32_Shdr *shdrs = (Elf32_Shdr *)malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
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
    char *shstrtab = (char *)malloc(shstrtab_shdr.sh_size);
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
            global_symtab = (Elf32_Sym*)malloc(shdr.sh_size);
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
            global_strtab = (char*)malloc(shdr.sh_size);
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

void print_stack_frame(int depth) {
    for (int i = 0; i < depth; i++) {
        printf(" "); // 每层两个空格缩进
    }
}

void trace_func_call(uint32_t pc, uint32_t target,bool tail) {
    printf("0x%x:",pc);
    print_stack_frame(depth);
    const char *targe_name = find_func_name(target);
   // char *targe_name_or="???";
    if (targe_name) {
        printf(" call [%s@0x%x] ", targe_name,target);
    } 
    //else {
       // printf("0x%x: call [%s@0x%x]\n", pc, targe_name_or,target);
    //}
    if (tail){
        printf("(tail type call)");
    }
    printf("\n");
    depth++;
}

void trace_func_ret(uint32_t pc) {
    printf("0x%x:",pc);
    depth--;
    print_stack_frame(depth);
    const char *func_name = find_func_name(pc);
    if (func_name) {
        printf(" ret [%s]\n", func_name);
    } else {
       // printf("return to 0x%x\n", pc);
    }
}
