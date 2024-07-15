VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

all:
	@echo "Write this Makefile by your self."
	verilator -cc --exe --trace --build -j  $(VSRCS) $(CSRCS) --top-module top
	./obj_dir/Vtop
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	gtkwave wave.vcd

clean:
	rm -rf obj_dir wave.vcd

include ../Makefile

