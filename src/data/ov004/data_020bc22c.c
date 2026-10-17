/* .data 0x020bc22c..0x020bc234 */
extern unsigned char Banner_UpdateSlideFromTop[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateSlideFromTop[2] = {
    (unsigned int)&Banner_UpdateSlideFromTop, 0
};
#pragma section forcedata end
#pragma pop
