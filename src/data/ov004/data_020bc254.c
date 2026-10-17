/* .data 0x020bc254..0x020bc25c */
extern unsigned char Banner_UpdatePressed[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdatePressed_2[2] = {
    (unsigned int)&Banner_UpdatePressed, 0
};
#pragma section forcedata end
#pragma pop
