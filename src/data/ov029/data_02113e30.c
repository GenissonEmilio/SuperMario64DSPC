/* .data 0x02113e30..0x02113e6c */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS15daObjWc_Obj05_c[];
extern unsigned char _ZTI10dBgActor_c[];
extern unsigned char daObjWc_Obj05_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTI15daObjWc_Obj05_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS15daObjWc_Obj05_c, (unsigned int)&_ZTI10dBgActor_c
};

unsigned char _ZTS15daObjWc_Obj05_c[20] = {
    49, 53, 100, 97, 79, 98, 106, 87, 99, 95, 79, 98,
    106, 48, 53, 95, 99, 0, 0, 0
};

unsigned int g_profile_WC_OBJ05[7] = {
    (unsigned int)&daObjWc_Obj05_c_classInit, 0x1130063, 2, 0, 0x250000, 0x2000000, 0x2000000
};
#pragma section forcedata end
#pragma pop
