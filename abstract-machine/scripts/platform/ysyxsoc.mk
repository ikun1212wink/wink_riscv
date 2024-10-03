AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker_soc.ld \
						 --defsym=_pmem_start=0x20000000 --defsym=_entry_offset=0x0 --defsym=_sram_start=0x0f000000
LDFLAGS   += --gc-sections -e _start
NPCFLAGS  += -e $(IMAGE).elf
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/ysyxsoc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE).bin
	@$(OBJCOPY) --dump-section .text=$(IMAGE_REL).text.bin $(IMAGE).elf
	@if [ -f $(IMAGE_REL).data.bin ]; then \
		$(OBJCOPY) --dump-section .data=$(IMAGE_REL).data.bin $(IMAGE).elf; \
	else \
		touch $(IMAGE_REL).data.bin; \
	fi
	@if [ -f $(IMAGE_REL).bss.bin ]; then \
		$(OBJCOPY) --dump-section .bss=$(IMAGE_REL).bss.bin $(IMAGE).elf; \
	else \
		touch $(IMAGE_REL).bss.bin; \
	fi
	@cat $(IMAGE_REL).text.bin $(IMAGE_REL).data.bin $(IMAGE_REL).bss.bin > $(IMAGE).bin




run: image
	make -C $(NPC_HOME) run ARGS="$(NPCFLAGS)" IMG="$(IMAGE).bin"