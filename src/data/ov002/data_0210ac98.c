/* .data 0x0210ac98..0x0210acbc */
extern unsigned char daWarpkun_c_classInit[];
extern unsigned char _ZTI11daWarpkun_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_WARPKUN[9] = {
    (unsigned int)&daWarpkun_c_classInit, 0x15b015b, 3, 0, 0xa000, 0x960000, 0, 0,
    (unsigned int)&_ZTI11daWarpkun_c
};
#pragma section forcedata end
#pragma pop
