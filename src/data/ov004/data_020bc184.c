/* .data 0x020bc184..0x020bc18c */
extern unsigned char Banner_UpdateSlideFromLeft[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateSlideFromLeft[2] = {
    (unsigned int)&Banner_UpdateSlideFromLeft, 0
};
#pragma section forcedata end
#pragma pop
