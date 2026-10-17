/* .data 0x020bc1c4..0x020bc1cc */
extern unsigned char Banner_SetupPopSpin[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_SetupPopSpin_2[2] = {
    (unsigned int)&Banner_SetupPopSpin, 0
};
#pragma section forcedata end
#pragma pop
