/* .data 0x020bc15c..0x020bc164 */
extern unsigned char Banner_SetupDrop[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_SetupDrop[2] = {
    (unsigned int)&Banner_SetupDrop, 0
};
#pragma section forcedata end
#pragma pop
