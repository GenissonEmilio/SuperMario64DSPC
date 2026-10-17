/* .data 0x02132b68..0x02132b84 */
extern unsigned char daObjKey_c_classInit_OBJ_KEY[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_OBJ_KEY[7] = {
    (unsigned int)&daObjKey_c_classInit_OBJ_KEY, 0x95011a, 0x20000002, 0x64000, 0x64000, 0xfa0000, 0xfa0000
};
#pragma section forcedata end
#pragma pop
