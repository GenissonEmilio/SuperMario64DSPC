/* .data 0x020bc174..0x020bc17c */
extern unsigned char Banner_DrawSqueeze[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawSqueeze[2] = {
    (unsigned int)&Banner_DrawSqueeze, 0
};
#pragma section forcedata end
#pragma pop
