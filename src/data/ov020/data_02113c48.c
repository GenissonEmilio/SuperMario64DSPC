/* .data 0x02113c48..0x02113ca8 */
extern unsigned char data_ov020_02113ab8[];
extern unsigned char data_ov020_02113ad8[];
extern unsigned char data_ov020_02113af8[];
extern unsigned char data_ov020_021140d4[];
extern unsigned char data_ov020_02113b40[];
extern unsigned char data_ov020_021139d8[];
extern unsigned char data_ov020_02113918[];
extern unsigned char data_ov020_021139b8[];
extern unsigned char data_ov020_02113938[];
extern unsigned char data_ov020_021139f8[];
extern unsigned char data_ov020_02113958[];
extern unsigned char data_ov020_02113978[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113c48[6] = {
    672, (unsigned int)&data_ov020_02113ab8, 704, (unsigned int)&data_ov020_02113ad8, 736, (unsigned int)&data_ov020_02113af8
};

unsigned int data_ov020_02113c60[18] = {
    0xb00, (unsigned int)&data_ov020_021140d4, 0x505, (unsigned int)&data_ov020_02113b40, 544, (unsigned int)&data_ov020_021139d8, 576, (unsigned int)&data_ov020_02113918,
    608, (unsigned int)&data_ov020_021139b8, 640, (unsigned int)&data_ov020_02113938, 672, (unsigned int)&data_ov020_021139f8, 704, (unsigned int)&data_ov020_02113958,
    736, (unsigned int)&data_ov020_02113978
};
#pragma section forcedata end
#pragma pop
