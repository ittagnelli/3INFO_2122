	.file	"Canale_codice_fiscale.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	alfapari
	.data
	.align 32
alfapari:
	.long	48
	.long	49
	.long	50
	.long	51
	.long	52
	.long	53
	.long	54
	.long	55
	.long	56
	.long	57
	.long	65
	.long	66
	.long	67
	.long	68
	.long	69
	.long	70
	.long	71
	.long	72
	.long	73
	.long	74
	.long	75
	.long	76
	.long	77
	.long	78
	.long	79
	.long	80
	.long	81
	.long	82
	.long	83
	.long	84
	.long	85
	.long	86
	.long	87
	.long	88
	.long	89
	.long	90
	.long	0
	.long	1
	.long	2
	.long	3
	.long	4
	.long	5
	.long	6
	.long	7
	.long	8
	.long	9
	.long	0
	.long	1
	.long	2
	.long	3
	.long	4
	.long	5
	.long	6
	.long	7
	.long	8
	.long	9
	.long	10
	.long	11
	.long	12
	.long	13
	.long	14
	.long	15
	.long	16
	.long	17
	.long	18
	.long	19
	.long	20
	.long	21
	.long	22
	.long	23
	.long	24
	.long	25
	.globl	alfadispari
	.align 32
alfadispari:
	.long	48
	.long	49
	.long	50
	.long	51
	.long	52
	.long	53
	.long	54
	.long	55
	.long	56
	.long	57
	.long	65
	.long	66
	.long	67
	.long	68
	.long	69
	.long	70
	.long	71
	.long	72
	.long	73
	.long	74
	.long	75
	.long	76
	.long	77
	.long	78
	.long	79
	.long	80
	.long	81
	.long	82
	.long	83
	.long	84
	.long	85
	.long	86
	.long	87
	.long	88
	.long	89
	.long	90
	.long	1
	.long	0
	.long	5
	.long	7
	.long	9
	.long	13
	.long	15
	.long	17
	.long	19
	.long	21
	.long	1
	.long	0
	.long	5
	.long	7
	.long	9
	.long	13
	.long	15
	.long	17
	.long	19
	.long	21
	.long	2
	.long	4
	.long	18
	.long	20
	.long	11
	.long	3
	.long	6
	.long	8
	.long	12
	.long	14
	.long	16
	.long	10
	.long	22
	.long	25
	.long	24
	.long	23
	.globl	m
	.bss
	.align 4
m:
	.space 4
	.globl	d
	.align 4
d:
	.space 4
	.text
	.globl	paridisp
	.def	paridisp;	.scl	2;	.type	32;	.endef
	.seh_proc	paridisp
paridisp:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movl	$0, -4(%rbp)
	jmp	.L4
.L7:
	movl	-4(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L5
	movl	m(%rip), %eax
	addl	$1, %eax
	movl	%eax, m(%rip)
	jmp	.L6
.L5:
	movl	d(%rip), %eax
	addl	$1, %eax
	movl	%eax, d(%rip)
.L6:
	addl	$1, -4(%rbp)
.L4:
	cmpl	$14, -4(%rbp)
	jle	.L7
	nop
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	somme
	.def	somme;	.scl	2;	.type	32;	.endef
	.seh_proc	somme
somme:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$72, %rsp
	.seh_stackalloc	72
	leaq	64(%rsp), %rbp
	.seh_setframe	%rbp, 64
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L9
.L13:
	movl	$0, -16(%rbp)
	jmp	.L10
.L12:
	movl	-16(%rbp), %eax
	movslq	%eax, %rdx
	movq	32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	alfapari(%rip), %rax
	movl	(%rcx,%rax), %eax
	cmpl	%eax, %edx
	jne	.L11
	movl	-12(%rbp), %eax
	cltq
	addq	$36, %rax
	leaq	0(,%rax,4), %rdx
	leaq	alfapari(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -4(%rbp)
.L11:
	addl	$1, -16(%rbp)
.L10:
	movl	-16(%rbp), %eax
	movslq	%eax, %rbx
	movq	32(%rbp), %rcx
	call	strlen
	cmpq	%rax, %rbx
	jb	.L12
	addl	$1, -12(%rbp)
.L9:
	cmpl	$35, -12(%rbp)
	jle	.L13
	movl	$0, -20(%rbp)
	jmp	.L14
.L18:
	movl	$0, -24(%rbp)
	jmp	.L15
.L17:
	movl	-24(%rbp), %eax
	movslq	%eax, %rdx
	movq	40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %edx
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	leaq	alfadispari(%rip), %rax
	movl	(%rcx,%rax), %eax
	cmpl	%eax, %edx
	jne	.L16
	movl	-20(%rbp), %eax
	cltq
	addq	$36, %rax
	leaq	0(,%rax,4), %rdx
	leaq	alfadispari(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, -8(%rbp)
.L16:
	addl	$1, -24(%rbp)
.L15:
	movl	-24(%rbp), %eax
	movslq	%eax, %rbx
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	strlen
	cmpq	%rax, %rbx
	jb	.L17
	addl	$1, -20(%rbp)
.L14:
	cmpl	$35, -20(%rbp)
	jle	.L18
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movslq	%eax, %rdx
	imulq	$1321528399, %rdx, %rdx
	shrq	$32, %rdx
	sarl	$3, %edx
	movl	%eax, %ecx
	sarl	$31, %ecx
	subl	%ecx, %edx
	movl	%edx, -4(%rbp)
	movl	-4(%rbp), %edx
	imull	$26, %edx, %edx
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "La cifra da aggiungere \350 %c\0"
	.text
	.globl	intoarr
	.def	intoarr;	.scl	2;	.type	32;	.endef
	.seh_proc	intoarr
intoarr:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$88, %rsp
	.seh_stackalloc	88
	leaq	80(%rsp), %rbp
	.seh_setframe	%rbp, 80
	.seh_endprologue
	movq	%rcx, 64(%rbp)
	movq	%rsp, %rax
	movq	%rax, %rbx
	movl	m(%rip), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -16(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	movslq	%eax, %rdx
	movq	%rdx, %rsi
	movl	$0, %edi
	cltq
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	call	___chkstk_ms
	subq	%rax, %rsp
	leaq	32(%rsp), %rax
	addq	$0, %rax
	movq	%rax, -24(%rbp)
	movl	d(%rip), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -32(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r10
	movl	$0, %r11d
	movslq	%eax, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	cltq
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	call	___chkstk_ms
	subq	%rax, %rsp
	leaq	32(%rsp), %rax
	addq	$0, %rax
	movq	%rax, -40(%rbp)
	movl	$0, m(%rip)
	movl	$0, d(%rip)
	movl	$0, -4(%rbp)
	jmp	.L21
.L24:
	movl	-4(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L22
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	64(%rbp), %rax
	addq	%rax, %rdx
	movl	m(%rip), %eax
	movzbl	(%rdx), %ecx
	movq	-24(%rbp), %rdx
	cltq
	movb	%cl, (%rdx,%rax)
	movl	m(%rip), %eax
	addl	$1, %eax
	movl	%eax, m(%rip)
	jmp	.L23
.L22:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	64(%rbp), %rax
	addq	%rax, %rdx
	movl	d(%rip), %eax
	movzbl	(%rdx), %ecx
	movq	-40(%rbp), %rdx
	cltq
	movb	%cl, (%rdx,%rax)
	movl	d(%rip), %eax
	addl	$1, %eax
	movl	%eax, d(%rip)
.L23:
	addl	$1, -4(%rbp)
.L21:
	cmpl	$14, -4(%rbp)
	jle	.L24
	movq	-40(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	somme
	addl	$65, %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movq	%rbx, %rsp
	nop
	leaq	8(%rbp), %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC1:
	.ascii "Usage: ./Canale_codice_fiscale <codice fiscale di 15 caratteri>\0"
	.align 8
.LC2:
	.ascii "Il codice fiscale inserito ha meno di 15 caratteri o di pi\371, avviare nuovamente il programma e assicurarsi di inserire 15 caratteri\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
	cmpl	$2, 16(%rbp)
	je	.L26
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$1, %ecx
	call	exit
.L26:
	movq	24(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	strlen
	cmpq	$15, %rax
	je	.L27
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$1, %ecx
	call	exit
.L27:
	movq	24(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L28
.L29:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %ecx
	movq	__imp_toupper(%rip), %rax
	call	*%rax
	movl	%eax, %edx
	movl	-4(%rbp), %eax
	movslq	%eax, %rcx
	movq	-16(%rbp), %rax
	addq	%rcx, %rax
	movb	%dl, (%rax)
	addl	$1, -4(%rbp)
.L28:
	cmpl	$14, -4(%rbp)
	jle	.L29
	call	paridisp
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	intoarr
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (MinGW-W64 x86_64-posix-seh, built by Brecht Sanders) 11.2.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	strlen;	.scl	2;	.type	32;	.endef
	.def	exit;	.scl	2;	.type	32;	.endef
