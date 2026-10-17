/* .data 0x021115ac..0x021115b4 */
extern unsigned char data_ov048_0211160c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_021115ac[2] = {
    3, (unsigned int)&data_ov048_0211160c
};
#pragma section forcedata end
#pragma pop
