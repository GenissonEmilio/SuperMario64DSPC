/* .data 0x02108884..0x021088a8 */
extern unsigned char daFeather_c_classInit[];
extern unsigned char _ZTI11daFeather_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_FEATHER[9] = {
    (unsigned int)&daFeather_c_classInit, 0x1590159, 2, 0x60000, 0x200000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI11daFeather_c
};
#pragma section forcedata end
#pragma pop
