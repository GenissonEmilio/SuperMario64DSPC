/* .data 0x02113fc4..0x02114010 */
extern unsigned char gWcObj07ModelFile[];
extern unsigned char gWcObj07CollisionFile[];
extern unsigned char data_ov029_021130ac[];
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS15daObjWc_Obj07_c[];
extern unsigned char _ZTI16daObjKaitendai_c[];
extern unsigned char daObjWc_Obj07_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov029_02113fc4[4] = {
    68, 4, 0, 0
};

unsigned int data_ov029_02113fd4[3] = {
    (unsigned int)&gWcObj07ModelFile, (unsigned int)&gWcObj07CollisionFile, (unsigned int)&data_ov029_021130ac
};

extern unsigned int _ZTI15daObjWc_Obj07_c[3] ;

unsigned char _ZTS15daObjWc_Obj07_c[20] = {
    49, 53, 100, 97, 79, 98, 106, 87, 99, 95, 79, 98,
    106, 48, 55, 95, 99, 0, 0, 0
};

unsigned int g_profile_WC_UKISIMA[7] = {
    (unsigned int)&daObjWc_Obj07_c_classInit, 0x10e005e, 2, 0, 0x110000, 0x1c20000, 0x640000
};
#pragma section forcedata end
#pragma pop
