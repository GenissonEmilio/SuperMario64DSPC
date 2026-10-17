/* .data 0x020bc1e4..0x020bc1ec */
extern unsigned char Banner_UpdateFall[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateFall[2] = {
    (unsigned int)&Banner_UpdateFall, 0
};
#pragma section forcedata end
#pragma pop
