/* .data 0x02109b94..0x02109bb8 */
extern unsigned char daObjWakame_c_classInit[];
extern unsigned char _ZTI13daObjWakame_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_WAKAME[9] = {
    (unsigned int)&daObjWakame_c_classInit, 0xa90128, 3, 0x60000, 0x150000, 0x2000000, 0, 0,
    (unsigned int)&_ZTI13daObjWakame_c
};
#pragma section forcedata end
#pragma pop
