.data
b: .space 3000
a: .space 3000

.text
	li $t8,0
	li $s0,0
for:
	bge $t8,500,exit
	lw $t1,a($s0)
	lw $t2,a($t1)
	sw $t2,b($s0)
	addi $s0,$s0,4
	addi $t8,$t8,1
	j for
	
exit:
        li, $v0, 10
        syscall
