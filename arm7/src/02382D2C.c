// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x02382D2C size 0x94 (runtime 0x037FABC4, wram)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_02382D2C(void) {
    cmp r2, #0
    bxeq lr
    tst r0, #1
    beq L_037FABF0
    ldrh ip, [r0, #-1]
    and ip, ip, #0xff
    orr r3, ip, r1, lsl #8
    strh r3, [r0, #-1]
    add r0, r0, #1
    subs r2, r2, #1
    bxeq lr
L_037FABF0:
    cmp r2, #2
    blo L_037FAC38
    orr r1, r1, r1, lsl #8
    tst r0, #2
    beq L_037FAC10
    strh r1, [r0], #2
    subs r2, r2, #2
    bxeq lr
L_037FAC10:
    orr r1, r1, r1, lsl #16
    bics r3, r2, #3
    beq L_037FAC30
    sub r2, r2, r3
    add ip, r3, r0
L_037FAC24:
    str r1, [r0], #4
    cmp r0, ip
    blo L_037FAC24
L_037FAC30:
    tst r2, #2
    strneh r1, [r0], #2
L_037FAC38:
    tst r2, #1
    bxeq lr
    ldrh r3, [r0]
    and r3, r3, #0xff00
    and r1, r1, #0xff
    orr r1, r1, r3
    strh r1, [r0]
    bx lr
}
