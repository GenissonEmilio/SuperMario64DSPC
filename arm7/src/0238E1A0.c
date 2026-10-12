// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238E1A0 size 0x12C (runtime 0x027C0118, main)
// No C attempt exists yet; asm generated from the original bytes.

extern void fn_0238D594(void);

asm void fn_0238E1A0(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #4
    ldr r1, =0x1FFF
    and r0, r0, r1
    mov r0, r0, lsl #0x10
    movs r6, r0, lsr #0x10
    moveq r0, #0
    beq L_027C0234
    mov r9, #0
    mov r0, #1
    b L_027C0154
L_027C0144:
    mov r1, r0, lsl r9
    ands r1, r6, r1
    bne L_027C015C
    add r9, r9, #1
L_027C0154:
    cmp r9, #0x10
    blt L_027C0144
L_027C015C:
    mov r10, #0xf
    mov r0, #1
    b L_027C0178
L_027C0168:
    mov r1, r0, lsl r10
    ands r1, r6, r1
    bne L_027C0180
    sub r10, r10, #1
L_027C0178:
    cmp r10, #0
    bne L_027C0168
L_027C0180:
    sub r5, r10, r9
    cmp r5, #5
    movlt r0, #1
    movlt r0, r0, lsl r9
    movlt r0, r0, lsl #0x10
    movlt r0, r0, lsr #0x10
    blt L_027C0234
    add r0, r10, r9
    mov r1, #2
    bl fn_0238D594
    mov r8, r0
    mov r7, #0
    mov r11, #2
    mov r4, #1
    b L_027C01E4
L_027C01BC:
    mov r0, r7
    mov r1, r11
    bl fn_0238D594
    mov r0, r1, lsl #1
    sub r0, r0, #1
    mla r8, r7, r0, r8
    mov r0, r4, lsl r8
    ands r0, r6, r0
    bne L_027C01EC
    add r7, r7, #1
L_027C01E4:
    cmp r7, r5
    blt L_027C01BC
L_027C01EC:
    sub r0, r10, r8
    cmp r0, #5
    blt L_027C0204
    sub r0, r8, r9
    cmp r0, #5
    bge L_027C021C
L_027C0204:
    mov r0, #1
    mov r1, r0, lsl r9
    orr r0, r1, r0, lsl r10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    b L_027C0234
L_027C021C:
    mov r1, #1
    mov r0, r1, lsl r10
    orr r0, r0, r1, lsl r8
    orr r0, r0, r1, lsl r9
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
L_027C0234:
    add sp, sp, #4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
