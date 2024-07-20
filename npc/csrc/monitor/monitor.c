#include <monitor.h>
#include <memory.h>
#include <difftest.h>
#define CONFIG_ISA_riscv 1
#define CONFIG_ITRACE 1

//一些函数和变量的定义
void init_disasm(const char *triple);
char *img_path = NULL;
static int difftest_port = 1234;
void parse_elf(const char *elf_file);
static char *elf_file = NULL;
static char *diff_so_file = NULL;
//对命令行参数进行解析
int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"img"      , required_argument, NULL, 'i'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "d:i:e:", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 'i': img_path = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void welcome() {
/*   Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__); */
  printf(COLOR_YELLOW "Welcome to RISCV32E-NPC!\n" COLOR_RESET);
  printf(COLOR_YELLOW "For help, type \"help\"\n" COLOR_RESET);
/*   Log("Exercise: Please remove me in the source code and compile NEMU again."); */
  //assert(0);
}

void init_monitor(int argc, char *argv[]) {
  parse_args(argc, argv);
  welcome();
  /* Initialize elf */
  parse_elf(elf_file);
  long size=img_size();
  init_difftest(diff_so_file, size, difftest_port);
  //static char *diff_so_file_test = diff_so_file ;
  #ifndef CONFIG_ISA_loongarch32r
  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv,
      MUXDEF(CONFIG_RV64,      "riscv64",
                               "riscv32"),
                               "bad"))) "-pc-linux-gnu"
  ));
#endif
}