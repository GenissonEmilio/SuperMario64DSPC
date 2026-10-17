/* .data 0x020bc1fc..0x020bc204 */
extern unsigned char Banner_UpdatePopSpin[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_Banner_UpdatePopSpin_2[2] = {
    (unsigned int)&Banner_UpdatePopSpin, 0
};
#pragma section forcedata end
#pragma pop
