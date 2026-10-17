/* .data 0x02112104..0x02112118 */
extern unsigned char daObjClockHuriko_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CLOCK_HURIKO[5] = {
    (unsigned int)&daObjClockHuriko_c_classInit, 0xa40126, 6, 0x64000, 0xfa000
};
#pragma section forcedata end
#pragma pop
