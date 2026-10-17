/* .data 0x0211b920..0x0211b93c */
extern unsigned char daBDonketu_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BOSS_DONKETU[7] = {
    (unsigned int)&daBDonketu_c_classInit, 0x3c00d8, 0x10000006, 0xc8000, 0xc8000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
