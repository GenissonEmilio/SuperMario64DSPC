/* .data 0x021115b4..0x021115bc */
extern unsigned char data_ov048_021115a4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_021115b4[2] = {
    1, (unsigned int)&data_ov048_021115a4
};
#pragma section forcedata end
#pragma pop
