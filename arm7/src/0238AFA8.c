// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238AFA8 size 0x40 (runtime 0x03802E40, wram)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_0238AFA8(void) {
    mov ip, #0x4000000
    add ip, ip, #0x138
    ldrh r0, [ip]
    bic r0, r0, #0x77
    orr r0, r0, #0x72
    strh r0, [ip]
    mov r3, #2
L_03802E5C:
    subs r3, r3, #1
    bne L_03802E5C
    bic r0, r0, #4
    orr r0, r0, #4
    strh r0, [ip]
    mov r3, #2
L_03802E74:
    subs r3, r3, #1
    bne L_03802E74
    bx lr
}
