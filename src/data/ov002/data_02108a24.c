/* .data 0x02108a24..0x02108a40 */
extern unsigned char daObjBlockL_c_classInit_BLOCK_L[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BLOCK_L[7] = {
    (unsigned int)&daObjBlockL_c_classInit_BLOCK_L, 0x20000f, 2, 0x64000, 0xc8000, 0x1800000, 0x1800000
};
#pragma section forcedata end
#pragma pop
