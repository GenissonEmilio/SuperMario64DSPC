/* .data 0x020bc214..0x020bc21c */
extern unsigned char Banner_UpdateDrop[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateDrop[2] = {
    (unsigned int)&Banner_UpdateDrop, 0
};
#pragma section forcedata end
#pragma pop
