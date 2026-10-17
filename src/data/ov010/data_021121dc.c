/* .data 0x021121dc..0x021121e4 */
extern unsigned char data_ov010_021121d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021121dc[2] = {
    1, (unsigned int)&data_ov010_021121d4
};
#pragma section forcedata end
#pragma pop
