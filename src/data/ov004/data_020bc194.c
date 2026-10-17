/* .data 0x020bc194..0x020bc19c */
extern unsigned char Banner_DrawLevelNumber[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawLevelNumber[2] = {
    (unsigned int)&Banner_DrawLevelNumber, 0
};
#pragma section forcedata end
#pragma pop
