/* .data 0x020bc1ec..0x020bc1f4 */
extern unsigned char Banner_DrawWave[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawWave[2] = {
    (unsigned int)&Banner_DrawWave, 0
};
#pragma section forcedata end
#pragma pop
