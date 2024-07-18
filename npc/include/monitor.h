#ifndef __MONITOR_H__
#define __MONITOR_H__
#include <common.h>
extern char *img_path;
int parse_args(int argc, char *argv[]);
uint32_t* init_mem(char *img_path,int* num);
uint32_t* init_monitor(int argc, char *argv[]);
#endif