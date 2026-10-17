/* .data 0x02113ca8..0x02113ccc */
extern unsigned char data_ov020_02113a98[];
extern unsigned char data_ov020_0211383c[];
extern unsigned char data_ov020_021138ac[];
extern unsigned char data_ov020_021138bc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113ca8[9] = {
    512, (unsigned int)&data_ov020_02113a98, 517, (unsigned int)&data_ov020_0211383c, 288, (unsigned int)&data_ov020_021138ac, 320, (unsigned int)&data_ov020_021138bc,
    352
};
#pragma section forcedata end
#pragma pop
