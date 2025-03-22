	.file	"test01.c"
 # GNU C17 (x86_64-posix-seh-rev0, Built by MinGW-W64 project) version 8.1.0 (x86_64-w64-mingw32)
 #	compiled by GNU C version 8.1.0, GMP version 6.1.2, MPFR version 4.0.1, MPC version 1.1.0, isl version isl-0.18-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed: 
 # -iprefix C:/Program Files/CodeBlocks/MinGW/bin/../lib/gcc/x86_64-w64-mingw32/8.1.0/
 # -D_REENTRANT test01.c -mtune=core2 -march=nocona
 # -auxbase-strip test01_gcc_cb.asm -O2 -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -falign-labels
 # -fasynchronous-unwind-tables -fauto-inc-dec -fbranch-count-reg
 # -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
 # -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
 # -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
 # -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
 # -fcombine-stack-adjustments -fcommon -fcompare-elim -fcprop-registers
 # -fcrossjumping -fcse-follow-jumps -fdefer-pop
 # -fdelete-null-pointer-checks -fdevirtualize -fdevirtualize-speculatively
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
 # -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime -fgnu-unique
 # -fguess-branch-probability -fhoist-adjacent-loads -fident
 # -fif-conversion -fif-conversion2 -findirect-inlining -finline
 # -finline-atomics -finline-functions-called-once -finline-small-functions
 # -fipa-bit-cp -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables
 # -fipa-profile -fipa-pure-const -fipa-ra -fipa-reference -fipa-sra
 # -fipa-vrp -fira-hoist-pressure -fira-share-save-slots
 # -fira-share-spill-slots -fisolate-erroneous-paths-dereference -fivopts
 # -fkeep-inline-dllexport -fkeep-static-consts -fleading-underscore
 # -flifetime-dse -flra-remat -flto-odr-type-merging -fmath-errno
 # -fmerge-constants -fmerge-debug-strings -fmove-loop-invariants
 # -fomit-frame-pointer -foptimize-sibling-calls -foptimize-strlen
 # -fpartial-inlining -fpeephole -fpeephole2 -fpic -fplt
 # -fprefetch-loop-arrays -free -freg-struct-return -freorder-blocks
 # -freorder-blocks-and-partition -freorder-functions
 # -frerun-cse-after-loop -fsched-critical-path-heuristic
 # -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
 # -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
 # -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
 # -fschedule-insns2 -fsemantic-interposition -fset-stack-executable
 # -fshow-column -fshrink-wrap -fshrink-wrap-separate -fsigned-zeros
 # -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
 # -fstdarg-opt -fstore-merging -fstrict-aliasing
 # -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
 # -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
 # -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
 # -ftree-copy-prop -ftree-cselim -ftree-dce -ftree-dominator-opts
 # -ftree-dse -ftree-forwprop -ftree-fre -ftree-loop-if-convert
 # -ftree-loop-im -ftree-loop-ivcanon -ftree-loop-optimize
 # -ftree-parallelize-loops= -ftree-phiprop -ftree-pre -ftree-pta
 # -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr -ftree-sra
 # -ftree-switch-conversion -ftree-tail-merge -ftree-ter -ftree-vrp
 # -funit-at-a-time -funwind-tables -fverbose-asm -fzero-initialized-in-bss
 # -m128bit-long-double -m64 -m80387 -maccumulate-outgoing-args
 # -malign-double -malign-stringops -mcx16 -mfancy-math-387 -mfentry
 # -mfp-ret-in-387 -mfxsr -mieee-fp -mlong-double-80 -mmmx -mms-bitfields
 # -mno-sse4 -mpush-args -mred-zone -msse -msse2 -msse3 -mstack-arg-probe
 # -mstackrealign -mvzeroupper

	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Hello World\0"
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	subq	$40, %rsp	 #,
	.seh_stackalloc	40
	.seh_endprologue
 # test01.c:10: int main() {
	call	__main	 #
 # test01.c:11: 	printf("Hello World");
	leaq	.LC0(%rip), %rcx	 #,
	call	printf	 #
 # test01.c:13: }
	xorl	%eax, %eax	 #
	addq	$40, %rsp	 #,
	ret	
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	printf;	.scl	2;	.type	32;	.endef
