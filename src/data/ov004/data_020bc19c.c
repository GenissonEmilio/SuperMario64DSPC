/* .data 0x020bc19c..0x020bc1a4 */
extern unsigned char Banner_UpdateSlideFromBottom[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateSlideFromBottom[2] = {
    (unsigned int)&Banner_UpdateSlideFromBottom, 0
};
#pragma section forcedata end
#pragma pop
