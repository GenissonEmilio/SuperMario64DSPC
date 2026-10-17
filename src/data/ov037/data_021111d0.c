/* .data 0x021111d0..0x021111d8 */
extern unsigned char data_ov037_02111208[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov037_021111d0[2] = {
    4, (unsigned int)&data_ov037_02111208
};
#pragma section forcedata end
#pragma pop
