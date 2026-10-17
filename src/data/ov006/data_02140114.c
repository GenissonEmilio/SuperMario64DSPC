/* .data 0x02140114..0x0214011c */
extern unsigned char dScMgFlower_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_FLOWER[2] = {
    (unsigned int)&dScMgFlower_c_classInit, 0x1860186
};
#pragma section forcedata end
#pragma pop
