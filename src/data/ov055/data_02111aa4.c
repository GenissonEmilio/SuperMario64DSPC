/* .data 0x02111aa4..0x02111ad4 */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS9daLuigi_c[];
extern unsigned char _ZTI8dActor_c[];
extern unsigned char daLuigi_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int _ZTI9daLuigi_c[3] ;

unsigned char _ZTS9daLuigi_c[12] = {
    57, 100, 97, 76, 117, 105, 103, 105, 95, 99, 0, 0
};

unsigned int g_profile_LUIGI[6] = {
    (unsigned int)&daLuigi_c_classInit, 0x1300c3, 0x800002, 0x50000, 0x50000, 0x1f40000
};
#pragma section forcedata end
#pragma pop
