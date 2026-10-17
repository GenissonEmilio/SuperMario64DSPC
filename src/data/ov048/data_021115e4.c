/* .data 0x021115e4..0x021115f4 */
extern unsigned char data_ov048_021111fc[];
extern unsigned char data_ov048_021111c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_021115e4[4] = {
    100, (unsigned int)&data_ov048_021111fc, 1, (unsigned int)&data_ov048_021111c0
};
#pragma section forcedata end
#pragma pop
