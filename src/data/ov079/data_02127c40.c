/* .data 0x02127c40..0x02127c5c */
extern unsigned char daBtn_c_classInit_BATANKING[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BATANKING[7] = {
    (unsigned int)&daBtn_c_classInit_BATANKING, 0x4b00a5, 0x10800002, 0, 0x640000, 0x1f40000, 0x1f40000
};
#pragma section forcedata end
#pragma pop
