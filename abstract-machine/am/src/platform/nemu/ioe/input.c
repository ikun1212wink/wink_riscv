#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kdata = inl(KBD_ADDR);
  kbd->keydown = kdata & KEYDOWN_MASK ? true : false;
  kbd->keycode = kdata & ~KEYDOWN_MASK;
}
