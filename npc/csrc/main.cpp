#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

int ebreak_flag=0;
int mem_number;
#define IMG_PATH "/home/wink/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin"



/* static const uint32_t img[]={
  0b00000000010100000000000010010011,
  0b00000000000100000000000100010011,
  0b00000000001000000000000100010011,
  0b00000000010100001000000100010011,
  0b0000 0000 0001 0000 0000 0000 0111 0011
  //00100073
}; */


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtop dut;

/* uint32_t *init_mem(int num){
  uint32_t* memory=(uint32_t*)malloc(num*sizeof(uint32_t) );
  memcpy(memory,img,sizeof(img));
  if(memory==NULL){
    exit(0);
  }
  return memory;
} */

//初始化内存
uint32_t* init_mem(const char* path, int* num) {
    FILE* file = fopen(path, "rb");
    if (!file) {
        printf("Failed to open file: %s\n", path);
        return NULL;
    }

    // 获取文件大小
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    // 计算需要的数组大小
    *num = fileSize / sizeof(uint32_t);
    uint32_t* memory = (uint32_t*)malloc(*num * sizeof(uint32_t));
    if (!memory) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return NULL;
    }

    size_t bytesRead = fread(memory, sizeof(uint8_t), fileSize, file);
    fclose(file);

    if (bytesRead != fileSize) {
        printf("Failed to read the complete file.\n");
        free(memory);
        return NULL;
    }

    return memory;
}


uint32_t guest_to_host(uint32_t addr){
  return addr-0x80000000;
}

uint32_t pmem_read(uint32_t*memory,uint32_t vaddr){
  uint32_t paddr=guest_to_host(vaddr);
  return memory[paddr/4];
};


void sim_init(){
  Verilated::traceEverOn(true);
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  dut.trace(tfp,0);
  tfp->open("wave.vcd");
}

void dump_wave(){
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}

void single_cycle(){
  dut.clk=0;dut.eval();
  dut.clk=1;dut.eval();
}

void reset(int n){
  dut.rst=1;
  while(n-->0) single_cycle();
  dut.rst=0;
}

extern "C" void npc_trap(){
  ebreak_flag=1;
  dump_wave();
  dut.final();
  tfp->close();

}

int main(){
  uint32_t*memory=init_mem(IMG_PATH,&mem_number);
  sim_init();
  reset(10);
  while(!ebreak_flag){  
    printf("pc:0x%x\n",dut.pc);
    dut.inst=pmem_read(memory,dut.pc);
    single_cycle();
    dump_wave();
  }
}