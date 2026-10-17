/* .data 0x021113a0..0x021113ac */
extern unsigned char data_ov028_02111584[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov028_021113a0[3] = {
    0x1000, (unsigned int)&data_ov028_02111584, 0x1e05
};
#pragma section forcedata end
#pragma pop
