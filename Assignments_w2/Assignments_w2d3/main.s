	.file	"main.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN5ShapeC2Ev,"axG",@progbits,_ZN5ShapeC5Ev,comdat
	.align 2
	.weak	_ZN5ShapeC2Ev
	.type	_ZN5ShapeC2Ev, @function
_ZN5ShapeC2Ev:
.LFB1726:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV5Shape(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1726:
	.size	_ZN5ShapeC2Ev, .-_ZN5ShapeC2Ev
	.weak	_ZN5ShapeC1Ev
	.set	_ZN5ShapeC1Ev,_ZN5ShapeC2Ev
	.section	.rodata
.LC0:
	.string	"functions from base class"
	.section	.text._ZN5Shape4areaEv,"axG",@progbits,_ZN5Shape4areaEv,comdat
	.align 2
	.weak	_ZN5Shape4areaEv
	.type	_ZN5Shape4areaEv, @function
_ZN5Shape4areaEv:
.LFB1728:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1728:
	.size	_ZN5Shape4areaEv, .-_ZN5Shape4areaEv
	.section	.text._ZN5Shape9perimeterEv,"axG",@progbits,_ZN5Shape9perimeterEv,comdat
	.align 2
	.weak	_ZN5Shape9perimeterEv
	.type	_ZN5Shape9perimeterEv, @function
_ZN5Shape9perimeterEv:
.LFB1729:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC0(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1729:
	.size	_ZN5Shape9perimeterEv, .-_ZN5Shape9perimeterEv
	.section	.text._ZN9rectangleC2Edd,"axG",@progbits,_ZN9rectangleC5Edd,comdat
	.align 2
	.weak	_ZN9rectangleC2Edd
	.type	_ZN9rectangleC2Edd, @function
_ZN9rectangleC2Edd:
.LFB1733:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	leaq	16+_ZTV9rectangle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 32(%rax)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 24(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1733:
	.size	_ZN9rectangleC2Edd, .-_ZN9rectangleC2Edd
	.weak	_ZN9rectangleC1Edd
	.set	_ZN9rectangleC1Edd,_ZN9rectangleC2Edd
	.section	.text._ZN9rectangle4areaEv,"axG",@progbits,_ZN9rectangle4areaEv,comdat
	.align 2
	.weak	_ZN9rectangle4areaEv
	.type	_ZN9rectangle4areaEv, @function
_ZN9rectangle4areaEv:
.LFB1735:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	mulsd	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1735:
	.size	_ZN9rectangle4areaEv, .-_ZN9rectangle4areaEv
	.section	.text._ZN9rectangle9perimeterEv,"axG",@progbits,_ZN9rectangle9perimeterEv,comdat
	.align 2
	.weak	_ZN9rectangle9perimeterEv
	.type	_ZN9rectangle9perimeterEv, @function
_ZN9rectangle9perimeterEv:
.LFB1736:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm0
	movapd	%xmm0, %xmm1
	addsd	%xmm0, %xmm1
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	addsd	%xmm0, %xmm0
	addsd	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1736:
	.size	_ZN9rectangle9perimeterEv, .-_ZN9rectangle9perimeterEv
	.section	.text._ZN8triangleC2Edd,"axG",@progbits,_ZN8triangleC5Edd,comdat
	.align 2
	.weak	_ZN8triangleC2Edd
	.type	_ZN8triangleC2Edd, @function
_ZN8triangleC2Edd:
.LFB1738:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movsd	%xmm1, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	leaq	16+_ZTV8triangle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movsd	-24(%rbp), %xmm0
	movsd	%xmm0, 32(%rax)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 24(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1738:
	.size	_ZN8triangleC2Edd, .-_ZN8triangleC2Edd
	.weak	_ZN8triangleC1Edd
	.set	_ZN8triangleC1Edd,_ZN8triangleC2Edd
	.section	.text._ZN8triangle9perimeterEv,"axG",@progbits,_ZN8triangle9perimeterEv,comdat
	.align 2
	.weak	_ZN8triangle9perimeterEv
	.type	_ZN8triangle9perimeterEv, @function
_ZN8triangle9perimeterEv:
.LFB1740:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	addsd	%xmm0, %xmm1
	movsd	%xmm1, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	32(%rax), %rax
	movl	$2, %edi
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	call	_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_
	movsd	%xmm0, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	24(%rax), %rax
	movl	$2, %edi
	movq	%rax, -32(%rbp)
	movsd	-32(%rbp), %xmm0
	call	_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_
	addsd	-24(%rbp), %xmm0
	call	sqrt@PLT
	addsd	-16(%rbp), %xmm0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1740:
	.size	_ZN8triangle9perimeterEv, .-_ZN8triangle9perimeterEv
	.section	.text._ZN8triangle4areaEv,"axG",@progbits,_ZN8triangle4areaEv,comdat
	.align 2
	.weak	_ZN8triangle4areaEv
	.type	_ZN8triangle4areaEv, @function
_ZN8triangle4areaEv:
.LFB1741:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	32(%rax), %xmm1
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	addsd	%xmm1, %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1741:
	.size	_ZN8triangle4areaEv, .-_ZN8triangle4areaEv
	.section	.text._ZN6squareC2Ed,"axG",@progbits,_ZN6squareC5Ed,comdat
	.align 2
	.weak	_ZN6squareC2Ed
	.type	_ZN6squareC2Ed, @function
_ZN6squareC2Ed:
.LFB1743:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	leaq	16+_ZTV6square(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 24(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1743:
	.size	_ZN6squareC2Ed, .-_ZN6squareC2Ed
	.weak	_ZN6squareC1Ed
	.set	_ZN6squareC1Ed,_ZN6squareC2Ed
	.section	.text._ZN6square4areaEv,"axG",@progbits,_ZN6square4areaEv,comdat
	.align 2
	.weak	_ZN6square4areaEv
	.type	_ZN6square4areaEv, @function
_ZN6square4areaEv:
.LFB1745:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	addsd	%xmm0, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1745:
	.size	_ZN6square4areaEv, .-_ZN6square4areaEv
	.section	.text._ZN6square9perimeterEv,"axG",@progbits,_ZN6square9perimeterEv,comdat
	.align 2
	.weak	_ZN6square9perimeterEv
	.type	_ZN6square9perimeterEv, @function
_ZN6square9perimeterEv:
.LFB1746:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	movsd	.LC2(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1746:
	.size	_ZN6square9perimeterEv, .-_ZN6square9perimeterEv
	.section	.text._ZN6circleC2Ed,"axG",@progbits,_ZN6circleC5Ed,comdat
	.align 2
	.weak	_ZN6circleC2Ed
	.type	_ZN6circleC2Ed, @function
_ZN6circleC2Ed:
.LFB1748:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movsd	%xmm0, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5ShapeC2Ev
	leaq	16+_ZTV6circle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movsd	-16(%rbp), %xmm0
	movsd	%xmm0, 24(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1748:
	.size	_ZN6circleC2Ed, .-_ZN6circleC2Ed
	.weak	_ZN6circleC1Ed
	.set	_ZN6circleC1Ed,_ZN6circleC2Ed
	.section	.text._ZN6circle4areaEv,"axG",@progbits,_ZN6circle4areaEv,comdat
	.align 2
	.weak	_ZN6circle4areaEv
	.type	_ZN6circle4areaEv, @function
_ZN6circle4areaEv:
.LFB1750:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm0
	mulsd	%xmm1, %xmm0
	movsd	.LC3(%rip), %xmm1
	mulsd	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1750:
	.size	_ZN6circle4areaEv, .-_ZN6circle4areaEv
	.section	.text._ZN6circle9perimeterEv,"axG",@progbits,_ZN6circle9perimeterEv,comdat
	.align 2
	.weak	_ZN6circle9perimeterEv
	.type	_ZN6circle9perimeterEv, @function
_ZN6circle9perimeterEv:
.LFB1751:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movsd	24(%rax), %xmm1
	movsd	.LC4(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	addsd	%xmm0, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1751:
	.size	_ZN6circle9perimeterEv, .-_ZN6circle9perimeterEv
	.text
	.globl	_ZgtR5ShapeS0_
	.type	_ZgtR5ShapeS0_, @function
_ZgtR5ShapeS0_:
.LFB1753:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	-24(%rbp), %xmm1
	ucomisd	%xmm0, %xmm1
	seta	%al
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1753:
	.size	_ZgtR5ShapeS0_, .-_ZgtR5ShapeS0_
	.globl	_ZltR5ShapeS0_
	.type	_ZltR5ShapeS0_, @function
_ZltR5ShapeS0_:
.LFB1754:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	ucomisd	-24(%rbp), %xmm0
	seta	%al
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1754:
	.size	_ZltR5ShapeS0_, .-_ZltR5ShapeS0_
	.section	.rodata
.LC5:
	.string	"Perimeter is considered!"
	.text
	.globl	_ZeqR5ShapeS0_
	.type	_ZeqR5ShapeS0_, @function
_ZeqR5ShapeS0_:
.LFB1755:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	-24(%rbp), %xmm1
	ucomisd	%xmm0, %xmm1
	setnp	%al
	movl	$0, %edx
	ucomisd	%xmm0, %xmm1
	cmovne	%edx, %eax
	testb	%al, %al
	je	.L29
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movsd	-24(%rbp), %xmm2
	ucomisd	%xmm0, %xmm2
	setnp	%al
	movl	$0, %edx
	ucomisd	%xmm0, %xmm2
	cmovne	%edx, %eax
	testb	%al, %al
	je	.L30
	leaq	.LC5(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$1, %eax
	jmp	.L28
.L29:
	movl	$0, %eax
	jmp	.L28
.L30:
.L28:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1755:
	.size	_ZeqR5ShapeS0_, .-_ZeqR5ShapeS0_
	.section	.text._ZN5ShapeC2ERKS_,"axG",@progbits,_ZN5ShapeC5ERKS_,comdat
	.align 2
	.weak	_ZN5ShapeC2ERKS_
	.type	_ZN5ShapeC2ERKS_, @function
_ZN5ShapeC2ERKS_:
.LFB1759:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	16+_ZTV5Shape(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movsd	8(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 8(%rax)
	movq	-16(%rbp), %rax
	movsd	16(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 16(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1759:
	.size	_ZN5ShapeC2ERKS_, .-_ZN5ShapeC2ERKS_
	.weak	_ZN5ShapeC1ERKS_
	.set	_ZN5ShapeC1ERKS_,_ZN5ShapeC2ERKS_
	.section	.text._ZN8triangleC2ERKS_,"axG",@progbits,_ZN8triangleC5ERKS_,comdat
	.align 2
	.weak	_ZN8triangleC2ERKS_
	.type	_ZN8triangleC2ERKS_, @function
_ZN8triangleC2ERKS_:
.LFB1761:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN5ShapeC2ERKS_
	leaq	16+_ZTV8triangle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movsd	24(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 24(%rax)
	movq	-16(%rbp), %rax
	movsd	32(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 32(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1761:
	.size	_ZN8triangleC2ERKS_, .-_ZN8triangleC2ERKS_
	.weak	_ZN8triangleC1ERKS_
	.set	_ZN8triangleC1ERKS_,_ZN8triangleC2ERKS_
	.section	.text._ZN9rectangleC2ERKS_,"axG",@progbits,_ZN9rectangleC5ERKS_,comdat
	.align 2
	.weak	_ZN9rectangleC2ERKS_
	.type	_ZN9rectangleC2ERKS_, @function
_ZN9rectangleC2ERKS_:
.LFB1764:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN5ShapeC2ERKS_
	leaq	16+_ZTV9rectangle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movsd	24(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 24(%rax)
	movq	-16(%rbp), %rax
	movsd	32(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 32(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1764:
	.size	_ZN9rectangleC2ERKS_, .-_ZN9rectangleC2ERKS_
	.weak	_ZN9rectangleC1ERKS_
	.set	_ZN9rectangleC1ERKS_,_ZN9rectangleC2ERKS_
	.section	.text._ZN6circleC2ERKS_,"axG",@progbits,_ZN6circleC5ERKS_,comdat
	.align 2
	.weak	_ZN6circleC2ERKS_
	.type	_ZN6circleC2ERKS_, @function
_ZN6circleC2ERKS_:
.LFB1767:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN5ShapeC2ERKS_
	leaq	16+_ZTV6circle(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movsd	24(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 24(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1767:
	.size	_ZN6circleC2ERKS_, .-_ZN6circleC2ERKS_
	.weak	_ZN6circleC1ERKS_
	.set	_ZN6circleC1ERKS_,_ZN6circleC2ERKS_
	.section	.text._ZN6squareC2ERKS_,"axG",@progbits,_ZN6squareC5ERKS_,comdat
	.align 2
	.weak	_ZN6squareC2ERKS_
	.type	_ZN6squareC2ERKS_, @function
_ZN6squareC2ERKS_:
.LFB1770:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN5ShapeC2ERKS_
	leaq	16+_ZTV6square(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movsd	24(%rax), %xmm0
	movq	-8(%rbp), %rax
	movsd	%xmm0, 24(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1770:
	.size	_ZN6squareC2ERKS_, .-_ZN6squareC2ERKS_
	.weak	_ZN6squareC1ERKS_
	.set	_ZN6squareC1ERKS_,_ZN6squareC2ERKS_
	.section	.rodata
	.align 8
.LC6:
	.string	"Enter three integer values for areas of the shapes: "
.LC8:
	.string	"main.cpp"
.LC9:
	.string	"a > 0"
.LC10:
	.string	"First value is positiv"
.LC11:
	.string	"b > 0"
.LC12:
	.string	"Second value is positiv"
	.align 8
.LC13:
	.string	"Rectangle area > Triangle area: "
	.align 8
.LC14:
	.string	"Rectangle area = Triangle area: "
	.align 8
.LC15:
	.string	"Rectangle area < Triangle area: "
	.align 8
.LC16:
	.string	"Rectangle area > Square area: "
	.align 8
.LC17:
	.string	"Rectangle area = Square area: "
	.align 8
.LC18:
	.string	"Rectangle area < Square area: "
	.align 8
.LC19:
	.string	"Rectangle area > Cirkel area: "
	.align 8
.LC20:
	.string	"Rectangle area = Cirkel area: "
	.align 8
.LC21:
	.string	"Rectangle area < Cirkel area: "
.LC22:
	.string	"Triangle area > Square area: "
.LC23:
	.string	"Triangle area = Square area: "
.LC24:
	.string	"Triangle area < Square area: "
.LC25:
	.string	"Triangle area > Cirkel area: "
.LC26:
	.string	"Triangle area = Cirkel area: "
.LC27:
	.string	"Triangle area < Cirkel area: "
	.align 8
.LC28:
	.string	"comparing triangle (shape1) with rectangle (shape2) \n"
	.align 8
.LC29:
	.string	"comparing cirkel (shape1) with square (shape2) \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1756:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$296, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC6(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-288(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERd@PLT
	movq	%rax, %rdx
	leaq	-280(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSirsERd@PLT
	movsd	-288(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomisd	%xmm1, %xmm0
	ja	.L38
	leaq	_ZZ4mainE19__PRETTY_FUNCTION__(%rip), %rcx
	movl	$24, %edx
	leaq	.LC8(%rip), %rsi
	leaq	.LC9(%rip), %rdi
	call	__assert_fail@PLT
.L38:
	leaq	.LC10(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movsd	-280(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomisd	%xmm1, %xmm0
	ja	.L39
	leaq	_ZZ4mainE19__PRETTY_FUNCTION__(%rip), %rcx
	movl	$26, %edx
	leaq	.LC8(%rip), %rsi
	leaq	.LC11(%rip), %rdi
	call	__assert_fail@PLT
.L39:
	leaq	.LC12(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-288(%rbp), %rdx
	movsd	-280(%rbp), %xmm0
	leaq	-208(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rdx, -296(%rbp)
	movsd	-296(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZN9rectangleC1Edd
	movq	-288(%rbp), %rdx
	movsd	-280(%rbp), %xmm0
	leaq	-160(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rdx, -296(%rbp)
	movsd	-296(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZN8triangleC1Edd
	movq	-288(%rbp), %rdx
	leaq	-272(%rbp), %rax
	movq	%rdx, -296(%rbp)
	movsd	-296(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZN6squareC1Ed
	movq	-288(%rbp), %rdx
	leaq	-240(%rbp), %rax
	movq	%rdx, -296(%rbp)
	movsd	-296(%rbp), %xmm0
	movq	%rax, %rdi
	call	_ZN6circleC1Ed
	leaq	.LC13(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-160(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZgtR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC14(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-160(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZeqR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC15(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-160(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZltR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC16(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-272(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZgtR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC17(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-272(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZeqR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC18(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-272(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZltR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC19(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-240(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZgtR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC20(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-240(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZeqR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC21(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-240(%rbp), %rdx
	leaq	-208(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZltR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC22(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-272(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZgtR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC23(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-272(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZeqR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC24(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-272(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZltR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC25(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-240(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZgtR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC26(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-240(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZeqR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC27(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-240(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZltR5ShapeS0_
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC28(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	-208(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9rectangleC1ERKS_
	leaq	-160(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8triangleC1ERKS_
	leaq	-64(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z8isBiggerI8triangle9rectangleEbT_T0_
	leaq	.LC29(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	-272(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN6squareC1ERKS_
	leaq	-240(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN6circleC1ERKS_
	leaq	-64(%rbp), %rdx
	leaq	-112(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z8isBiggerI6circle6squareEbT_T0_
	movl	$0, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L41
	call	__stack_chk_fail@PLT
.L41:
	addq	$296, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1756:
	.size	main, .-main
	.section	.text._ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_,"axG",@progbits,_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_,comdat
	.weak	_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_
	.type	_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_, @function
_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_:
.LFB2012:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movsd	%xmm0, -8(%rbp)
	movl	%edi, -12(%rbp)
	cvtsi2sd	-12(%rbp), %xmm0
	movq	-8(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	call	pow@PLT
	movq	%xmm0, %rax
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2012:
	.size	_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_, .-_ZSt3powIdiEN9__gnu_cxx11__promote_2IT_T0_NS0_9__promoteIS2_XsrSt12__is_integerIS2_E7__valueEE6__typeENS4_IS3_XsrS5_IS3_E7__valueEE6__typeEE6__typeES2_S3_
	.section	.rodata
	.align 8
.LC30:
	.string	"shape 1 is bigger than shape 2"
	.align 8
.LC31:
	.string	"shape 1 is smaller than shape 2"
	.align 8
.LC32:
	.string	"shape 1 have the same area as shape 2"
	.section	.text._Z8isBiggerI8triangle9rectangleEbT_T0_,"axG",@progbits,_Z8isBiggerI8triangle9rectangleEbT_T0_,comdat
	.weak	_Z8isBiggerI8triangle9rectangleEbT_T0_
	.type	_Z8isBiggerI8triangle9rectangleEbT_T0_, @function
_Z8isBiggerI8triangle9rectangleEbT_T0_:
.LFB2015:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8triangle4areaEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9rectangle4areaEv
	movsd	-24(%rbp), %xmm3
	ucomisd	%xmm0, %xmm3
	seta	%al
	testb	%al, %al
	je	.L45
	leaq	.LC30(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L46
.L45:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8triangle4areaEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9rectangle4areaEv
	ucomisd	-24(%rbp), %xmm0
	seta	%al
	testb	%al, %al
	je	.L47
	leaq	.LC31(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L46
.L47:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8triangle4areaEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9rectangle4areaEv
	movsd	-24(%rbp), %xmm1
	ucomisd	%xmm0, %xmm1
	jp	.L48
	movsd	-24(%rbp), %xmm5
	ucomisd	%xmm0, %xmm5
	jne	.L48
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8triangle9perimeterEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9rectangle9perimeterEv
	movsd	-24(%rbp), %xmm2
	ucomisd	%xmm0, %xmm2
	jp	.L48
	movsd	-24(%rbp), %xmm6
	ucomisd	%xmm0, %xmm6
	jne	.L48
	movl	$1, %eax
	jmp	.L51
.L48:
	movl	$0, %eax
.L51:
	testb	%al, %al
	je	.L46
	leaq	.LC32(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.L46:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2015:
	.size	_Z8isBiggerI8triangle9rectangleEbT_T0_, .-_Z8isBiggerI8triangle9rectangleEbT_T0_
	.section	.text._Z8isBiggerI6circle6squareEbT_T0_,"axG",@progbits,_Z8isBiggerI6circle6squareEbT_T0_,comdat
	.weak	_Z8isBiggerI6circle6squareEbT_T0_
	.type	_Z8isBiggerI6circle6squareEbT_T0_, @function
_Z8isBiggerI6circle6squareEbT_T0_:
.LFB2016:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6circle4areaEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6square4areaEv
	movsd	-24(%rbp), %xmm3
	ucomisd	%xmm0, %xmm3
	seta	%al
	testb	%al, %al
	je	.L55
	leaq	.LC30(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L56
.L55:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6circle4areaEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6square4areaEv
	ucomisd	-24(%rbp), %xmm0
	seta	%al
	testb	%al, %al
	je	.L57
	leaq	.LC31(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	jmp	.L56
.L57:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6circle4areaEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6square4areaEv
	movsd	-24(%rbp), %xmm1
	ucomisd	%xmm0, %xmm1
	jp	.L58
	movsd	-24(%rbp), %xmm5
	ucomisd	%xmm0, %xmm5
	jne	.L58
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6circle9perimeterEv
	movsd	%xmm0, -24(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6square9perimeterEv
	movsd	-24(%rbp), %xmm2
	ucomisd	%xmm0, %xmm2
	jp	.L58
	movsd	-24(%rbp), %xmm6
	ucomisd	%xmm0, %xmm6
	jne	.L58
	movl	$1, %eax
	jmp	.L61
.L58:
	movl	$0, %eax
.L61:
	testb	%al, %al
	je	.L56
	leaq	.LC32(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.L56:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2016:
	.size	_Z8isBiggerI6circle6squareEbT_T0_, .-_Z8isBiggerI6circle6squareEbT_T0_
	.weak	_ZTV6circle
	.section	.data.rel.ro.local._ZTV6circle,"awG",@progbits,_ZTV6circle,comdat
	.align 8
	.type	_ZTV6circle, @object
	.size	_ZTV6circle, 32
_ZTV6circle:
	.quad	0
	.quad	_ZTI6circle
	.quad	_ZN6circle4areaEv
	.quad	_ZN6circle9perimeterEv
	.weak	_ZTV6square
	.section	.data.rel.ro.local._ZTV6square,"awG",@progbits,_ZTV6square,comdat
	.align 8
	.type	_ZTV6square, @object
	.size	_ZTV6square, 32
_ZTV6square:
	.quad	0
	.quad	_ZTI6square
	.quad	_ZN6square4areaEv
	.quad	_ZN6square9perimeterEv
	.weak	_ZTV8triangle
	.section	.data.rel.ro.local._ZTV8triangle,"awG",@progbits,_ZTV8triangle,comdat
	.align 8
	.type	_ZTV8triangle, @object
	.size	_ZTV8triangle, 32
_ZTV8triangle:
	.quad	0
	.quad	_ZTI8triangle
	.quad	_ZN8triangle4areaEv
	.quad	_ZN8triangle9perimeterEv
	.weak	_ZTV9rectangle
	.section	.data.rel.ro.local._ZTV9rectangle,"awG",@progbits,_ZTV9rectangle,comdat
	.align 8
	.type	_ZTV9rectangle, @object
	.size	_ZTV9rectangle, 32
_ZTV9rectangle:
	.quad	0
	.quad	_ZTI9rectangle
	.quad	_ZN9rectangle4areaEv
	.quad	_ZN9rectangle9perimeterEv
	.weak	_ZTV5Shape
	.section	.data.rel.ro.local._ZTV5Shape,"awG",@progbits,_ZTV5Shape,comdat
	.align 8
	.type	_ZTV5Shape, @object
	.size	_ZTV5Shape, 32
_ZTV5Shape:
	.quad	0
	.quad	_ZTI5Shape
	.quad	_ZN5Shape4areaEv
	.quad	_ZN5Shape9perimeterEv
	.weak	_ZTI6circle
	.section	.data.rel.ro._ZTI6circle,"awG",@progbits,_ZTI6circle,comdat
	.align 8
	.type	_ZTI6circle, @object
	.size	_ZTI6circle, 24
_ZTI6circle:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS6circle
	.quad	_ZTI5Shape
	.weak	_ZTS6circle
	.section	.rodata._ZTS6circle,"aG",@progbits,_ZTS6circle,comdat
	.align 8
	.type	_ZTS6circle, @object
	.size	_ZTS6circle, 8
_ZTS6circle:
	.string	"6circle"
	.weak	_ZTI6square
	.section	.data.rel.ro._ZTI6square,"awG",@progbits,_ZTI6square,comdat
	.align 8
	.type	_ZTI6square, @object
	.size	_ZTI6square, 24
_ZTI6square:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS6square
	.quad	_ZTI5Shape
	.weak	_ZTS6square
	.section	.rodata._ZTS6square,"aG",@progbits,_ZTS6square,comdat
	.align 8
	.type	_ZTS6square, @object
	.size	_ZTS6square, 8
_ZTS6square:
	.string	"6square"
	.weak	_ZTI8triangle
	.section	.data.rel.ro._ZTI8triangle,"awG",@progbits,_ZTI8triangle,comdat
	.align 8
	.type	_ZTI8triangle, @object
	.size	_ZTI8triangle, 24
_ZTI8triangle:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS8triangle
	.quad	_ZTI5Shape
	.weak	_ZTS8triangle
	.section	.rodata._ZTS8triangle,"aG",@progbits,_ZTS8triangle,comdat
	.align 8
	.type	_ZTS8triangle, @object
	.size	_ZTS8triangle, 10
_ZTS8triangle:
	.string	"8triangle"
	.weak	_ZTI9rectangle
	.section	.data.rel.ro._ZTI9rectangle,"awG",@progbits,_ZTI9rectangle,comdat
	.align 8
	.type	_ZTI9rectangle, @object
	.size	_ZTI9rectangle, 24
_ZTI9rectangle:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS9rectangle
	.quad	_ZTI5Shape
	.weak	_ZTS9rectangle
	.section	.rodata._ZTS9rectangle,"aG",@progbits,_ZTS9rectangle,comdat
	.align 8
	.type	_ZTS9rectangle, @object
	.size	_ZTS9rectangle, 11
_ZTS9rectangle:
	.string	"9rectangle"
	.weak	_ZTI5Shape
	.section	.data.rel.ro._ZTI5Shape,"awG",@progbits,_ZTI5Shape,comdat
	.align 8
	.type	_ZTI5Shape, @object
	.size	_ZTI5Shape, 16
_ZTI5Shape:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Shape
	.weak	_ZTS5Shape
	.section	.rodata._ZTS5Shape,"aG",@progbits,_ZTS5Shape,comdat
	.type	_ZTS5Shape, @object
	.size	_ZTS5Shape, 7
_ZTS5Shape:
	.string	"5Shape"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2266:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L66
	cmpl	$65535, -8(%rbp)
	jne	.L66
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L66:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2266:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZgtR5ShapeS0_, @function
_GLOBAL__sub_I__ZgtR5ShapeS0_:
.LFB2267:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2267:
	.size	_GLOBAL__sub_I__ZgtR5ShapeS0_, .-_GLOBAL__sub_I__ZgtR5ShapeS0_
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZgtR5ShapeS0_
	.section	.rodata
	.align 8
	.type	_ZZ4mainE19__PRETTY_FUNCTION__, @object
	.size	_ZZ4mainE19__PRETTY_FUNCTION__, 11
_ZZ4mainE19__PRETTY_FUNCTION__:
	.string	"int main()"
	.align 8
.LC1:
	.long	0
	.long	1073741824
	.align 8
.LC2:
	.long	0
	.long	1074790400
	.align 8
.LC3:
	.long	1374389535
	.long	1074339512
	.align 8
.LC4:
	.long	1413754136
	.long	1074340347
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
