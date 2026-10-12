// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x023A40DC size 0x170 (runtime 0x027D6054, main)
// No C attempt exists yet; asm generated from the original bytes. PLACEHOLDER: AR67 still running; replace with its result when it lands.

extern void fn_02382C80(void);
extern void fn_02395334(void);
extern void fn_02395354(void);
extern void fn_023969D8(void);

asm void fn_023A40DC(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #4
    mov r7, r0
    mov r6, r1
    mov r5, r2
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r4, r0, #0x200
    add r0, r5, #1
    bl fn_02395334
    cmp r0, #0x20
    bhi L_027D61B4
    mov r2, #4
    mov r1, r2
    mov r0, #0x400
    mov r3, #0
    b L_027D60F4
L_027D6098:
    ldrh r8, [r4]
    cmp r8, #0
    beq L_027D60E8
    ldrh r9, [r4, #0xa]
    ldrh r8, [r6, #0x28]
    cmp r9, r8
    bne L_027D60D4
    ldrh r9, [r4, #8]
    ldrh r8, [r6, #0x26]
    cmp r9, r8
    bne L_027D60D4
    ldrh r9, [r4, #6]
    ldrh r8, [r6, #0x24]
    cmp r9, r8
    beq L_027D6114
L_027D60D4:
    ldrh r8, [r4, #0x30]
    cmp r8, r0
    movlo r0, r8
    movlo r1, r3
    b L_027D60EC
L_027D60E8:
    mov r2, r3
L_027D60EC:
    add r3, r3, #1
    add r4, r4, #0x32
L_027D60F4:
    cmp r3, #4
    blo L_027D6098
    cmp r2, #4
    movne r3, r2
    bne L_027D6114
    cmp r1, #4
    movne r3, r1
    beq L_027D61B4
L_027D6114:
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r8, r0, #0x200
    mov r2, #0x32
    mul r4, r3, r2
    add r9, r8, r4
    mov r0, #0
    strh r0, [sp]
    ldrh r0, [sp]
    mov r1, r9
    bl fn_02382C80
    mov r0, #0x400
    strh r0, [r9, #0x30]
    ldrh r0, [r6, #0x12]
    and r0, r0, #0xff
    strh r0, [r8, r4]
    strh r7, [r9, #2]
    add r0, r9, #6
    add r1, r6, #0x24
    bl fn_023969D8
    add r0, r5, #1
    bl fn_02395334
    strh r0, [r9, #0xc]
    mov r7, #0
    add r5, r5, #2
    add r4, r9, #0xe
    b L_027D6198
L_027D6180:
    add r0, r5, r7
    bl fn_02395334
    mov r1, r0
    add r0, r4, r7
    bl fn_02395354
    add r7, r7, #1
L_027D6198:
    ldrh r0, [r9, #0xc]
    cmp r7, r0
    blo L_027D6180
    ldrh r0, [r6, #0x34]
    strh r0, [r9, #0x2e]
    ldrh r0, [r6, #0x36]
    strh r0, [r9, #4]
L_027D61B4:
    add sp, sp, #4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
