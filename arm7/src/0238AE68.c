// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238AE68 size 0x100 (runtime 0x03802D00, wram)
// No C attempt exists yet; asm generated from the original bytes.

extern void fn_0238A77C(void);
extern void fn_0238A7E0(void);
extern void fn_0238A8F8(void);
extern void fn_0238AB28(void);
extern void fn_0238AB54(void);

asm void fn_0238AE68(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    and r5, r4, #1
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #1
    bne L_03802DF4
    add r0, sp, #0
    bl fn_0238AB54
    ldrh r1, [sp]
    mov r0, r1, lsl #0x1e
    mov r2, r0, lsr #0x1f
    mov r0, r5, lsl #0x10
    cmp r2, r0, lsr #16
    beq L_03802DF4
    and r4, r4, #1
    bic r1, r1, #2
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    and r0, r0, #1
    orr r0, r1, r0, lsl #1
    strh r0, [sp]
    add r0, sp, #0
    bl fn_0238AB28
    mov r0, #0x86
    mov r1, #0x10
    add r2, sp, #4
    mov r3, #3
    bl fn_0238A77C
    mov r0, r4, lsl #0x10
    movs r0, r0, lsr #0x10
    bne L_03802D90
    add r0, sp, #4
    bl fn_0238A8F8
    b L_03802D98
L_03802D90:
    add r0, sp, #4
    bl fn_0238A7E0
L_03802D98:
    mov r0, #6
    mov r1, #0x10
    add r2, sp, #4
    mov r3, #3
    bl fn_0238A77C
    mov r0, #0x86
    mov r1, #0x50
    add r2, sp, #4
    mov r3, #3
    bl fn_0238A77C
    mov r0, r5, lsl #0x10
    movs r0, r0, lsr #0x10
    bne L_03802DD8
    add r0, sp, #4
    bl fn_0238A8F8
    b L_03802DE0
L_03802DD8:
    add r0, sp, #4
    bl fn_0238A7E0
L_03802DE0:
    mov r0, #6
    mov r1, #0x50
    add r2, sp, #4
    mov r3, #3
    bl fn_0238A77C
L_03802DF4:
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, lr}
    bx lr
}
