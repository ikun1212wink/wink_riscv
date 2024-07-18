#include <common.h>
#include <utils.h>

int ebreak_flag=0;
int mem_number;
//#define IMG_PATH "/home/wink/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin"
static char *img_path = NULL;

//对命令行参数进行解析
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"img"      , required_argument, NULL, 'i'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "i:", table, NULL)) != -1) {
    switch (o) {
      case 'i': img_path = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}


VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtop dut;




uint32_t* init_mem(const char* path, int* num) { //初始化内存
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


uint32_t guest_to_host(uint32_t addr){ //虚拟地址转换成物理地址
  return addr-0x80000000;
}

uint32_t pmem_read(uint32_t*memory,uint32_t vaddr){ //物理地址读取函数
  uint32_t paddr=guest_to_host(vaddr);
  return memory[paddr/4];
};


void sim_init(){ //波形仿真使能函数
  Verilated::traceEverOn(true);
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  dut.trace(tfp,0);
  tfp->open("wave.vcd");
}

void dump_wave(){//波形记录函数
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}

void single_cycle(){//时钟驱动函数
  dut.clk=0;dut.eval();
  dump_wave();
  dut.clk=1;dut.eval();
  dump_wave();
}

void reset(int n){ //复位函数
  dut.rst=1;
  while(n-->0) single_cycle();
  dut.rst=0;
}

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
  }
  else {
    while(!ebreak_flag){  
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
  }
  dump_wave();
  dut.final();
  tfp->close();
} 



int main(int argc,char *argv[]){
  parse_args(argc, argv);
  uint32_t*memory=init_mem(img_path,&mem_number);
  sim_init();
  reset(10);
  if(ebreak_flag){
    printf(COLOR_GREEN "HIT GOOD TRAP!" COLOR_RESET "\n");
  }
  else {
    execute(-1,memory);
  }

/*   while(!ebreak_flag){  
    printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
    dut.inst=pmem_read(memory,dut.pc);
    printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
    single_cycle();
  } */
  printf(COLOR_RED "SIMULATION END!" COLOR_RESET "\n");
  return 0;
}