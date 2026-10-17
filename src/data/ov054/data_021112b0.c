/* .data 0x021112b0..0x021112cc */
extern unsigned char data_ov054_021116cc[];
extern unsigned char data_ov054_021111d0[];
extern unsigned char data_ov054_021112f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov054_021112b0[7] = {
    (unsigned int)&data_ov054_021116cc, (unsigned int)&data_ov054_021111d0, 0x7230729, 0x72b072a, (unsigned int)&data_ov054_021112f8, 0x9920005, 15
};
#pragma section forcedata end
#pragma pop
