/* .data 0x0213c214..0x0213c21c */
extern unsigned char dScMgCurling_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_CURLING[2] = {
    (unsigned int)&dScMgCurling_c_classInit, 0x1760176
};
#pragma section forcedata end
#pragma pop
