	.file	"test00.c"
 # GNU C17 (GCC) version 14.2.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 14.2.0, GMP version 6.3.0, MPFR version 4.2.1, MPC version 1.3.1, isl version none
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: -mtune=generic -march=x86-64 -O2
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
	.p2align 4
	.def	printf.constprop.0;	.scl	3;	.type	32;	.endef
	.seh_proc	printf.constprop.0
printf.constprop.0:
	pushq	%rbx	 #
	.seh_pushreg	%rbx
	subq	$48, %rsp	 #,
	.seh_stackalloc	48
	.seh_endprologue
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:383:   __retval = __mingw_vfprintf( stdout, __format, __local_argv );
	movl	$1, %ecx	 #,
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:382:   __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
	leaq	72(%rsp), %rbx	 #, tmp102
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:379: int printf (const char *__format, ...)
	movq	%rdx, 72(%rsp)	 #,
	movq	%r8, 80(%rsp)	 #,
	movq	%r9, 88(%rsp)	 #,
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:382:   __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
	movq	%rbx, 40(%rsp)	 # tmp102, MEM[(char * *)&__local_argv]
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:383:   __retval = __mingw_vfprintf( stdout, __format, __local_argv );
	call	*__imp___acrt_iob_func(%rip)	 #
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:383:   __retval = __mingw_vfprintf( stdout, __format, __local_argv );
	movq	%rbx, %r8	 # tmp102,
	leaq	.LC0(%rip), %rdx	 #, tmp104
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:383:   __retval = __mingw_vfprintf( stdout, __format, __local_argv );
	movq	%rax, %rcx	 # tmp106, _2
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:383:   __retval = __mingw_vfprintf( stdout, __format, __local_argv );
	call	__mingw_vfprintf	 #
 # C:/gnu-windows/x86_64-w64-mingw32/include/stdio.h:386: }
	addq	$48, %rsp	 #,
	popq	%rbx	 #
	ret	
	.seh_endproc
	.section	.text.startup,"x"
	.p2align 4
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$40, %rsp	 #,
	.seh_stackalloc	40
	.seh_endprologue
 # test00.c:24: int main() {
	call	__main	 #
 # test00.c:31: 	printf("%d", __STDC_VERSION__);
	movl	$201710, %edx	 #,
	leaq	.LC0(%rip), %rcx	 #, tmp99
	call	printf.constprop.0	 #
 # test00.c:34: }
	xorl	%eax, %eax	 #
	addq	$40, %rsp	 #,
	ret	
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (GNU) 14.2.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
