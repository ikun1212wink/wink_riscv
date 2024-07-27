#include <am.h>
#include </home/wink/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h>
# define DEVICE_BASE 0xa0000000
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = 0;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
