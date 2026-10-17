/* .data 0x02134300..0x02134324 */
extern unsigned char daPukupuku_c_classInit[];
extern unsigned char _ZTI12daPukupuku_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PUKUPUKU[9] = {
    (unsigned int)&daPukupuku_c_classInit, 0x5100e3, 3, 0x64000, 0x64000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI12daPukupuku_c
};
#pragma section forcedata end
#pragma pop
