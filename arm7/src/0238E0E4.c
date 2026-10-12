// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238E0E4 size 0x3C (runtime 0x027C005C, main)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_0238E0E4(void) {
    mov r2, #0
    mov r3, r2
    ldr r1, =0x27D6A84
L_027C0068:
    add r0, r1, r3
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x614]
    add r2, r2, r0
    add r3, r3, #1
    cmp r3, #0x10
    blt L_027C0068
    mov r0, r2, lsr #4
    ldr ip, =0x27C0034
    bx ip
}
