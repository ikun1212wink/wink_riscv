#include <common.h>
#include <monitor.h>
#include <sim.h>
#include <memory.h>
extern char *img_path;
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;

int ebreak_flag=0;
int mem_number;


/* uint32_t* init_mem(const char* path, int* num) { //初始化内存
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
} */

/* 
uint32_t guest_to_host(uint32_t addr){ //虚拟地址转换成物理地址
  return addr-0x80000000;
}

uint32_t pmem_read(uint32_t*memory,uint32_t vaddr){ //物理地址读取函数
  uint32_t paddr=guest_to_host(vaddr);
  return memory[paddr/4];
} */



extern "C" void npc_trap(){//HIT GOOD TRAP
  ebreak_flag=1;
  dump_wave();
  dut.final();
  tfp->close();
}

 void execute(int n,uint32_t*memory){
  if(n>0){
    for (;n > 0; n --) {
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
    dump_wave();
    dut.final();
    tfp->close();
  }
  else if(n<0) {
    while(!ebreak_flag){  
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
  }
} 



int main(int argc,char *argv[]){
  parse_args(argc, argv);
  uint32_t*memory=init_mem(img_path,&mem_number);
  sim_init();
  reset(10);
/*   if(ebreak_flag){
    printf(COLOR_GREEN "HIT GOOD TRAP!" COLOR_RESET "\n");
  }
  else {
    execute(-1,memory);
  } */

/*   while(!ebreak_flag){  
    printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
    dut.inst=pmem_read(memory,dut.pc);
    printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
    single_cycle();
  } */

  execute(-1,memory); 
   if(ebreak_flag){
    printf(COLOR_GREEN "HIT GOOD TRAP!" COLOR_RESET "\n");
  }
  printf(COLOR_RED "SIMULATION END!" COLOR_RESET "\n");
  return 0;
}