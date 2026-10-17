/* .data 0x02113c08..0x02113c20 */
extern unsigned char daObjWcObj01_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_WC_OBJ01[3] = {
    (unsigned int)&daObjWcObj01_c_classInit, 0x10f005f, 2
};

extern unsigned char data_ov029_02113c14[12] ;
#pragma section forcedata end
#pragma pop
