#include <am.h>
#include </home/wink/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h>
# define DEVICE_BASE 0xa0000000
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)


uint32_t boot_time_hi;
uint32_t boot_time_lo;
uint64_t boot_time = 0;

void __am_timer_init() {
  boot_time_hi = inl(RTC_ADDR+4);
  boot_time_lo = inl(RTC_ADDR);
  boot_time=(uint64_t)boot_time_hi<<32|boot_time_lo;
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi = inl(RTC_ADDR + 4) - boot_time_hi;
  uint32_t lo = inl(RTC_ADDR) - boot_time_lo;
  uint64_t time_now = (uint64_t)hi << 32 | lo;
  uptime->us = time_now; 
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
