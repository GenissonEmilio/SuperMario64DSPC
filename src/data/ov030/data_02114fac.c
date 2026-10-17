/* .data 0x02114fac..0x02114ff4 */
extern unsigned char data_ov030_02115094[];
extern unsigned char data_ov030_02114ec4[];
extern unsigned char data_ov030_02114f74[];
extern unsigned char data_ov030_02114de0[];
extern unsigned char data_ov030_02114ff4[];
extern unsigned char data_ov030_02114e50[];
extern unsigned char data_ov030_02114e80[];
extern unsigned char data_ov030_02114de4[];
extern unsigned char data_ov030_02114e20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov030_02114fac[18] = {
    0x1402, (unsigned int)&data_ov030_02115094, 0x503, (unsigned int)&data_ov030_02114ec4, 0x404, (unsigned int)&data_ov030_02114f74, 267, (unsigned int)&data_ov030_02114de0,
    0x501, (unsigned int)&data_ov030_02114ff4, 518, (unsigned int)&data_ov030_02114e50, 519, (unsigned int)&data_ov030_02114e80, 270, (unsigned int)&data_ov030_02114de4,
    266, (unsigned int)&data_ov030_02114e20
};
#pragma section forcedata end
#pragma pop
