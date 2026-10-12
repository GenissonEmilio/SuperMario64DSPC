// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x023976E8 size 0xE4 (runtime 0x027C9660, main)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_023976E8(void) {
    cmp r0, #1
    bhi L_027C9670
    cmp r1, #1
    bls L_027C9678
L_027C9670:
    mov r0, #5
    bx lr
L_027C9678:
    cmp r0, #0
    beq L_027C968C
    cmp r0, #1
    beq L_027C96B8
    b L_027C96E4
L_027C968C:
    ldr r2, =0x380FFF4
    ldr r3, [r2]
    ldr r2, =0x2FE
    ldrh r2, [r3, r2]!
    bic r2, r2, #0x20
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    and r1, r1, #1
    orr r1, r2, r1, lsl #5
    strh r1, [r3]
    b L_027C96E4
L_027C96B8:
    ldr r1, =0x380FFF4
    ldr r2, [r1]
    add r1, r2, #0x200
    ldrh r1, [r1, #0xf2]
    cmp r1, #1
    movne r0, #0xb
    bxne lr
    ldr r1, =0x2FE
    ldrh r1, [r2, r1]!
    bic r1, r1, #0x20
    strh r1, [r2]
L_027C96E4:
    ldr r3, =0x380FFF4
    ldr r2, [r3]
    ldr r1, =0x2FE
    ldrh r1, [r2, r1]!
    bic r1, r1, #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    and r0, r0, #1
    orr r0, r1, r0, lsl #4
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
