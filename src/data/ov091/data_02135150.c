/* .data 0x02135150..0x02135174 */
extern unsigned char daDsn_c_classInit[];
extern unsigned char _ZTI7daDsn_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DOSUN[9] = {
    (unsigned int)&daDsn_c_classInit, 0x4700a1, 0x12000002, 0x100000, 0x200000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI7daDsn_c
};
#pragma section forcedata end
#pragma pop
