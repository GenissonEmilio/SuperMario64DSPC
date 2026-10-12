// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238C70C size 0x194 (runtime 0x038045A4, wram)
// No C attempt exists yet; asm generated from the original bytes.

extern void fn_023882B0(void);
extern void fn_023883FC(void);

asm void fn_0238C70C(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ands r1, r0, #0x2000000
    beq L_038045D4
    mov r5, #0
    mov lr, r5
    ldr r1, =0x38098E4
L_038045C0:
    mov r4, r5, lsl #1
    strh lr, [r1, r4]
    add r5, r5, #1
    cmp r5, #0x10
    blt L_038045C0
L_038045D4:
    and r1, r0, #0xf0000
    mov r1, r1, lsr #0x10
    mov r4, r1, lsl #1
    ldr r1, =0x38098E4
    strh r0, [r1, r4]
    ands r0, r0, #0x1000000
    beq L_03804728
    ldrh r0, [r1]
    and r4, r0, #0xff00
    mov r4, r4, lsl #8
    mov r4, r4, lsr #0x10
    sub lr, r4, #0x22
    cmp lr, #6
    addls pc, pc, lr, lsl #2
    b L_038046FC
    b L_0380462C
    b L_03804668
    b L_03804668
    b L_038046B0
    b L_038046B0
    b L_038046F0
    b L_038046F0
L_0380462C:
    ldrh ip, [r1, #4]
    and lr, ip, #0xff00
    and r0, r0, #0xff
    mov ip, r0, lsl #0x18
    ldrh r0, [r1, #2]
    orr r0, ip, r0, lsl #8
    orr ip, r0, lr, lsr #8
    cmp ip, #0x2000000
    blo L_03804658
    cmp ip, #0x2400000
    blo L_038046FC
L_03804658:
    mov r0, r4
    mov r1, #2
    bl fn_023883FC
    b L_03804728
L_03804668:
    ldrh r3, [r1, #8]
    ldrh r2, [r1, #0xa]
    orr ip, r2, r3, lsl #16
    cmp ip, #0x2000000
    blo L_03804684
    cmp ip, #0x2400000
    blo L_03804694
L_03804684:
    mov r0, r4
    mov r1, #2
    bl fn_023883FC
    b L_03804728
L_03804694:
    and r2, r0, #0xff
    ldrh r0, [r1, #2]
    orr r3, r0, r2, lsl #16
    ldrh r2, [r1, #4]
    ldrh r0, [r1, #6]
    orr r2, r0, r2, lsl #16
    b L_038046FC
L_038046B0:
    ldrh r3, [r1, #6]
    ldrh r2, [r1, #8]
    orr ip, r2, r3, lsl #16
    cmp ip, #0x2000000
    blo L_038046CC
    cmp ip, #0x2400000
    blo L_038046DC
L_038046CC:
    mov r0, r4
    mov r1, #2
    bl fn_023883FC
    b L_03804728
L_038046DC:
    and r2, r0, #0xff
    ldrh r0, [r1, #2]
    orr r3, r0, r2, lsl #16
    ldrh r2, [r1, #4]
    b L_038046FC
L_038046F0:
    and r3, r0, #0xff
    ldrh r0, [r1, #2]
    orr r3, r0, r3, lsl #16
L_038046FC:
    str r2, [sp]
    str ip, [sp, #4]
    mov r0, #1
    mov r1, r4
    mov r2, #3
    bl fn_023882B0
    cmp r0, #0
    bne L_03804728
    mov r0, r4
    mov r1, #4
    bl fn_023883FC
L_03804728:
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, lr}
    bx lr
}
