/* .data 0x0208ea00..0x0208ea0c */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS10dFdColor_c[];
extern unsigned char _ZTI15dFdBrightness_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTI10dFdColor_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS10dFdColor_c, (unsigned int)&_ZTI15dFdBrightness_c
};
#pragma section forcedata end
#pragma pop
