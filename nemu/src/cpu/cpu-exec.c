/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

void wp_difftest();
void sdb_mainloop();
void output_inst();
//用于控制在执行指令时打印每条指令的执行步骤的数量
//当需要执行的指令数量少于MAX_INST_TO_PRINT时，会将全局变量g_print_step设置为true，表示需要打印每条指令的执行步骤。
//这样，在执行每条指令时，会通过调用puts函数将指令的执行步骤输出到屏幕上

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us  静态变量g_timer，用于记录CPU执行的总时间
static bool g_print_step = false; //用于判断是否打印每条指令的执行步骤。
//当执行指令数量小于MAX_INST_TO_PRINT时，将设置g_print_step为true，用于打印每条指令的执行步骤

void device_update();
//device_update函数通过定时更新设备状态，确保设备与模拟器之间的交互正常进行。
//具体的设备更新操作依赖于代码中的条件编译选项，可以包括更新VGA屏幕和处理SDL事件（如键盘输入和退出事件）

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {//用于追踪指令的执行轨迹并进行差分测试
//。根据配置选项的不同，可以将指令执行信息写入日志文件、打印到屏幕上，并进行差分测试以验证模拟器的正确性
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { 
    log_write("%s\n", _this->logbuf); 
    }//使用log_write函数将指令的执行信息写入日志文件
#endif
  if (g_print_step) {  //根据全局变量g_print_step的值，判断是否需要打印每条指令的执行步骤
    IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); //定义了CONFIG_ITRACE宏，则使用puts函数将指令的执行信息输出到屏幕上
    }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  //difftest_step函数用于比较模拟器的执行结果与参考模拟器的执行结果是否一致，以检测模拟器的正确性。

  IFDEF(CONFIG_WATCHPOINT,wp_difftest());

} 


//事实上, exec_once()函数覆盖了指令周期的所有阶段: 取指, 译码, 执行, 更新PC
//exec_once()接受一个Decode类型的结构体指针s, 这个结构体用于存放在执行一条指令过程中所需的信息, 
//包括指令的PC, 下一条指令的PC等. 还有一些信息是ISA相关的
//NEMU用一个结构类型ISADecodeInfo来对这些信息进行抽象, 具体的定义在nemu/src/isa/$ISA/include/isa-def.h中.
//exec_once()会先把当前的PC保存到s的成员pc和snpc中, 其中s->pc就是当前指令的PC, 而s->snpc则是下一条指令的PC, 
//这里的snpc是"static next PC"的意思
static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
//isa_exec_once(s)它会随着取指的过程修改s->snpc的值
  isa_exec_once(s);
//接下来代码将会通过s->dnpc来更新PC, 这里的dnpc是"dynamic next PC"的意思
  cpu.pc = s->dnpc;

//exec_once()中剩下与trace相关的代码
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

#ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
/* printf("%s\n",s->logbuf); */
#endif
}

static void execute(uint64_t n) {//静态函数execute，用于执行指定数量的指令
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    //代码会对一个用于记录客户指令的计数器加1
    g_nr_guest_inst ++;
    //然后进行一些trace和difftest相关的操作(此时先忽略), 
    //然后检查NEMU的状态是否为NEMU_RUNNING, 若是, 则继续执行下一条指令, 否则则退出执行指令的循环.
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }
  //根据nemu_state.state的值，进行不同的处理。如果状态是结束或中止状态，则打印相关信息并返回。否则，将状态设置为运行状态。

  uint64_t timer_start = get_time();//get_time()函数用于获取当前时间与引导时间之间的时间差，以提供相对时间信息

  execute(n);

  output_inst();

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}

