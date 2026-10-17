/* .data 0x02112358..0x02112368 */
extern unsigned char daObjTtFuta_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TT_FUTA[4] = {
    (unsigned int)&daObjTtFuta_c_classInit, 0x10a0068, 2, 0
};
#pragma section forcedata end
#pragma pop
