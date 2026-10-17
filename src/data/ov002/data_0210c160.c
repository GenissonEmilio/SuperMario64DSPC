/* .data 0x0210c160..0x0210c168 */
extern unsigned char dMap_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MAP[2] = {
    (unsigned int)&dMap_c_classInit, 0x14f014f
};
#pragma section forcedata end
#pragma pop
