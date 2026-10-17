/* .data 0x021111cc..0x021111d4 */
extern unsigned char data_ov050_02111220[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov050_021111cc[2] = {
    5, (unsigned int)&data_ov050_02111220
};
#pragma section forcedata end
#pragma pop
