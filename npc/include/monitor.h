#ifndef __MONITOR__H__
#define __MONITOR__H__
#include <common.h>
int parse_args(int argc, char *argv[]);
void init_monitor(int argc, char *argv[]);
extern char *img_path;
void sdb_mainloop();
#endif  //!__MONITOR__H__