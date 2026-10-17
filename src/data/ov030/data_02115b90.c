/* .data 0x02115b90..0x02115bac */
extern unsigned char daMky_c_classInit_MONKEY_THIEF[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MONKEY_THIEF[7] = {
    (unsigned int)&daMky_c_classInit_MONKEY_THIEF, 0x7e010b, 0x8282, 0x5a000, 0x5a000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
