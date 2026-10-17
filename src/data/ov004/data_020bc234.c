/* .data 0x020bc234..0x020bc23c */
extern unsigned char Banner_SetupSlideFromTop[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_SetupSlideFromTop[2] = {
    (unsigned int)&Banner_SetupSlideFromTop, 0
};
#pragma section forcedata end
#pragma pop
