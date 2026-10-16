/* func_020308a8 @ 0x20308a8 (arm9) -- tail-call veneer to func_0203d81c (0x203d81c).
 * ldr ip, [pc]; bx ip; .word 0x203d81c
 */
extern void func_0203d81c(void);

void func_020308a8(void) {
    func_0203d81c();
}

/* arm9-data-run 0x0209435C data */
#pragma push
#pragma explicit_zero_data on
unsigned int g_profile_MULTIBOOT[2] = {
    0x020352B4, 0x01680168,
};
#pragma pop
/* end arm9-data-run 0x0209435C */
