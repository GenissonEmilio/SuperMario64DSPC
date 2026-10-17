/* .data 0x0213d70c..0x0213d714 */
extern unsigned char dScMgMCarlo2_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_MCARLO2[2] = {
    (unsigned int)&dScMgMCarlo2_c_classInit, 0x17e017e
};
#pragma section forcedata end
#pragma pop
