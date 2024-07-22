VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
HSRCS = $(shell find $(abspath ./include) -name "*.h")

#itrace ftrace
#CXXSRC += csrc/utils/disasm.cc
#CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LDFLAGS += $(shell llvm-config --libs)
ARGS_ELF ?= -e ../am-kernels/tests/cpu-tests/build/add-riscv32e-npc.elf
#CXX :=clang++

#difftest
ARGS_DIFF ?= -d ../nemu/build/riscv32-nemu-interpreter-so

#verilator
TOP_NAME := top
VERILATOR_FLAGS +=-cc --exe --trace --build  -j 
VERILATOR_FLAGS += --top-module $(TOP_NAME)

LDFLAGS += -lreadline -lSDL2 -ldl

INC_PATH		?= $(NPC_HOME)/include
#CFLAGS			+= -g -I$(INC_PATH)
CFLAGS			+= -I$(INC_PATH)


OBJ_DIR			:= ./obj_dir
BIN				:= $(OBJ_DIR)/V$(TOP_NAME)

IMG ?= ../am-kernels/tests/cpu-tests/build/add-riscv32e-npc.bin


RUN_FLAGS		:= --img=${IMG} 
NPC_EXEC		:= ${BIN} $(ARGS_DIFF) ${ARGS_ELF} ${RUN_FLAGS}

.PHONY:run gdb wave clean

com:${CSRCS} ${VSRCS}
	@verilator ${VERILATOR_FLAGS} ${CSRCS} ${VSRCS} $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
run:com
	$(call git_commit, "sim RTL")
	@${NPC_EXEC}
wave:
	@gtkwave wave.vcd
clean:
	rm -rf ${OBJ_DIR}


include ../Makefile