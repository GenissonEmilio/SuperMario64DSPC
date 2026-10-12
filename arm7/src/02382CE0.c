// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x02382CE0 size 0x4C (runtime 0x037FAB78, wram)
// No C attempt exists yet; asm generated from the original bytes.

asm void fn_02382CE0(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9}
    add r9, r1, r2
    mov ip, r2, lsr #5
    add ip, r1, ip, lsl #5
    mov r2, r0
    mov r3, r2
    mov r4, r2
    mov r5, r2
    mov r6, r2
    mov r7, r2
    mov r8, r2
L_037FABA4:
    cmp r1, ip
    stmltia r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
    blt L_037FABA4
L_037FABB0:
    cmp r1, r9
    stmltia r1!, {r0}
    blt L_037FABB0
    ldmia sp!, {r4, r5, r6, r7, r8, r9}
    bx lr
}
