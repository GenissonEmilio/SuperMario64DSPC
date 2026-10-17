/* .data 0x021115e4..0x021115ec */
extern unsigned char data_ov057_021114a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov057_021115e4[2] = {
    270, (unsigned int)&data_ov057_021114a8
};
#pragma section forcedata end
#pragma pop
