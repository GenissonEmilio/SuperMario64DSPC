/* func_02030a6c @ 0x2030a6c (arm9) -- tail-call veneer to func_0203d8e8 (0x203d8e8).
 * ldr ip, [pc]; bx ip; .word 0x203d8e8
 */
extern void func_0203d8e8(void);

void func_02030a6c(void) {
    func_0203d8e8();
}

/* arm9-data-run 0x020965E0 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_020965e0[138] ;
extern unsigned int data_02096808[157] ;
#pragma pop
/* end arm9-data-run 0x020965E0 */
