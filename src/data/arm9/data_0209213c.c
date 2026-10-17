/* .data 0x0209213c..0x02092144 */
extern unsigned char dScStage_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_STAGE[2] = {
    (unsigned int)&dScStage_c_classInit, 0x60003
};
#pragma section forcedata end
#pragma pop
