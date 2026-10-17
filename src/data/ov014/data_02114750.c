/* .data 0x02114750..0x02114768 */
extern unsigned char daWanwan_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_WANWAN[6] = {
    (unsigned int)&daWanwan_c_classInit, 0x4300db, 0x10000003, 0x120000, 0x400000, 0x1000000
};
#pragma section forcedata end
#pragma pop
