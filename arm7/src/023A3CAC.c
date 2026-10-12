// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x023A3CAC size 0x3A8 (runtime 0x027D5C24, main)
// No C attempt exists yet; asm generated from the original bytes. PLACEHOLDER: AR67 still running; replace with its result when it lands.

extern void fn_0238D594(void);
extern void fn_0239477C(void);
extern void fn_02394DF8(void);
extern void fn_023969D8(void);
extern void fn_02396EFC(void);
extern void fn_0239A8F8(void);
extern void fn_0239A96C(void);
extern void fn_0239AD50(void);
extern void fn_0239AE84(void);
extern void fn_0239E91C(void);
extern void fn_0239F064(void);
extern void fn_0239F778(void);

asm void fn_023A3CAC(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #4
    ldr r0, =0x380FFF4
    ldr r1, [r0]
    ldr r0, =0x4F4
    add r9, r1, r0
    ldr r5, [r1, #0x188]
    mvn r0, #0
    cmp r5, r0
    beq L_027D5FB4
    add r0, r1, #0x300
    ldrh r0, [r0, #0x10]
    cmp r0, #0x40
    beq L_027D5C6C
    add r0, r1, #0x188
    mov r1, r5
    bl fn_02394DF8
    b L_027D5FB4
L_027D5C6C:
    add r4, r5, #0x10
    ldrh r0, [r4, #0x14]
    mov r0, r0, lsl #0x17
    movs r0, r0, lsr #0x1f
    beq L_027D5CAC
    ldrh r0, [r4, #0x24]
    ands r0, r0, #1
    addne r1, r9, #0x2c
    ldrne r0, [r1]
    addne r0, r0, #1
    strne r0, [r1]
    addeq r1, r9, #0x28
    ldreq r0, [r1]
    addeq r0, r0, #1
    streq r0, [r1]
    b L_027D5CD4
L_027D5CAC:
    ldrh r0, [r4, #0x18]
    ands r0, r0, #1
    addne r1, r9, #0x2c
    ldrne r0, [r1]
    addne r0, r0, #1
    strne r0, [r1]
    addeq r1, r9, #0x28
    ldreq r0, [r1]
    addeq r0, r0, #1
    streq r0, [r1]
L_027D5CD4:
    add r6, r9, #0x24
    ldrh r0, [r4, #8]
    and r0, r0, #0xf0
    mov r1, #0x10
    bl fn_0238D594
    ldr r1, [r6]
    sub r0, r0, #1
    add r0, r1, r0
    str r0, [r6]
    mov r7, #1
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r1, r0, #0x300
    ldrh r1, [r1, #0x14]
    cmp r1, #1
    beq L_027D5D28
    cmp r1, #2
    beq L_027D5E10
    cmp r1, #3
    beq L_027D5E10
    b L_027D5EE8
L_027D5D28:
    ldrh r0, [r4, #0x14]
    ands r0, r0, #1
    bne L_027D5EE8
    add r0, r4, #0x1e
    bl fn_0239AD50
    mov r8, r0
    cmp r8, #0xff
    beq L_027D5D68
    mov r0, #0x1c
    mul r6, r8, r0
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    ldr r0, [r0, #0x2e0]
    ldrh r0, [r0, r6]
    cmp r0, #0x40
    beq L_027D5DB4
L_027D5D68:
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    ldr r1, [r0, #0x2e0]
    mov r0, #0x1c
    mul r0, r8, r0
    ldrh r0, [r1, r0]
    cmp r0, #0x30
    bne L_027D5D98
    add r0, r4, #0x1e
    mov r1, #7
    bl fn_0239F064
    b L_027D5DA4
L_027D5D98:
    add r0, r4, #0x1e
    mov r1, #7
    bl fn_0239E91C
L_027D5DA4:
    cmp r0, #0
    beq L_027D5EE8
    bl fn_0239F778
    b L_027D5EE8
L_027D5DB4:
    mov r0, r8, lsl #0x10
    mov r0, r0, lsr #0x10
    ldrh r1, [r4, #0x14]
    mov r1, r1, lsl #0x13
    mov r1, r1, lsr #0x1f
    bl fn_0239A8F8
    ldrh r1, [r4, #0x2a]
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    ldr r0, [r0, #0x2e0]
    add r0, r0, r6
    ldrh r0, [r0, #0x14]
    cmp r1, r0
    addeq r1, r9, #0x3c
    ldreq r0, [r1]
    addeq r0, r0, #1
    streq r0, [r1]
    beq L_027D5EE8
    add r0, r4, #0x18
    add r1, r4, #0x24
    bl fn_023969D8
    mov r7, #0
    b L_027D5EE8
L_027D5E10:
    ldrh r3, [r4, #0x14]
    ands r1, r3, #1
    bne L_027D5EE8
    add r1, r0, #0x300
    ldrh r2, [r1, #0x16]
    mov r2, r2, lsl #0x1f
    movs r2, r2, lsr #0x1f
    beq L_027D5E9C
    ands r2, r3, #0x2000
    bne L_027D5E9C
    ldrh r2, [r4, #0x18]
    ands r2, r2, #1
    moveq r0, #0
    streqh r0, [r1, #0x8a]
    beq L_027D5E60
    ldr r1, =0x38A
    add r1, r0, r1
    ldrh r0, [r1]
    bic r0, r0, #1
    strh r0, [r1]
L_027D5E60:
    ldr r0, =0x380FFF4
    ldr r2, [r0]
    add r0, r2, #0x300
    ldrh r1, [r0, #0x8a]
    cmp r1, #0
    bne L_027D5E9C
    ldr r2, [r2, #0x2e0]
    ldrh r1, [r0, #0x84]
    mov r0, #0x1c
    mla r0, r1, r0, r2
    ldrh r0, [r0, #0x16]
    cmp r0, #0
    bne L_027D5E9C
    mov r0, #1
    bl fn_02396EFC
L_027D5E9C:
    ldr r0, =0x380FFF4
    ldr r1, [r0]
    add r0, r1, #0x300
    ldrh r8, [r0, #0x84]
    ldrh r2, [r4, #0x2a]
    ldr r1, [r1, #0x2e0]
    mov r0, #0x1c
    mla r0, r8, r0, r1
    ldrh r0, [r0, #0x14]
    cmp r2, r0
    addeq r1, r9, #0x3c
    ldreq r0, [r1]
    addeq r0, r0, #1
    streq r0, [r1]
    beq L_027D5EE8
    add r0, r4, #0x1e
    add r1, r4, #0x24
    bl fn_023969D8
    mov r7, #0
L_027D5EE8:
    cmp r7, #0
    bne L_027D5F7C
    mov r0, r8, lsl #0x10
    mov r0, r0, lsr #0x10
    strh r0, [r4, #2]
    ldrh r1, [r4, #0x12]
    and r1, r1, #0xff
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl fn_0239A96C
    mov r0, #0x1c
    mul r3, r8, r0
    ldrh r2, [r4, #0x2a]
    ldr r0, =0x380FFF4
    ldr r1, [r0]
    ldr r1, [r1, #0x2e0]
    add r1, r1, r3
    strh r2, [r1, #0x14]
    ldr r1, [r0]
    ldr r1, [r1, #0x2e0]
    add r2, r1, r3
    ldrh r1, [r2, #0x1a]
    strh r1, [r2, #0x18]
    ldrh r1, [r4, #0x10]
    sub r1, r1, #0x18
    strh r1, [r4, #6]
    mov r1, #0x180
    strh r1, [r5, #0xc]
    ldrh r1, [r4, #6]
    add r1, r1, #0x2d
    mov r1, r1, lsr #1
    strh r1, [r5, #0xe]
    ldr r0, [r0]
    add r0, r0, #0x188
    mov r1, r5
    bl fn_0239AE84
    b L_027D5F90
L_027D5F7C:
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r0, r0, #0x188
    mov r1, r5
    bl fn_02394DF8
L_027D5F90:
    ldr r0, =0x380FFF4
    ldr r0, [r0]
    add r0, r0, #0x100
    ldrh r0, [r0, #0x90]
    cmp r0, #0
    beq L_027D5FB4
    mov r0, #2
    mov r1, #6
    bl fn_0239477C
L_027D5FB4:
    add sp, sp, #4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
