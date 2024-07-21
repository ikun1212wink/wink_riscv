#ifndef __UTILS__H__
#define __UTILS__H__
// ----------- log -----------
#include <common.h>


#define ANSI_FMT(str, fmt) fmt str "\033[0m"

#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
    log_write(__VA_ARGS__); \
  } while (0)


#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, COLOR_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)



#endif  //!__UTILS__H__