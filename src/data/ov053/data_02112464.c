/* .data 0x02112464..0x0211247c */
extern unsigned char data_ov053_021111c0[];
extern unsigned char data_ov053_021111bc[];
extern unsigned char data_ov053_021114f8[];
extern unsigned char data_ov053_0211126c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_02112464[6] = {
    30, (unsigned int)&data_ov053_021111c0, (unsigned int)&data_ov053_021111bc, (unsigned int)&data_ov053_021114f8, 2, (unsigned int)&data_ov053_0211126c
};
#pragma section forcedata end
#pragma pop
