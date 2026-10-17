/* .data 0x02111228..0x021112a4 */
extern unsigned char data_ov042_021111dc[];
extern unsigned char data_ov042_021111e8[];
extern unsigned char data_ov042_021111c4[];
extern unsigned char data_ov042_021112a4[];
extern unsigned char data_ov042_021111c0[];
extern unsigned char data_ov042_021111c8[];
extern unsigned char data_ov042_021111f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov042_02111228[3] = {
    (unsigned int)&data_ov042_021111dc, 0x5140001, 47
};

unsigned int data_ov042_02111234[4] = {
    260, (unsigned int)&data_ov042_021111e8, 267, (unsigned int)&data_ov042_021111c4
};

unsigned int data_ov042_02111244[8] = {
    0x401, (unsigned int)&data_ov042_021112a4, 268, (unsigned int)&data_ov042_021111c0, 270, (unsigned int)&data_ov042_021111c8, 266, (unsigned int)&data_ov042_021111f8
};

unsigned char data_ov042_02111264[64] = {
    67, 76, 80, 83, 8, 0, 6, 0, 192, 15, 4, 1,
    255, 0, 0, 0, 192, 15, 28, 0, 255, 0, 0, 0,
    192, 63, 4, 1, 255, 0, 0, 0, 192, 47, 4, 0,
    255, 0, 0, 0, 196, 15, 116, 0, 255, 0, 0, 0,
    196, 15, 116, 1, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
