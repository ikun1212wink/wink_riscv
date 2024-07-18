/* #include <monitor.h>
#include <common.h>
#include <memory.h>
#include <utils.h>
#include <stdio.h>
//对命令行参数进行解析
char *img_path = NULL;
int parse_args(int argc, char *argv[]) {
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

uint32_t* init_mem(char *img_path,int* num) { //初始化内存
    FILE* file = fopen(img_path, "rb");
    if (!file) {
        printf("Failed to open file: %s\n", img_path);
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


/* void execute(int n,uint32_t*memory){
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
}  */

/* uint32_t* init_monitor(int argc, char *argv[]){
    parse_args(argc, argv);
    //uint32_t*memory=init_mem();
    //return memory;
    //execute(2,memory);
}  */

