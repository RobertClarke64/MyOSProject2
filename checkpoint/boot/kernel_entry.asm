[bits 32]
[extern main] ; Define the calling point. Must have the same name as kernel.c 'main' function
call main ; Calls the C function. The linker will know where it is placed in memory
jmp $