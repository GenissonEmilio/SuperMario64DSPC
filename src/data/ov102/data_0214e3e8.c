/* .data 0x0214e3e8..0x0214e404 */
extern unsigned char daObjHatenaBlock_c_classInit_HATENA_BLOCK[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_HATENA_BLOCK[7] = {
    (unsigned int)&daObjHatenaBlock_c_classInit_HATENA_BLOCK, 0x260014, 2, 0x60000, 0x100000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
