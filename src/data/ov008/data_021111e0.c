/* .data 0x021111e0..0x021111ec */
extern unsigned char data_ov008_021111d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov008_021111e0[3] = {
    (unsigned int)&data_ov008_021111d8, 0, 0x1f400000
};
#pragma section forcedata end
#pragma pop
