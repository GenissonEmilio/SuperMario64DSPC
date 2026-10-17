extern unsigned char _ZTVN3abi17__class_type_infoE[];
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS15dFdBrightness_c[];
extern unsigned int _ZTS8dFader_c[];
extern unsigned int _ZTS10dFdColor_c[];
extern unsigned int _ZTI15dFdBrightness_c[];
extern unsigned int _ZTS10dFdDummy_c[];
extern unsigned int _ZTI10dFdColor_c[];
extern unsigned int _ZTS9dFdWipe_c[];
extern unsigned int _ZTI8dFader_c[];

/* arm9 .data 0x0208E9E0..0x0208EA50 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
#pragma explicit_zero_data on
unsigned int _ZTI8dFader_c[2] = {
    (unsigned int)_ZTVN3abi17__class_type_infoE, (unsigned int)_ZTS8dFader_c,
};
unsigned int _ZTS9dFdWipe_c[3] = {
    0x64466439, 0x65706957, 0x635F,
};
unsigned int _ZTI9dFdWipe_c[3] = {
    (unsigned int)_ZTVN3abi20__si_class_type_infoE, (unsigned int)_ZTS9dFdWipe_c, (unsigned int)_ZTI10dFdColor_c,
};
unsigned int _ZTI10dFdDummy_c[3] = {
    (unsigned int)_ZTVN3abi20__si_class_type_infoE, (unsigned int)_ZTS10dFdDummy_c, (unsigned int)_ZTI10dFdColor_c,
};
unsigned int _ZTI10dFdColor_c[3] = {
    (unsigned int)_ZTVN3abi20__si_class_type_infoE, (unsigned int)_ZTS10dFdColor_c, (unsigned int)_ZTI15dFdBrightness_c,
};
unsigned int _ZTI15dFdBrightness_c[3] = {
    (unsigned int)_ZTVN3abi20__si_class_type_infoE, (unsigned int)_ZTS15dFdBrightness_c, (unsigned int)_ZTI8dFader_c,
};
unsigned int _ZTS8dFader_c[3] = {
    0x61466438, 0x5F726564, 99,
};
unsigned int _ZTS10dFdDummy_c[4] = {
    0x46643031, 0x6D754464, 0x635F796D, 0,
};
unsigned int _ZTS10dFdColor_c[4] = {
    0x46643031, 0x6C6F4364, 0x635F726F, 0,
};
#pragma section forcedata end
