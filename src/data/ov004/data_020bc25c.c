/* .data 0x020bc25c..0x020bc264 */
extern unsigned char Banner_SetupZoom[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_SetupZoom[2] = {
    (unsigned int)&Banner_SetupZoom, 0
};
#pragma section forcedata end
#pragma pop
