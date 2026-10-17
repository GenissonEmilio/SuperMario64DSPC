/* .data 0x02127fec..0x02128008 */
extern unsigned char daChoropu_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CHOROPU[7] = {
    (unsigned int)&daChoropu_c_classInit, 0x1330136, 2, 0x50000, 0x50000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
