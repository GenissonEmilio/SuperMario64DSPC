/* .data 0x020bc1d4..0x020bc1dc */
extern unsigned char Banner_SetupNone[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_SetupNone[2] = {
    (unsigned int)&Banner_SetupNone, 0
};
#pragma section forcedata end
#pragma pop
