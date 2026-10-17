/* .data 0x0210abdc..0x0210ac00 */
extern unsigned char daTree_c_classInit[];
extern unsigned char _ZTI8daTree_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TREE[9] = {
    (unsigned int)&daTree_c_classInit, 0x98011e, 0, 0, 0, 0, 0, 0,
    (unsigned int)&_ZTI8daTree_c
};
#pragma section forcedata end
#pragma pop
