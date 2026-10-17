/* .data 0x02113af0..0x02113b2c */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS15daObjIceBoard_c[];
extern unsigned char _ZTI10dBgActor_c[];
extern unsigned char daObjIceBoard_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTI15daObjIceBoard_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS15daObjIceBoard_c, (unsigned int)&_ZTI10dBgActor_c
};

unsigned char _ZTS15daObjIceBoard_c[20] = {
    49, 53, 100, 97, 79, 98, 106, 73, 99, 101, 66, 111,
    97, 114, 100, 95, 99, 0, 0, 0
};

unsigned int g_profile_ICE_BOARD[7] = {
    (unsigned int)&daObjIceBoard_c_classInit, 0xa80127, 2, 0, 0x200000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
