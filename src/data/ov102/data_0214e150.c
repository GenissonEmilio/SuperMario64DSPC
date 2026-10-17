/* .data 0x0214e150..0x0214e16c */
extern unsigned char daObjSimpleBg_c_classInit_MC_DODAI[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MC_DODAI[7] = {
    (unsigned int)&daObjSimpleBg_c_classInit_MC_DODAI, 0x1540154, 0, 0x60000, 0x300000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
