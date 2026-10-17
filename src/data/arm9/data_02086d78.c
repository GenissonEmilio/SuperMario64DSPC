/* .data 0x02086d78..0x02086d80 */
extern unsigned char dCamera_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CAMERA[2] = {
    (unsigned int)&dCamera_c_classInit, 332
};
#pragma section forcedata end
#pragma pop
