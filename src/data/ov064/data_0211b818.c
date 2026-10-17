/* .data 0x0211b818..0x0211b834 */
extern unsigned char daDonketu_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DONKETU[7] = {
    (unsigned int)&daDonketu_c_classInit, 0x3b00d7, 0x10000006, 0x64000, 0x64000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
