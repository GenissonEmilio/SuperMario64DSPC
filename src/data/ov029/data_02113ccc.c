/* .data 0x02113ccc..0x02113cec */
extern unsigned char daObjWc_Obj02_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_WC_OBJ02[2] = {
    (unsigned int)&daObjWc_Obj02_c_classInit, 0x1100060
};

unsigned char data_ov029_02113cd4[24] = {
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
