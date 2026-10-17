/* .data 0x020bc1cc..0x020bc1d4 */
extern unsigned char Banner_DrawPopSpinA[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_DrawPopSpinA[2] = {
    (unsigned int)&Banner_DrawPopSpinA, 0
};
#pragma section forcedata end
#pragma pop
