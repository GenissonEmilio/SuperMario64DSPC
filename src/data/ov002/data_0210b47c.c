/* .data 0x0210b47c..0x0210b498 */
extern unsigned char daSetSE_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SET_SE[7] = {
    (unsigned int)&daSetSE_c_classInit, 0x15e015e, 0x64800000, 0, 0x1000, 0, 0
};
#pragma section forcedata end
#pragma pop
