/* .data 0x021111d4..0x021111e0 */
extern unsigned char data_ov050_021111c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov050_021111d4[3] = {
    (unsigned int)&data_ov050_021111c4, 0, 0x109a0000
};
#pragma section forcedata end
#pragma pop
