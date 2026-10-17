// HAND-ASM PRIMITIVE: byte-faithful asm-block match (assembly-only runtime primitive).
// ARM9 entry point (CRT0): disables IME, switches CPSR modes (SVC/IRQ/SYS) to set up the
// mode stacks in DTCM, runs the autoload/segment initializers, clears DTCM/palette/OAM,
// stores the interrupt-check word, then jumps to the game entry via bx with a hand-loaded
// lr -- no C compiler emits msr/bx-with-pooled-lr, so there is no C to decompile it to.
extern void _ZN4CP1511SystemSetupEv(void);
extern void func_020048d8(void);
extern void func_0200497c(void);
extern void MultiStore_Int(void);
extern void func_01ffafd4(void);
extern void func_02019780(void);
extern void func_02072f94(void);
asm void Entry(void) {
    mov     ip, #0x4000000
    str     ip, [ip, #0x208]
    bl      _ZN4CP1511SystemSetupEv
    mov     r0, #0x13
    msr     cpsr_c, r0
    ldr     r0, =0x023c0000
    add     r0, r0, #0x3fc0
    mov     sp, r0
    mov     r0, #0x12
    msr     cpsr_c, r0
    ldr     r0, =0x023c0000
    add     r0, r0, #0x3fc0
    sub     r0, r0, #0x40
    mov     sp, r0
    ldr     r1, =0x600
    sub     r1, r0, r1
    mov     r0, #0x1f
    msr     cpsr_fsxc, r0
    sub     sp, r1, #4
    ldr     r1, =0x2004ad8
    ldr     r0, [r1, #0x14]
    bl      func_020048d8
    bl      func_0200497c
    mov     r0, #0
    ldr     r1, =0x023c0000
    mov     r2, #0x4000
    bl      MultiStore_Int
    mov     r0, #0
    ldr     r1, =0x5000000
    mov     r2, #0x400
    bl      MultiStore_Int
    mov     r0, #0x200
    ldr     r1, =0x7000000
    mov     r2, #0x400
    bl      MultiStore_Int
    ldr     r1, =0x023c0000
    add     r1, r1, #0x3fc0
    add     r1, r1, #0x3c
    ldr     r0, =0x1ffd97c
    str     r0, [r1]
    bl      func_01ffafd4
    bl      func_02019780
    bl      func_02072f94
    ldr     r1, =0x2007000
    ldr     lr, =0xffff0000
    bx      r1
}

/* arm9-data-run 0x02075398 rodata */
const unsigned int data_02075398[24] = {
    0x00660041, 0x00650066, 0x00720072, 0x00200061, 0x0065006C, 0x00530020, 0x00650074, 0x006C006C,
    0x00210065, 0x0049000A, 0x00630020, 0x00700061, 0x00650070, 0x006C006C, 0x00200069, 0x00690074,
    0x00730020, 0x006E006F, 0x0020006F, 0x00270064, 0x00690061, 0x00740075, 0x002E006F, 0x00000000,
};
const unsigned int data_020753f8[25] = {
    0x004800A1, 0x007A0061, 0x00650074, 0x00630020, 0x006E006F, 0x006C0020, 0x00730061, 0x00450020,
    0x00740073, 0x00650072, 0x006C006C, 0x00730061, 0x000A0021, 0x0061004C, 0x00200073, 0x006F0067,
    0x00720072, 0x00730061, 0x00740020, 0x00200065, 0x00790061, 0x00640075, 0x00720061, 0x006E00E1,
    0x0000002E,
};
const unsigned int data_0207545c[26] = {
    0x00720047, 0x00690065, 0x00200066, 0x0061006E, 0x00680063, 0x00640020, 0x006E0065, 0x00530020,
    0x00650074, 0x006E0072, 0x006E0065, 0x000A0021, 0x00690044, 0x00200065, 0x00FC004D, 0x007A0074,
    0x00200065, 0x00690068, 0x0066006C, 0x00200074, 0x00690064, 0x00200072, 0x00610064, 0x00650062,
    0x00210069, 0x00000000,
};
const unsigned int data_020754c4[27] = {
    0x00610042, 0x00730074, 0x0074002D, 0x0069006F, 0x00700020, 0x0075006F, 0x00200072, 0x0065006C,
    0x00200073, 0x007400E9, 0x0069006F, 0x0065006C, 0x00210073, 0x004C000A, 0x00730065, 0x00630020,
    0x00730061, 0x00750071, 0x00740065, 0x00650074, 0x00200073, 0x00270074, 0x00690061, 0x00650064,
    0x006F0072, 0x0074006E, 0x00000021,
};
const unsigned int data_02075530[28] = {
    0x00630053, 0x00610072, 0x0062006D, 0x0065006C, 0x00740020, 0x0020006F, 0x00650067, 0x00200074,
    0x00680074, 0x00200065, 0x00740053, 0x00720061, 0x00210073, 0x0054000A, 0x00650068, 0x00630020,
    0x00700061, 0x00200073, 0x00690077, 0x006C006C, 0x00680020, 0x006C0065, 0x00200070, 0x006F0079,
    0x00200075, 0x0075006F, 0x002E0074, 0x00000000,
};
/* end arm9-data-run 0x02075398 */

/* arm9-data-run 0x02086D70 data */
#pragma push
#pragma explicit_zero_data on
unsigned int _ZTI7fBase_c[2] = {
    0x0209A774, 0x02086E60,
};
unsigned int g_profile_CAMERA[2] = {
    0x0200E444, 0x0000014C,
};
#pragma pop
/* end arm9-data-run 0x02086D70 */
