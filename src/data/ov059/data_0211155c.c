/* .data 0x0211155c..0x0211159c */
extern unsigned char data_ov059_021115dc[];
extern unsigned char data_ov059_021114f4[];
extern unsigned char data_ov059_02111510[];
extern unsigned char data_ov059_021114c0[];
extern unsigned char data_ov059_0211159c[];
extern unsigned char data_ov059_021114c4[];
extern unsigned char data_ov059_021114c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov059_02111560[4] = {
    31, 0, 0, 0
};

unsigned char data_ov059_0211155c[4] = {
    1, 0, 64, 6
};

unsigned int data_ov059_02111564[14] = {
    0x1e02, (unsigned int)&data_ov059_021115dc, 515, (unsigned int)&data_ov059_021114f4, 260, (unsigned int)&data_ov059_02111510, 267, (unsigned int)&data_ov059_021114c0,
    0x401, (unsigned int)&data_ov059_0211159c, 268, (unsigned int)&data_ov059_021114c4, 270, (unsigned int)&data_ov059_021114c8
};
#pragma section forcedata end
#pragma pop
