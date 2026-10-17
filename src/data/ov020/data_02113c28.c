/* .data 0x02113c28..0x02113c48 */
extern unsigned char data_ov020_02113a18[];
extern unsigned char data_ov020_02113a38[];
extern unsigned char data_ov020_02113a58[];
extern unsigned char data_ov020_02113a78[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113c28[8] = {
    544, (unsigned int)&data_ov020_02113a18, 576, (unsigned int)&data_ov020_02113a38, 608, (unsigned int)&data_ov020_02113a58, 640, (unsigned int)&data_ov020_02113a78
};
#pragma section forcedata end
#pragma pop
