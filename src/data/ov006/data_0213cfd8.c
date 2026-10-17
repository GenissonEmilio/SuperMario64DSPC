/* .data 0x0213cfd8..0x0213cfe0 */
extern unsigned char dScMgMemory_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_MEMORY[2] = {
    (unsigned int)&dScMgMemory_c_classInit, 0x16a016a
};
#pragma section forcedata end
#pragma pop
