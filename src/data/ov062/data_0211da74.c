/* .data 0x0211da74..0x0211da90 */
extern unsigned char daNknk_c_classInit_NOKONOKO[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_NOKONOKO[7] = {
    (unsigned int)&daNknk_c_classInit_NOKONOKO, 0x1b00cb, 0x10000006, 0x64000, 0x64000, 0x1000000, 0x640000
};
#pragma section forcedata end
#pragma pop
