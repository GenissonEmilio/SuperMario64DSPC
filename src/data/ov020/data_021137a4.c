/* .data 0x021137a4..0x021137ac */
extern unsigned char data_ov020_0211386c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_021137a4[2] = {
    2, (unsigned int)&data_ov020_0211386c
};
#pragma section forcedata end
#pragma pop
