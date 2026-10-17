/* .data 0x020bc17c..0x020bc184 */
extern unsigned char Banner_UpdateWave[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdateWave[2] = {
    (unsigned int)&Banner_UpdateWave, 0
};
#pragma section forcedata end
#pragma pop
