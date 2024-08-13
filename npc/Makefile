VSRCS += $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
VSRCS += $(shell find /home/wink/ysyx-workbench/ysyxSoC/perip -name "*.v")
VSRCS += /home/wink/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


#itrace ftrace
#CXXSRC += csrc/utils/disasm.cc
#CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LDFLAGS += $(shell llvm-config --libs)
ARGS ?= -e ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.elf
#CXX :=clang++

#difftest
ARGS_DIFF ?= -d ../nemu/build/riscv32-nemu-interpreter-so

#verilator
#TOP_NAME := ysyx_23060240
TOP_NAME := ysyxSoCFull
VERILATOR_FLAGS +=-cc --exe  --trace --build  -j --timing --autoflush --timescale "1ns/1ns" --no-timing 
VERILATOR_FLAGS += --top-module $(TOP_NAME)
VERILATOR_FLAGS += -I/home/wink/ysyx-workbench/ysyxSoC/perip/spi/rtl -I/home/wink/ysyx-workbench/ysyxSoC/perip/uart16550/rtl

LDFLAGS += -lreadline -lSDL2 -ldl

INC_PATH		+= $(NPC_HOME)/include
CFLAGS			+= -I$(INC_PATH)

#CFLAGS			+= -g -I$(INC_PATH)
OBJ_DIR			:= ./obj_dir
BIN				:= $(OBJ_DIR)/V$(TOP_NAME)

IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin


RUN_FLAGS		:= --img=${IMG} 
NPC_EXEC		:= ${BIN} $(ARGS_DIFF) ${ARGS} ${RUN_FLAGS}

.PHONY:run gdb wave clean

com:${CSRCS} ${VSRCS}
	@verilator ${VERILATOR_FLAGS} ${CSRCS} ${VSRCS} $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
run:com
	$(call git_commit, "sim RTL")
	@${NPC_EXEC}
wave:
	@gtkwave wave.vcd
clean:
	rm -rf ${OBJ_DIR} wave.vcd


include ../Makefile