cmd_/home/wink/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/nemu-main.o := unused

source_/home/wink/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/nemu-main.o := src/nemu-main.c

deps_/home/wink/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/nemu-main.o := \
    $(wildcard include/config/target/am.h) \
  /home/wink/ysyx-workbench/nemu/include/common.h \
    $(wildcard include/config/mbase.h) \
    $(wildcard include/config/msize.h) \
    $(wildcard include/config/isa64.h) \
  /home/wink/ysyx-workbench/nemu/include/macro.h \
  /home/wink/ysyx-workbench/nemu/include/debug.h \
  /home/wink/ysyx-workbench/nemu/include/utils.h \
    $(wildcard include/config/target/native/elf.h) \

/home/wink/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/nemu-main.o: $(deps_/home/wink/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/nemu-main.o)

$(deps_/home/wink/ysyx-workbench/nemu/build/obj-riscv32-nemu-interpreter/src/nemu-main.o):
