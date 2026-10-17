/* .data 0x021114c4..0x021114cc */
extern unsigned char data_ov057_021115ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov057_021114c4[2] = {
    0x1200, (unsigned int)&data_ov057_021115ec
};
#pragma section forcedata end
#pragma pop
