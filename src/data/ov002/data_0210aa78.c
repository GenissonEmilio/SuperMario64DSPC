/* .data 0x0210aa78..0x0210aa94 */
extern unsigned char daStarBase_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_STARBASE[7] = {
    (unsigned int)&daStarBase_c_classInit, 0x4200b4, 0x28000002, 0, 0xc8000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
