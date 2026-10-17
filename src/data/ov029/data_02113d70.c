/* .data 0x02113d70..0x02113da8 */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS15daObjWc_Obj03_c[];
extern unsigned char _ZTI8dActor_c[];
extern unsigned char daObjWc_Obj03_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTI15daObjWc_Obj03_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS15daObjWc_Obj03_c, (unsigned int)&_ZTI8dActor_c
};

unsigned char _ZTS15daObjWc_Obj03_c[20] = {
    49, 53, 100, 97, 79, 98, 106, 87, 99, 95, 79, 98,
    106, 48, 51, 95, 99, 0, 0, 0
};

unsigned int g_profile_WC_OBJ03[6] = {
    (unsigned int)&daObjWc_Obj03_c_classInit, 0x1110061, 2, 0, 0x40000, 0x1000000
};
#pragma section forcedata end
#pragma pop
