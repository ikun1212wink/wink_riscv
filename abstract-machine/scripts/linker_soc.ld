ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }
/*SECTIONS定义了如何将输入文件的段section映射到输出文件中的内存 */
SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */

  /*这行代码的作用是将当前位置 . 设置为 _pmem_start 加上 _entry_offset
  即，告诉链接器，接下来的段（如 .text 段）应该从 _pmem_start + _entry_offset 这个地址开始放置*/
  . = _pmem_start + _entry_offset;
  /*.text 段：包含所有代码段*/
  .text : {
  /*首先放入 entry 段，通常用于放入口函数或重要代码*/
    *(entry)
  /*匹配所有 .text* 段（例如 .text, .text.init 等），即所有代码段都被放入 .text*/
    *(.text*)
  } : text
  /*etext 和 _etext：这些符号标记 .text 段的结束位置，后续可以通过它们获取代码段的末尾地址*/
  etext = .;
  _etext = .;

  /*只读数据段 .rodata  .rodata 的起始地址就是 .text 段结束之后的位置 */
  .rodata : {
    *(.rodata*)
  }
  /*重新设置当前的地址*/
  . =_sram_start;
  /*.data 段用于放置可写的全局变量和静态变量*/
  .data : {
    *(.data)
  } : data
  /*edata 和 _data 符号记录 .data 段的结束地址*/
  edata = .;
  _data = .;
  /*未初始化数据段 .bss   .bss 段用于放置未初始化的全局和静态变量*/
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  _stack_top = ALIGN(0x100);
  . = _stack_top + 0x800;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x100);
}
