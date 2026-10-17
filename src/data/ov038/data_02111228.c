/* .data 0x02111228..0x021112a4 */
extern unsigned char data_ov038_021111dc[];
extern unsigned char data_ov038_021111e8[];
extern unsigned char data_ov038_021111c4[];
extern unsigned char data_ov038_021112a4[];
extern unsigned char data_ov038_021111f8[];
extern unsigned char data_ov038_021111c0[];
extern unsigned char data_ov038_021111c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov038_02111228[3] = {
    (unsigned int)&data_ov038_021111dc, 0x3200001, 47
};

unsigned char data_ov038_02111244[16] = {
    49, 0, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0
};

unsigned char data_ov038_02111234[16] = {
    49, 0, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0
};

unsigned char data_ov038_02111254[32] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 4, 0,
    255, 0, 0, 0, 224, 15, 4, 0, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned int data_ov038_02111274[12] = {
    260, (unsigned int)&data_ov038_021111e8, 267, (unsigned int)&data_ov038_021111c4, 0x401, (unsigned int)&data_ov038_021112a4, 520, (unsigned int)&data_ov038_021111f8,
    268, (unsigned int)&data_ov038_021111c0, 270, (unsigned int)&data_ov038_021111c8
};
#pragma section forcedata end
#pragma pop
