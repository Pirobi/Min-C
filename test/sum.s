.data
.balign	8
.text
sum.12:
	cmpl	$0, %eax
	jg	jle_else.26
	movl	$0, %eax
	ret
jle_else.26:
	movl	%eax, %ebx
	subl	$1, %ebx
	movl	%eax, 0(%ebp)
	movl	%ebx, %eax
	addl	$8, %ebp
	call	sum.12
	subl	$8, %ebp
	movl	0(%ebp), %ebx
	addl	%ebx, %eax
	ret
.globl	min_caml_start
min_caml_start:
.globl	_min_caml_start
_min_caml_start: # for cygwin
	pushl	%eax
	pushl	%ebx
	pushl	%ecx
	pushl	%edx
	pushl	%esi
	pushl	%edi
	pushl	%ebp
	movl	32(%esp),%ebp
	movl	36(%esp),%eax
	movl	%eax,min_caml_hp
	movl	$12, %eax
	call	min_caml_print_int
	movl	$10000, %eax
	call	sum.12
	call	min_caml_print_int
	movl	$100, %eax
	call	min_caml_print_int
	popl	%ebp
	popl	%edi
	popl	%esi
	popl	%edx
	popl	%ecx
	popl	%ebx
	popl	%eax
	ret
