// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x023977CC size 0x6C (runtime 0x027C9744, main)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_023977CC(void) {
    cmp r0, #1
    movhi r0, #5
    bxhi lr
    ldr r3, =0x380FFF4
    ldr r2, [r3]
    ldr r1, =0x2FE
    ldrh r1, [r2, r1]!
    bic r1, r1, #8
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    and r0, r0, #1
    orr r0, r1, r0, lsl #3
    strh r0, [r2]
    ldr r0, [r3]
    add r0, r0, #0x200
    ldrh r0, [r0, #0xfe]
    mov r1, r0, lsl #0x1a
    mov r1, r1, lsr #0x1f
    mov r0, r0, lsl #0x1c
    eor r1, r1, r0, lsr #31
    ldr r0, =0x4808290
    strh r1, [r0]
    mov r0, #0
    bx lr
}
