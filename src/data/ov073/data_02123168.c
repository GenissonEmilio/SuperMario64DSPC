/* .data 0x02123168..0x02123184 */
extern unsigned char daObjEwbIce_c_classInit_EWB_ICE_A[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_EWB_ICE_A[7] = {
    (unsigned int)&daObjEwbIce_c_classInit_EWB_ICE_A, 0xc00aa, 0, 0, 0x1000000, 0, 0
};
#pragma section forcedata end
#pragma pop
