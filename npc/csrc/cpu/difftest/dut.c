#include <difftest.h>
#include <utils.h>
#include <memory.h>
#include <sim.h>
#include <config.h>
NPC_CPU_state npc_dut;
extern int quit_sdb;

#define DIFFTEST

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

//进行各种初始化工作，完成初始化工作之后，DUT和REF就处于相同的状态了
void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr =(void (*)(uint64_t)) dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", COLOR_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
  
    
//我知道了，写在这里不能实时改变npc结构体的值，要写在执行那里
  memcpy(&npc_dut.pc,&dut.pc,sizeof(dut.pc));
  memcpy(npc_dut.gpr,&(dut.rootp->top__DOT__GPR__DOT__rf),sizeof(dut.rootp->top__DOT__GPR__DOT__rf));

  uint32_t reset_vector=(uint32_t)0x80000000;
  uint32_t *npc_guest_to_host=init_mem();//npc程序实际位置的指针

  ref_difftest_init(port);
  ref_difftest_memcpy(reset_vector,npc_guest_to_host, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&npc_dut, DIFFTEST_TO_REF);
//  printf("%x\n",npc_dut.pc);
}



const char *regs2[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

bool isa_difftest_checkregs(NPC_CPU_state *ref_r, vaddr_t pc) {
  for(int i=0;i<32;i++){
    if((ref_r->gpr[i]!=npc_dut.gpr[i])||(ref_r->pc!=npc_dut.pc)){
      printf("ref-pc=0x%08x\n",ref_r -> pc-4);
      printf("dut-pc=0x%08x\n",npc_dut.pc-4);
      printf("ref:%s = 0x%08x\n",regs2[i],ref_r->gpr[i]);
      printf("dut:%s = 0x%08x\n",regs2[i],npc_dut.gpr[i]);

      exit(1);
    }
  }
  return true;
}




static void checkregs(NPC_CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    printf("checkregs fail !!!\n");
    quit_sdb=1;
    //isa_reg_display();
  }
}




//该函数会在cpu_exec主循环中被调用
//NEMU执行完一条指令后，就在difftest_step中执行相同的指令，然后读出REF中的寄存器，并进行对比
//不同ISA的寄存器有所不同, 框架代码把寄存器对比抽象成一个ISA相关的API, 即isa_difftest_checkregs()函数（nemu/src/isa/$ISA/difftest/dut.c）
void difftest_step(vaddr_t pc, vaddr_t npc) {
  memcpy(&npc_dut.pc,&dut.pc,sizeof(dut.pc));
  memcpy(npc_dut.gpr,&(dut.rootp->top__DOT__GPR__DOT__rf),sizeof(dut.rootp->top__DOT__GPR__DOT__rf));
  NPC_CPU_state ref_r;
  //skip_dut_nr_inst=0
  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
      printf("\n");
      assert(0);
    return;
  }
//is_skip_ref=0;
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&npc_dut, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
//问题出在这里
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //上面代码我的理解是同步模拟器和NEMU的指令状态


  checkregs(&ref_r, pc);// 调用checkregs函数，将当前CPU的状态和ref_r进行比较，检查是否有寄存器状态不一致的情况
}

#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif