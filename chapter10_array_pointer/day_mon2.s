	.file	"day_mon2.c"
	.text
	.section	.rodata
.LC0:
	.string	"month\t\tday"
.LC1:
	.string	"Month %3d has %4d days\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	$31, -64(%rbp)
	movl	$28, -60(%rbp)
	movl	$31, -56(%rbp)
	movl	$30, -52(%rbp)
	movl	$31, -48(%rbp)
	movl	$30, -44(%rbp)
	movl	$31, -40(%rbp)
	movl	$31, -36(%rbp)
	movl	$30, -32(%rbp)
	movl	$31, -28(%rbp)
	movl	$30, -24(%rbp)
	movl	$31, -20(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	-4(%rbp), %edx
	leal	1(%rdx), %ecx
	movl	%eax, %edx
	movl	%ecx, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L2:
	cmpl	$11, -4(%rbp)
	jle	.L3
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
