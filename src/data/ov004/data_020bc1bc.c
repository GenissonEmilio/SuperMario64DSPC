/* .data 0x020bc1bc..0x020bc1c4 */
extern unsigned char Banner_SetupZoomBurst[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_SetupZoomBurst[2] = {
    (unsigned int)&Banner_SetupZoomBurst, 0
};
#pragma section forcedata end
#pragma pop
