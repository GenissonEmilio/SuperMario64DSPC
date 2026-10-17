/* .data 0x021149f0..0x021149fc */
extern unsigned char daChair_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_CHAIR[3] = {
    (unsigned int)&daChair_c_classInit, 0x1460146, 2
};
#pragma section forcedata end
#pragma pop
