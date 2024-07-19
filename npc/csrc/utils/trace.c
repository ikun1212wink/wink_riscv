#include <common.h>
#include <sim.h>
#include <memory.h>
#include <locale.h>
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void itrace(){
/*     char logbuf[1000000000000000];
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
    dut.pc, (uint8_t *)&dut.inst, ilen);  */

    char result[256];

    // 定义指令地址和指令数据
    uint64_t pc = 0x12345678;
    uint8_t code[] = {0x90, 0x90, 0x90, 0x90}; // 示例数据，你需要提供实际的指令数据和长度

    // 调用 disassemble 函数获取反汇编结果
    disassemble(result, 100000000, pc, code, sizeof(code));

    printf("%s\n",result);
}