#include <memory.h>
#include <monitor.h>
extern char *img_path;
int mem_number;
uint32_t guest_to_host(uint32_t addr){ //虚拟地址转换成物理地址
  return addr-0x80000000;
}

uint32_t pmem_read(uint32_t*memory,uint32_t vaddr){ //物理地址读取函数
  uint32_t paddr=guest_to_host(vaddr);
  return memory[paddr/4];
}

uint32_t* init_mem() { //初始化内存
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