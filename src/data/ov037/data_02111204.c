/* .data 0x02111204..0x02111244 */
extern unsigned char data_ov037_021115a0[];
extern unsigned char data_ov037_02111348[];
extern unsigned char data_ov037_021114b0[];
extern unsigned char data_ov037_021113d8[];
extern unsigned char data_ov037_02111250[];
extern unsigned char data_ov037_021111c0[];
extern unsigned char data_ov037_02111298[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov037_02111204[4] = {
    15, 0, 0, 0
};

unsigned int data_ov037_02111210[2] = {
    0x3a25, (unsigned int)&data_ov037_021115a0
};

unsigned int data_ov037_02111208[2] = {
    0x920, (unsigned int)&data_ov037_02111348
};

unsigned int data_ov037_02111218[4] = {
    0xf40, (unsigned int)&data_ov037_021114b0, 0x1b45, (unsigned int)&data_ov037_021113d8
};

unsigned int data_ov037_02111228[7] = {
    0x504, (unsigned int)&data_ov037_02111250, 267, (unsigned int)&data_ov037_021111c0, 0x501, (unsigned int)&data_ov037_02111298, 264
};
#pragma section forcedata end
#pragma pop
