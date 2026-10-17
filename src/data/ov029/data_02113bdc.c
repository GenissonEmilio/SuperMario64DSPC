/* .data 0x02113bdc..0x02113c08 */
extern unsigned char gWcObj01ModelFile[];
extern unsigned char gWcObj01CollisionFile[];
extern unsigned char data_ov029_0211300c[];
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS14daObjWcObj01_c[];
extern unsigned char _ZTI17daObjFloatBoard_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov029_02113be8[3] = {
    (unsigned int)&gWcObj01ModelFile, (unsigned int)&gWcObj01CollisionFile, (unsigned int)&data_ov029_0211300c
};

unsigned int _ZTI14daObjWcObj01_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS14daObjWcObj01_c, (unsigned int)&_ZTI17daObjFloatBoard_c
};

unsigned char _ZTS14daObjWcObj01_c[20] = {
    49, 52, 100, 97, 79, 98, 106, 87, 99, 79, 98, 106,
    48, 49, 95, 99, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
