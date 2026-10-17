/* .data 0x021138bc..0x021138d8 */
extern unsigned char daObjTdFuta_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TD_FUTA[2] = {
    (unsigned int)&daObjTdFuta_c_classInit, 0x10c006a
};

extern unsigned char data_ov032_021138c4[20] ;
#pragma section forcedata end
#pragma pop
