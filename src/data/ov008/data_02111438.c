/* .data 0x02111438..0x02111508 */
extern unsigned char data_ov008_021115c8[];
extern unsigned char data_ov008_021112d0[];
extern unsigned char data_ov008_02111320[];
extern unsigned char data_ov008_021111c8[];
extern unsigned char data_ov008_021114a8[];
extern unsigned char data_ov008_02111400[];
extern unsigned char data_ov008_0211126c[];
extern unsigned char data_ov008_0211128c[];
extern unsigned char data_ov008_021112f8[];
extern unsigned char data_ov008_02111350[];
extern unsigned char data_ov008_021118b8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111438[24] = {
    0, 0, 0, 0, 0, 0, 31, 255, 15, 0, 144, 1,
    0, 0, 74, 21, 0, 0, 0, 0, 0, 0, 31, 255
};

unsigned int data_ov008_02111450[22] = {
    0x2f00, (unsigned int)&data_ov008_021115c8, 0x505, (unsigned int)&data_ov008_021112d0, 800, (unsigned int)&data_ov008_02111320, 293, (unsigned int)&data_ov008_021111c8,
    0xc45, (unsigned int)&data_ov008_021114a8, 0x560, (unsigned int)&data_ov008_02111400, 0x465, (unsigned int)&data_ov008_0211126c, 0x485, (unsigned int)&data_ov008_0211128c,
    0x5a5, (unsigned int)&data_ov008_021112f8, 0x6c5, (unsigned int)&data_ov008_02111350, 0x6be5, (unsigned int)&data_ov008_021118b8
};

unsigned char data_ov008_021114a8[96] = {
    63, 66, 138, 2, 250, 0, 172, 13, 61, 196, 76, 4,
    50, 0, 2, 239, 62, 96, 138, 2, 100, 0, 20, 236,
    62, 100, 76, 4, 100, 0, 38, 233, 62, 102, 64, 6,
    100, 0, 20, 236, 62, 104, 52, 8, 100, 0, 38, 233,
    63, 32, 138, 2, 100, 0, 20, 236, 63, 36, 76, 4,
    100, 0, 38, 233, 63, 38, 64, 6, 100, 0, 20, 236,
    63, 40, 52, 8, 100, 0, 38, 233, 37, 226, 202, 8,
    0, 0, 120, 5, 37, 226, 202, 8, 0, 0, 20, 5
};
#pragma section forcedata end
#pragma pop
