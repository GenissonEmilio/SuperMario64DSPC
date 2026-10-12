// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238AFE8 size 0x34 (runtime 0x03802E80, wram)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_0238AFE8(void) {
    mov ip, #0x4000000
    add ip, ip, #0x138
    mov r3, #2
L_03802E8C:
    subs r3, r3, #1
    bne L_03802E8C
    ldrh r0, [ip]
    bic r0, r0, #4
    orr r0, r0, #0
    strh r0, [ip]
    mov r3, #2
L_03802EA8:
    subs r3, r3, #1
    bne L_03802EA8
    bx lr
}
