/* .data 0x0214e134..0x0214e150 */
extern unsigned char daObjSimpleBg_c_classInit_DOKAN[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DOKAN[7] = {
    (unsigned int)&daObjSimpleBg_c_classInit_DOKAN, 0xbb012a, 2, 0, 0x200000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
