extern unsigned char dScBoot_c_classInit[];

/* arm9 .data 0x020914A8..0x020914B0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
#pragma explicit_zero_data on
extern unsigned int g_profile_BOOT[2] ;
#pragma section forcedata end
/* .data 0x020914a8..0x020914b0 */
#pragma push
unsigned int g_profile_BOOT[2] = {
    (unsigned int)&dScBoot_c_classInit, 0x20000
};
#pragma pop
