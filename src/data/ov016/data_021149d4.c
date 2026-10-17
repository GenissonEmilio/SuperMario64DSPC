/* .data 0x021149d4..0x021149e8 */
extern unsigned char data_ov016_02113c6c[];
extern unsigned char data_ov016_02113c4c[];
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS14daObjKi_Fune_c[];
extern unsigned char _ZTI10dBgActor_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov016_021149d4[2] = {
    (unsigned int)&data_ov016_02113c6c, (unsigned int)&data_ov016_02113c4c
};

unsigned int _ZTI14daObjKi_Fune_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS14daObjKi_Fune_c, (unsigned int)&_ZTI10dBgActor_c
};
#pragma section forcedata end
#pragma pop
