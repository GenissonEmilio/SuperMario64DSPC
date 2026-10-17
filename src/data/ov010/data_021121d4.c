/* .data 0x021121d4..0x021121dc */
extern unsigned char data_ov010_021122b8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021121d4[2] = {
    512, (unsigned int)&data_ov010_021122b8
};
#pragma section forcedata end
#pragma pop
