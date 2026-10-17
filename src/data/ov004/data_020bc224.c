/* .data 0x020bc224..0x020bc22c */
extern unsigned char Banner_UpdatePressed[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdatePressed[2] = {
    (unsigned int)&Banner_UpdatePressed, 0
};
#pragma section forcedata end
#pragma pop
