.section .init
.global _start
.type _start, @function

_start:
    la sp, _stack_top
    

hang:
    j hang
