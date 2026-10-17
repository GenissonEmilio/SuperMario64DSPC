/* .data 0x020914a8..0x020914b0 */
extern unsigned char dScBoot_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BOOT[2] = {
    (unsigned int)&dScBoot_c_classInit, 0x20000
};
#pragma section forcedata end
#pragma pop
