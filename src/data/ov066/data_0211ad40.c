/* .data 0x0211ad40..0x0211ad64 */
extern unsigned char daIwante_c_classInit[];
extern unsigned char _ZTI10daIwante_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_IWANTE[9] = {
    (unsigned int)&daIwante_c_classInit, 0x6300b0, 0, 0x64000, 0x64000, 0x1000000, 0xc80000, 0,
    (unsigned int)&_ZTI10daIwante_c
};
#pragma section forcedata end
#pragma pop
