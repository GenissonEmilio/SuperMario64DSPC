/* .data 0x021115a4..0x021115ac */
extern unsigned char data_ov048_02111800[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov048_021115a4[2] = {
    0x1000, (unsigned int)&data_ov048_02111800
};
#pragma section forcedata end
#pragma pop
