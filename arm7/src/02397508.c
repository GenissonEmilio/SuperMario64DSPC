// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x02397508 size 0x134 (runtime 0x027C9480, main)
// No C attempt exists yet; asm generated from the original bytes.

extern void fn_02395334(void);
extern void fn_02395354(void);

asm void fn_02397508(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    mov r5, #0
    cmp r7, #0x20
    movhi r0, #5
    bhi L_027C95A8
    ldr r0, =0x380FFF4
    ldr r2, [r0]
    add r1, r2, #0x300
    ldrh r0, [r1, #0x10]
    cmp r0, #0x40
    bne L_027C94E0
    add r0, r2, #0x200
    ldrh r0, [r0, #0xf2]
    cmp r0, #1
    bne L_027C94E0
    ldrh r0, [r1, #0x1a]
    cmp r0, r7
    movne r0, #6
    bne L_027C95A8
    ldrh r0, [r1, #0x8e]
    cmp r0, #0
    movne r5, #1
L_027C94E0:
    mov r4, #0
    ldr r8, =0x380FFF4
    b L_027C9510
L_027C94EC:
    mov r0, r6
    bl fn_02395334
    mov r1, r0
    ldr r0, [r8]
    add r0, r0, #0x31c
    add r0, r0, r4
    bl fn_02395354
    add r6, r6, #1
    add r4, r4, #1
L_027C9510:
    cmp r4, r7
    blo L_027C94EC
    ldr r8, =0x380FFF4
    mov r6, #0
    b L_027C953C
L_027C9524:
    ldr r0, [r8]
    add r0, r0, #0x31c
    add r0, r0, r4
    mov r1, r6
    bl fn_02395354
    add r4, r4, #1
L_027C953C:
    cmp r4, #0x20
    blo L_027C9524
    ldr r4, =0x380FFF4
    ldr r0, [r4]
    add r0, r0, #0x300
    strh r7, [r0, #0x1a]
    cmp r5, #0
    beq L_027C95A4
    ldr r2, [r4]
    ldr r0, [r2, #0x464]
    add r1, r0, #0x26
    add r0, r2, #0x300
    ldrh r0, [r0, #0x8e]
    add r6, r1, r0
    mov r5, #0
    b L_027C959C
L_027C957C:
    ldr r0, [r4]
    add r0, r0, #0x31c
    add r0, r0, r5
    bl fn_02395334
    mov r1, r0
    add r0, r6, r5
    bl fn_02395354
    add r5, r5, #1
L_027C959C:
    cmp r5, r7
    blo L_027C957C
L_027C95A4:
    mov r0, #0
L_027C95A8:
    ldmia sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
