/* .data 0x02111348..0x02111350 */
extern unsigned char data_ov028_021113a0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov028_02111348[2] = {
    3, (unsigned int)&data_ov028_021113a0
};
#pragma section forcedata end
#pragma pop
