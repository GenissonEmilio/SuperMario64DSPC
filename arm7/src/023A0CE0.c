// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x023A0CE0 size 0x278 (runtime 0x027D2C58, main)
// No C attempt exists yet; asm generated from the original bytes. PLACEHOLDER: AH54 (fn_023A0CE0) still running; replace with its result when it lands.

extern void fn_02382C98(void);
extern void fn_0238D594(void);
extern void fn_0239477C(void);
extern void fn_02394D84(void);
extern void fn_02394DF8(void);

asm void fn_023A0CE0(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #4
    mov r8, r0
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r7, r0, #0x4a0
    add r3, r8, #8
    ldrh r0, [r3]
    sub r0, r0, #0x18
    strh r0, [r3]
    mov r3, #0
    b L_027D2D4C
L_027D2C88:
    mov r0, #0x18
    mul r5, r3, r0
    add r0, r7, r5
    ldrh r5, [r7, r5]
    cmp r5, #0
    beq L_027D2D48
    ldrh r6, [r1, #4]
    ldrh r5, [r0, #8]
    cmp r6, r5
    bne L_027D2D48
    ldrh r6, [r1, #2]
    ldrh r5, [r0, #6]
    cmp r6, r5
    bne L_027D2D48
    ldrh r6, [r1]
    ldrh r5, [r0, #4]
    cmp r6, r5
    bne L_027D2D48
    ldrh r6, [r1, #0xa]
    ldrh r5, [r0, #0xe]
    cmp r6, r5
    bne L_027D2D48
    ldrh r6, [r1, #8]
    ldrh r5, [r0, #0xc]
    cmp r6, r5
    bne L_027D2D48
    ldrh r6, [r1, #6]
    ldrh r5, [r0, #0xa]
    cmp r6, r5
    bne L_027D2D48
    ldrh r9, [r1, #0xc]
    mov r5, r9, lsl #0x10
    mov ip, r5, lsr #0x14
    ldrh r5, [r0, #0x10]
    mov r6, r5, lsl #0x10
    cmp ip, r6, lsr #20
    bne L_027D2D48
    sub r4, r5, r9
    ands r1, r4, #0x80000000
    bne L_027D2EB8
    ldrh r0, [r0, #2]
    mul r1, r4, r0
    ldrh r0, [r8, #8]
    subs r2, r0, r1
    beq L_027D2EB8
    ands r0, r2, #0x80000000
    beq L_027D2D54
    b L_027D2EB8
L_027D2D48:
    add r3, r3, #1
L_027D2D4C:
    cmp r3, #3
    blo L_027D2C88
L_027D2D54:
    cmp r3, #3
    beq L_027D2EB8
    mov r0, #0x18
    mul r9, r3, r0
    add r0, r7, r9
    ldr r0, [r0, #0x14]
    add r6, r0, #0x10
    ldrh r3, [r6, #0x10]
    add r5, r3, r2
    ldr r0, =0x5E4
    cmp r5, r0
    bls L_027D2DA4
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r0, r0, #0x14c
    sub r1, r6, #0x10
    bl fn_02394DF8
    mov r0, #0
    strh r0, [r7, r9]
    b L_027D2EB8
L_027D2DA4:
    add r0, r8, #0x24
    add r0, r0, r1
    add r1, r6, #0x2c
    add r1, r1, r3
    add r2, r2, #1
    bl fn_02382C98
    strh r5, [r6, #0x10]
    ldrh r0, [r8]
    and r0, r0, #0xf0
    mov r1, #0x10
    bl fn_0238D594
    add r3, r7, r9
    add r2, r3, #0x10
    ldrh r5, [r2]
    bic r1, r5, #0xf
    mov r5, r5, lsl #0x1c
    sub r4, r0, r4
    add r4, r4, r5, lsr #28
    mov r4, r4, lsl #0x10
    mov r4, r4, lsr #0x10
    and r4, r4, #0xf
    orr r1, r1, r4
    strh r1, [r2]
    ldr r1, =0x380FFF4
    ldr r4, [r1]
    ldr r2, =0x518
    ldr r2, [r4, r2]!
    add r0, r2, r0
    str r0, [r4]
    ldrh r0, [r8]
    ands r0, r0, #0x100
    bne L_027D2EB8
    mov r0, #0
    strh r0, [r3]
    ldrh r0, [r6, #8]
    bic r0, r0, #0xf0
    add r0, r0, #0x10
    strh r0, [r6, #8]
    add r2, r6, #0x10
    ldrh r0, [r2]
    add r0, r0, #0x18
    strh r0, [r2]
    ldrh r0, [r6, #8]
    ands r0, r0, #0xf
    beq L_027D2E84
    cmp r0, #8
    bne L_027D2EA8
    ldr r1, [r1]
    add r0, r1, #0x14c
    add r1, r1, #0x188
    sub r2, r6, #0x10
    bl fn_02394D84
    mov r0, #2
    mov r1, #6
    bl fn_0239477C
    b L_027D2EB8
L_027D2E84:
    ldr r1, [r1]
    add r0, r1, #0x14c
    add r1, r1, #0x1a0
    sub r2, r6, #0x10
    bl fn_02394D84
    mov r0, #1
    mov r1, #7
    bl fn_0239477C
    b L_027D2EB8
L_027D2EA8:
    ldr r0, [r1]
    add r0, r0, #0x14c
    sub r1, r6, #0x10
    bl fn_02394DF8
L_027D2EB8:
    add sp, sp, #4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
