#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

//__am_irq_handle通过判断程序上下文内容（比如在riscv-nemu中通过分支mcause的值）来构造事件
//最终将事件和上下文一并通过回调函数传给操作系统，开始真正的异常处理....
Context* __am_irq_handle(Context *c) {//参数是汇编trap.s中 mv a0,sp中a0寄存器传进来的
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 0xb:ev.event = EVENT_YIELD; c->mepc+=4; break;
      default: ev.event = EVENT_ERROR; break;
    }
   // ev.event=EVENT_YIELD;
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

//kcontext用来创建上下文，并把返回的指针记录到PCB的cp中
//kstack是栈的范围，entry是内核线程的入口，arg则是内核线程的参数
//kcontext()要求内核线程不能从entry返回, 否则其行为是未定义的.
//需要在kstack的底部创建一个以entry为入口的上下文结构(目前你可以先忽略arg参数), 然后返回这一结构的指针.
Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *c=(Context *)kstack.end-1;
  c->mepc=(uintptr_t)entry;
  c->mstatus=0x1800;
  //c->mcause=0xb;
  c->gpr[10]=(uintptr_t)arg;//a0寄存器用来传递函数参数，以及保存函数的返回值
  return c;
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
