/* .data 0x02148164..0x02148188 */
extern unsigned char daDoor_c_classInit[];
extern unsigned char _ZTI8daDoor_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DOOR[9] = {
    (unsigned int)&daDoor_c_classInit, 0x1610161, 0x60800002, 0x7d000, 0x7d000, 0x1f40000, 0, 0,
    (unsigned int)&_ZTI8daDoor_c
};
#pragma section forcedata end
#pragma pop
