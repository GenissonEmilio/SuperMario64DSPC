/* .data 0x020bc274..0x020bc27c */
extern unsigned char Banner_DrawPressed[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawPressed[2] = {
    (unsigned int)&Banner_DrawPressed, 0
};
#pragma section forcedata end
#pragma pop
