// NONMATCHING (ASM-STANDIN): byte-exact whole-function asm for a function that was C; no matching C yet
// @ 0x0238C484 size 0x288 (runtime 0x0380431C, wram)
// No C attempt exists yet; asm generated from the original bytes.

extern void fn_02382AC4(void);
extern void fn_02382AD8(void);
extern void fn_02388384(void);
extern void fn_023883C8(void);
extern void fn_023883E0(void);
extern void fn_023883FC(void);
extern void fn_0238C420(void);
extern void fn_0238C458(void);
extern void fn_0238C8C8(void);
extern void fn_0238C938(void);
extern void fn_0238C9A8(void);
extern void fn_0238CAC4(void);
extern void fn_0238CBE0(void);
extern void fn_0238CD60(void);
extern void fn_0238CEE0(void);
extern void fn_0238D084(void);
extern void fn_0238D1FC(void);
extern void fn_0238D2AC(void);
extern void fn_0238D31C(void);

asm void fn_0238C484(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #4
    mov r4, r0
    bl fn_02382AC4
    mov r5, r0
    mov r0, #1
    bl fn_023883E0
    cmp r0, #0
    bne L_03804360
    mov r0, r5
    bl fn_02382AD8
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #4
    bl fn_023883FC
    b L_03804598
L_03804360:
    mov r0, #1
    bl fn_023883C8
    mov r0, r5
    bl fn_02382AD8
    ldr r0, [r4, #4]
    sub r0, r0, #0x20
    cmp r0, #0xa
    addls pc, pc, r0, lsl #2
    b L_0380455C
    b L_038043B0
    b L_038043B8
    b L_038043C0
    b L_038043CC
    b L_0380440C
    b L_0380444C
    b L_03804494
    b L_038044DC
    b L_03804514
    b L_0380454C
    b L_03804554
L_038043B0:
    bl fn_0238D31C
    b L_0380457C
L_038043B8:
    bl fn_0238D2AC
    b L_0380457C
L_038043C0:
    ldr r0, [r4, #0x10]
    bl fn_0238D1FC
    b L_0380457C
L_038043CC:
    bl fn_0238C458
    cmp r0, #0
    bne L_038043F8
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #3
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
    b L_03804598
L_038043F8:
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #0x10]
    bl fn_0238D084
    b L_0380457C
L_0380440C:
    bl fn_0238C458
    cmp r0, #0
    bne L_03804438
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #3
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
    b L_03804598
L_03804438:
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #0x10]
    bl fn_0238CEE0
    b L_0380457C
L_0380444C:
    bl fn_0238C420
    cmp r0, #0
    bne L_03804478
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #3
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
    b L_03804598
L_03804478:
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [r4, #0x10]
    bl fn_0238CD60
    b L_0380457C
L_03804494:
    bl fn_0238C420
    cmp r0, #0
    bne L_038044C0
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #3
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
    b L_03804598
L_038044C0:
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [r4, #0x10]
    bl fn_0238CBE0
    b L_0380457C
L_038044DC:
    bl fn_0238C420
    cmp r0, #0
    bne L_03804508
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #3
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
    b L_03804598
L_03804508:
    ldr r0, [r4, #8]
    bl fn_0238CAC4
    b L_0380457C
L_03804514:
    bl fn_0238C420
    cmp r0, #0
    bne L_03804540
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #3
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
    b L_03804598
L_03804540:
    ldr r0, [r4, #8]
    bl fn_0238C9A8
    b L_0380457C
L_0380454C:
    bl fn_0238C938
    b L_0380457C
L_03804554:
    bl fn_0238C8C8
    b L_0380457C
L_0380455C:
    mov r0, #1
    bl fn_02388384
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #1
    bl fn_023883FC
    b L_03804598
L_0380457C:
    ldr r0, [r4, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0
    bl fn_023883FC
    mov r0, #1
    bl fn_02388384
L_03804598:
    add sp, sp, #4
    ldmia sp!, {r4, r5, lr}
    bx lr
}
