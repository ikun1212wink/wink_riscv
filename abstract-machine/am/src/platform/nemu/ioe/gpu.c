#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32

void __am_gpu_init() {

}
//AM显示控制器信息, 可读出屏幕大小信息width和height. 另外AM假设系统在运行过程中, 屏幕大小不会发生变化.
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen_wh=inl(VGACTL_ADDR);
  uint32_t h=screen_wh&0x0000FFFF;
  uint32_t w=screen_wh>>16;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = 0
  };
}
//AM帧缓冲控制器, 可写入绘图信息, 向屏幕(x, y)坐标处绘制w*h的矩形图像. 图像像素按行优先方式存储在pixels中, 
//每个像素用32位整数以00RRGGBB的方式描述颜色. 若sync为true, 则马上将帧缓冲中的内容同步到屏幕上
/* void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
} */
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (!ctl->sync && (w == 0 || h == 0)) return;
  uint32_t *pixels = ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t screen_w = inl(VGACTL_ADDR) >> 16;
  //用于遍历要绘制的像素区域。在每个像素位置上，将pixels中的像素值复制到图形缓冲区中相应的位置
  for (int i = y; i < y+h; i++) {
    for (int j = x; j < x+w; j++) {
      //计算要绘制像素的位置，将 pixels 中对应位置的像素值复制到图形缓冲区中
      fb[screen_w*i+j] = pixels[w*(i-y)+(j-x)];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
