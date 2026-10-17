/* .data 0x02113800..0x02113820 */
extern unsigned char daObjSlIceBlock_c_classInit_SL_ICEBLOCK_SHOT[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SL_ICEBLOCK_SHOT[1] = {
    (unsigned int)&daObjSlIceBlock_c_classInit_SL_ICEBLOCK_SHOT
};

extern unsigned char data_ov027_02113804[28] ;
#pragma section forcedata end
#pragma pop
