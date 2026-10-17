/* .data 0x020bc204..0x020bc20c */
extern unsigned char Banner_UpdateSlideFromRight[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateSlideFromRight[2] = {
    (unsigned int)&Banner_UpdateSlideFromRight, 0
};
#pragma section forcedata end
#pragma pop
