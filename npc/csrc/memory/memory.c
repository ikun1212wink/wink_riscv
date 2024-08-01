#include <memory.h>
#include <monitor.h>
#include <cpu.h>
#include <difftest.h>
#include <utils.h>
extern char *img_path;
int mem_number;
uint32_t memory[0x8000000];
uint32_t guest_to_host(uint32_t addr){ //虚拟地址转换成物理地址
  return addr-0x80000000;
}

/* uint32_t pmem_read(uint32_t*memory,uint32_t vaddr){ //物理地址读取函数
  uint32_t paddr=guest_to_host(vaddr);
  return memory[paddr/4];
} */

//初始化内存,返回内存的地址
  uint32_t* init_mem() { 
    //printf("init memoty!!!\n");
    int* num=&mem_number;
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
  //  *num +=2000000000;
    //memory = (uint32_t*)malloc(0x8000000);
    if (!memory) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return NULL;
    }

    size_t bytesRead = fread(memory, sizeof(uint8_t), fileSize, file);
    fclose(file);

    if (bytesRead != fileSize) {
        printf("Failed to read the complete file.\n");
       // free(memory);
        return NULL;
    }

    return memory;
}

//得到内存的大小
long img_size(){
  if(img_path==NULL){
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }
  FILE *fp = fopen(img_path, "rb");
  if (!fp) {
    printf("Failed to open file: %s\n", img_path);
    return -1;
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf(COLOR_BLUE "The image is %s, size = %ld\n" COLOR_RESET, img_path, size);
  return size;
}



extern "C" uint32_t pmem_read(int raddr) {
  //uint32_t* memory=init_mem();
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
  uint32_t aligned_addr = raddr & ~0x3u;//对齐地址，4字节为单位
  uint32_t img_rd_addr = guest_to_host(aligned_addr);//内存内的地址


  uint64_t us=get_time();
  if(raddr==0xa0000048){
    return (uint32_t)us;
  }
  else if(raddr==0xa000005c){
    return (uint32_t)(us >> 32);
  }
  else{
    return memory[img_rd_addr/4];
  }

}

extern "C" void pmem_write(int waddr, int wdata, char select) {
//  difftest_skip_ref();
  //uint32_t* memory=init_mem();
  uint32_t aligned_addr = waddr & ~0x3u;//对齐地址，4字节为单位
  uint32_t img_wr_addr = guest_to_host(aligned_addr);
  uint32_t old_mem_word = memory[img_wr_addr/4];
  uint32_t new_mem_word;
  int addr_select=waddr&0x00000003;
  switch (select)
  {
    case 1://sb存字节
      if(addr_select==0){
        new_mem_word=(0xFFFFFF00&old_mem_word)|(0x000000FF&wdata);
      }
      else if(addr_select==1){
        new_mem_word=(0xFFFF00FF&old_mem_word)|((0x000000FF&wdata)<<8);
      }
      else if(addr_select==2){
        new_mem_word=(0xFF00FFFF&old_mem_word)|((0x000000FF&wdata)<<16);
      }
      else if(addr_select==3){
        new_mem_word=(0x00FFFFFF&old_mem_word)|((0x000000FF&wdata)<<24);
      }
    break;
    case 2://sh存半字
      if(addr_select==0){
        new_mem_word=(0xFFFF0000&old_mem_word)+(0x0000FFFF&wdata);
      }
      else{
        new_mem_word=(0x0000FFFF&old_mem_word)+((0x0000FFFF&wdata)<<16);
      }
    break;
    case 3://sw
        new_mem_word=wdata;
        printf("2222\n");
    break;  
    default:
        new_mem_word=0;
    break;
  }
  if(waddr==0xa00003f8){
    memory[img_wr_addr/4]=new_mem_word;
    char data = (char)(memory[img_wr_addr / 4] & 0xFF);  // 获取低字节的数据
    putchar(data);
    printf("1111\n");
  }
  else{
    memory[img_wr_addr/4]=new_mem_word;
  }
}

