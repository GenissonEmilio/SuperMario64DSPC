/* .data 0x02122e78..0x02122e94 */
extern unsigned char daKuriKing_c_classInit_KURIKING[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KURIKING[7] = {
    (unsigned int)&daKuriKing_c_classInit_KURIKING, 0x1600c6, 0x34800000, 0, 0x100000, 0x3000000, 0x3000000
};
#pragma section forcedata end
#pragma pop
