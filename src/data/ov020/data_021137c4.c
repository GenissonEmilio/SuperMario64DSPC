/* .data 0x021137c4..0x021137cc */
extern unsigned char data_ov020_0211387c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_021137c4[2] = {
    2, (unsigned int)&data_ov020_0211387c
};
#pragma section forcedata end
#pragma pop
