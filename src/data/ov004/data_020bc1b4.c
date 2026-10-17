/* .data 0x020bc1b4..0x020bc1bc */
extern unsigned char Banner_DrawSpin[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawSpin[2] = {
    (unsigned int)&Banner_DrawSpin, 0
};
#pragma section forcedata end
#pragma pop
