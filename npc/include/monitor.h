#ifndef __MONITOR_H__
#define __MONITOR_H__
#include <common.h>
int parse_args(int argc, char *argv[]);
uint32_t* init_mem() ;
uint32_t* init_monitor(int argc, char *argv[]);
#endif