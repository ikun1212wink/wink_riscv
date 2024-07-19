#include <common.h>
#include <sim.h>
#include <memory.h>
#include <locale.h>
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
    disassemble(p, sizeof(logbuf) - (p - logbuf),
    dut.pc, (uint8_t *)&dut.inst, ilen); 
    printf("%s\n",logbuf);
}