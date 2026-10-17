/* .data 0x02134218..0x0213423c */
extern unsigned char daManta_c_classInit[];
extern unsigned char _ZTI9daManta_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MANTA[9] = {
    (unsigned int)&daManta_c_classInit, 0x5000e2, 3, 0x64000, 0x3e8000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daManta_c
};
#pragma section forcedata end
#pragma pop
