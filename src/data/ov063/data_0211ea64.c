/* .data 0x0211ea64..0x0211ea88 */
extern unsigned char daTrsTrap_c_classInit_TERESAPIT[];
extern unsigned char _ZTI11daTrsTrap_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TERESAPIT[9] = {
    (unsigned int)&daTrsTrap_c_classInit_TERESAPIT, 0x3900a0, 0, 0x64000, 0x64000, 0x1000000, 0xa00000, 0,
    (unsigned int)&_ZTI11daTrsTrap_c
};
#pragma section forcedata end
#pragma pop
