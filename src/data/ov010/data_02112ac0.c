/* .data 0x02112ac0..0x02112adc */
extern unsigned char daObjC1_Trap_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_C1_TRAP[7] = {
    (unsigned int)&daObjC1_Trap_c_classInit, 0x1430024, 0, 0, 0x1f4000, 0, 0
};
#pragma section forcedata end
#pragma pop
