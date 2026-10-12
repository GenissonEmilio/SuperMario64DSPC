// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x02382DC0 size 0x130 (runtime 0x037FAC58, wram)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_02382DC0(void) {
    cmp r2, #0
    bxeq lr
    tst r1, #1
    beq L_037FAC98
    ldrh ip, [r1, #-1]
    and ip, ip, #0xff
    tst r0, #1
    ldrneh r3, [r0, #-1]
    movne r3, r3, lsr #8
    ldreqh r3, [r0]
    orr r3, ip, r3, lsl #8
    strh r3, [r1, #-1]
    add r0, r0, #1
    add r1, r1, #1
    subs r2, r2, #1
    bxeq lr
L_037FAC98:
    eor ip, r1, r0
    tst ip, #1
    beq L_037FACEC
    bic r0, r0, #1
    ldrh ip, [r0], #2
    mov r3, ip, lsr #8
    subs r2, r2, #2
    blo L_037FACD0
L_037FACB8:
    ldrh ip, [r0], #2
    orr ip, r3, ip, lsl #8
    strh ip, [r1], #2
    mov r3, ip, lsr #0x10
    subs r2, r2, #2
    bhs L_037FACB8
L_037FACD0:
    tst r2, #1
    bxeq lr
    ldrh ip, [r1]
    and ip, ip, #0xff00
    orr ip, ip, r3
    strh ip, [r1]
    bx lr
L_037FACEC:
    tst ip, #2
    beq L_037FAD18
    bics r3, r2, #1
    beq L_037FAD64
    sub r2, r2, r3
    add ip, r3, r1
L_037FAD04:
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    cmp r1, ip
    blo L_037FAD04
    b L_037FAD64
L_037FAD18:
    cmp r2, #2
    blo L_037FAD64
    tst r1, #2
    beq L_037FAD38
    ldrh r3, [r0], #2
    strh r3, [r1], #2
    subs r2, r2, #2
    bxeq lr
L_037FAD38:
    bics r3, r2, #3
    beq L_037FAD58
    sub r2, r2, r3
    add ip, r3, r1
L_037FAD48:
    ldr r3, [r0], #4
    str r3, [r1], #4
    cmp r1, ip
    blo L_037FAD48
L_037FAD58:
    tst r2, #2
    ldrneh r3, [r0], #2
    strneh r3, [r1], #2
L_037FAD64:
    tst r2, #1
    bxeq lr
    ldrh r2, [r1]
    ldrh r0, [r0]
    and r2, r2, #0xff00
    and r0, r0, #0xff
    orr r0, r2, r0
    strh r0, [r1]
    bx lr
}
