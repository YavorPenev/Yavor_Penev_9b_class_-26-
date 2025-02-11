	.file	"Zadacha2.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$12, 20(%esp)
	movl	$24, 16(%esp)
	movl	20(%esp), %eax
	movl	%eax, 28(%esp)
	movl	16(%esp), %eax
	movl	%eax, 24(%esp)
L6:
	movl	28(%esp), %eax
	cmpl	24(%esp), %eax
	jle	L2
	movl	16(%esp), %eax
	addl	%eax, 24(%esp)
	jmp	L6
L2:
	movl	28(%esp), %eax
	cmpl	24(%esp), %eax
	jge	L4
	movl	20(%esp), %eax
	addl	%eax, 28(%esp)
	jmp	L6
L4:
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	nop
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
