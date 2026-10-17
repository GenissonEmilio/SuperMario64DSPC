extern unsigned char dScStage_c_classInit[];

/* arm9 .data 0x0209213C..0x02092144 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
#pragma explicit_zero_data on
extern unsigned int g_profile_STAGE[2] ;
#pragma section forcedata end
/* .data 0x0209213c..0x02092144 */
#pragma push
unsigned int g_profile_STAGE[2] = {
    (unsigned int)&dScStage_c_classInit, 0x60003
};
#pragma pop
