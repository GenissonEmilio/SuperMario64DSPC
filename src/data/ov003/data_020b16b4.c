/* .data 0x020b16b4..0x020b16bc */
extern unsigned char dScStarSel_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_STAR_SELECT[2] = {
    (unsigned int)&dScStarSel_c_classInit, 0x70004
};
#pragma section forcedata end
#pragma pop
