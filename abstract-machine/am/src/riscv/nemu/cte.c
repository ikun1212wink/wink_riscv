#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

//__am_irq_handle通过判断程序上下文内容（比如在riscv-nemu中通过分支mcause的值）来构造事件
//最终将事件和上下文一并通过回调函数传给操作系统，开始真正的异常处理....
Context* __am_irq_handle(Context *c) {

  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11:ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}
//异常处理入口函数是__am_asm_trap，这个函数在trap.S这个文件中用汇编语言实现，暂时不管
extern void __am_asm_trap(void);
//用于进行CTE相关的初始化操作，他还接受一个来自操作系统的事件处理回调函数指针
//当事件发生时，CTE会把事件和相关的上下文作为参数，来调用这个回调函数，交由操作系统做后续处理
bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}


//用于进行自陷操作，触发一个编号为EVENT_YIELD的事件
//异常种类存放到a7寄存器中，以及发起自陷，
//其中ecall会使得程序流程转到之前注册的异常处理入口函数中去执行，即__am_asm_trap
void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
