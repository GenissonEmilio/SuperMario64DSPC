/* .data 0x021111cc..0x021111d4 */
extern unsigned char data_ov038_02111208[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov038_021111cc[2] = {
    2, (unsigned int)&data_ov038_02111208
};
#pragma section forcedata end
#pragma pop
