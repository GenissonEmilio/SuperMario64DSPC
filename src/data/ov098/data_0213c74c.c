/* .data 0x0213c74c..0x0213c770 */
extern unsigned char daWbm_c_classInit[];
extern unsigned char _ZTI7daWbm_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_WATERBOMB[9] = {
    (unsigned int)&daWbm_c_classInit, 0x3000d0, 2, 0x64000, 0x64000, 0x1000000, 0x640000, 0,
    (unsigned int)&_ZTI7daWbm_c
};
#pragma section forcedata end
#pragma pop
