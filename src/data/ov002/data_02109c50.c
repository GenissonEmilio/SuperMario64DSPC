/* .data 0x02109c50..0x02109c74 */
extern unsigned char daObjHeart_c_classInit[];
extern unsigned char _ZTI12daObjHeart_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_HEART[9] = {
    (unsigned int)&daObjHeart_c_classInit, 0xaa0129, 3, 0x60000, 0x60000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI12daObjHeart_c
};
#pragma section forcedata end
#pragma pop
