ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}
SECTIONS {
  . = _pmem_start + _entry_offset;

  .text : {
    *(entry)
    *(.text*)
  }>mrom AT>mrom :text


  .rodata : {
    *(.rodata*)
    rodata_end = .;
  }>mrom AT>mrom

  .data : AT (rodata_end){
    data_start = .;
    *(.data)
  }>sram :data

  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);

  .bss : {
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }>sram AT>sram
  
  _stack_top = ALIGN(0x100);
  . = _stack_top + 0x800;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x100);
}
