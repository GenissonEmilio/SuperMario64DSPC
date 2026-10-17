/* .data 0x0209435c..0x02094364 */
extern unsigned char dScMB_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MULTIBOOT[2] = {
    (unsigned int)&dScMB_c_classInit, 0x1680168
};
#pragma section forcedata end
#pragma pop
