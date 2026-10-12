// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238B01C size 0x70 (runtime 0x03802EB4, wram)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_0238B01C(void) {
    mov ip, #0x4000000
    add ip, ip, #0x138
    orr r1, r0, r1
    ldrh r0, [ip]
    bic r0, r0, #0x77
    orr r0, r0, #0x74
    mov r2, #0
L_03802ED0:
    bic r0, r0, #3
    orr r0, r0, #0
    mov r3, #1
    tst r3, r1, lsr r2
    movne r3, #1
    moveq r3, #0
    orr r0, r0, r3
    strh r0, [ip]
    mov r3, #9
L_03802EF4:
    subs r3, r3, #1
    bne L_03802EF4
    bic r0, r0, #2
    orr r0, r0, #2
    strh r0, [ip]
    mov r3, #9
L_03802F0C:
    subs r3, r3, #1
    bne L_03802F0C
    add r2, r2, #1
    cmp r2, #8
    bne L_03802ED0
    bx lr
}
