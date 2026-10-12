// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x023A3848 size 0x1F4 (runtime 0x027D57C0, main)
// No C attempt exists yet; asm generated from the original bytes.

extern void fn_02382C98(void);
extern void fn_02395354(void);
extern void fn_0239A8F8(void);
extern void fn_0239AD50(void);
extern void fn_0239E91C(void);
extern void fn_0239F778(void);

asm void fn_023A3848(void) {
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #4
    mov r7, r0
    ldr r0, =0x380FFF4
    ldr r1, [r0]
    add r6, r1, #0x3e4
    ldr r0, [r1, #0x474]
    add r5, r0, #0x10
    ldrh r0, [r6, #0x3c]
    cmp r0, #0
    beq L_027D59A4
    ldrh r2, [r7, #0x1c]
    add r0, r1, #0x300
    ldrh r1, [r0, #0x64]
    cmp r2, r1
    bne L_027D59A4
    ldrh r2, [r7, #0x1a]
    ldrh r1, [r0, #0x62]
    cmp r2, r1
    bne L_027D59A4
    ldrh r1, [r7, #0x18]
    ldrh r0, [r0, #0x60]
    cmp r1, r0
    bne L_027D59A4
    ldrh r0, [r7, #0x10]
    sub r1, r0, #0x18
    ldrh r0, [r5, #6]
    sub r0, r0, #8
    cmp r1, r0
    bgt L_027D59A4
    add r0, r7, #0x1e
    bl fn_0239AD50
    cmp r0, #0xff
    beq L_027D59A4
    cmp r0, #0
    beq L_027D59A4
    mov r1, #0x1c
    mul r4, r0, r1
    ldr r1, =0x380FFF4
    ldr r1, [r1]
    ldr r1, [r1, #0x2e0]
    ldrh r1, [r1, r4]
    cmp r1, #0x40
    beq L_027D588C
    add r0, r7, #0x1e
    mov r1, #7
    bl fn_0239E91C
    cmp r0, #0
    beq L_027D59A4
    bl fn_0239F778
    b L_027D59A4
L_027D588C:
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldrh r1, [r7, #0x14]
    mov r1, r1, lsl #0x13
    mov r1, r1, lsr #0x1f
    bl fn_0239A8F8
    ldr r2, =0x380FFF4
    ldr r0, [r2]
    ldr r0, [r0, #0x2e0]
    add r1, r0, r4
    ldrh r0, [r1, #0x1a]
    strh r0, [r1, #0x18]
    mov r1, #1
    ldr r0, [r2]
    ldr r0, [r0, #0x2e0]
    add r0, r0, r4
    ldrh r0, [r0, #2]
    mov r0, r1, lsl r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldrh r1, [r6, #0x9a]
    ands r1, r0, r1
    bne L_027D59A4
    ldrh r1, [r6, #0x98]
    ands r1, r0, r1
    beq L_027D59A4
    add r2, r6, #0x9a
    ldrh r1, [r2]
    orr r1, r1, r0
    strh r1, [r2]
    ldrh r2, [r5]
    mvn r1, r0
    and r1, r2, r1
    strh r1, [r5]
    add r4, r5, #0xa
    mov r0, r0, lsl #0xf
    mov r1, r0, lsr #0x10
    b L_027D593C
L_027D5924:
    ldrh r0, [r6, #0x98]
    ands r0, r1, r0
    ldrneh r0, [r5, #6]
    addne r4, r4, r0
    mov r0, r1, lsl #0xf
    mov r1, r0, lsr #0x10
L_027D593C:
    cmp r1, #1
    bne L_027D5924
    ldrh r0, [r7, #0x10]
    sub r0, r0, #0x18
    strh r0, [r4]
    add r0, r4, #3
    ldrh r1, [r7, #0x12]
    and r1, r1, #0xff
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    and r1, r1, #0xff
    bl fn_02395354
    add r0, r4, #2
    ldrh r1, [r7, #0xe]
    and r1, r1, #0xff
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    and r1, r1, #0xff
    bl fn_02395354
    ldrh r2, [r4]
    cmp r2, #0
    beq L_027D59A4
    add r0, r7, #0x2c
    add r1, r4, #8
    add r2, r2, #1
    bl fn_02382C98
L_027D59A4:
    add sp, sp, #4
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
}
