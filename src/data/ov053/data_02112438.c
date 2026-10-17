/* .data 0x02112438..0x0211244c */
extern unsigned char data_ov053_021111d4[];
extern unsigned char data_ov053_021111b8[];
extern unsigned char data_ov053_02112098[];
extern unsigned char data_ov053_021111fc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_02112438[5] = {
    (unsigned int)&data_ov053_021111d4, (unsigned int)&data_ov053_021111b8, (unsigned int)&data_ov053_02112098, 2, (unsigned int)&data_ov053_021111fc
};
#pragma section forcedata end
#pragma pop
