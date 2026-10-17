/* .data 0x02136a34..0x02136a58 */
extern unsigned char daOwl_c_classInit[];
extern unsigned char _ZTI7daOwl_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_OWL[9] = {
    (unsigned int)&daOwl_c_classInit, 0x5900ea, 0, 0x64000, 0xc8000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI7daOwl_c
};
#pragma section forcedata end
#pragma pop
