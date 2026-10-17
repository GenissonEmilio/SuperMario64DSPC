/* .data 0x0211241c..0x02112434 */
extern unsigned char daObjTtWater_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TT_WATER[3] = {
    (unsigned int)&daObjTtWater_c_classInit, 0x10b0069, 0
};

extern unsigned char data_ov033_02112428[12] ;
#pragma section forcedata end
#pragma pop
