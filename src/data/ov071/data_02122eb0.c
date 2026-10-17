/* .data 0x02122eb0..0x02122ecc */
extern unsigned char daObjCasket_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CASKET[7] = {
    (unsigned int)&daObjCasket_c_classInit, 0x9f0040, 0x2000002, 0x100000, 0x300000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
