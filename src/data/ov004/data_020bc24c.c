/* .data 0x020bc24c..0x020bc254 */
extern unsigned char Banner_DrawPopSpinB[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawPopSpinB[2] = {
    (unsigned int)&Banner_DrawPopSpinB, 0
};
#pragma section forcedata end
#pragma pop
