/* .data 0x021113ac..0x02111438 */
extern unsigned char data_ov008_0211122c[];
extern unsigned char data_ov008_0211124c[];
extern unsigned char data_ov008_021111c4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov008_021113ac[1] = {
    (unsigned int)&data_ov008_0211122c
};

unsigned char data_ov008_021113c0[16] = {
    0, 0, 226, 4, 0, 0, 248, 17, 0, 0, 0, 128,
    0, 0, 0, 0
};

unsigned int data_ov008_021113b0[4] = {
    0x407, (unsigned int)&data_ov008_0211124c, 270, (unsigned int)&data_ov008_021111c4
};

unsigned char data_ov008_021113d0[48] = {
    0, 0, 64, 6, 0, 0, 248, 17, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 132, 3, 0, 0, 248, 17,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 208, 7,
    0, 0, 248, 17, 0, 0, 0, 128, 0, 0, 0, 0
};

unsigned char data_ov008_02111400[56] = {
    15, 0, 196, 9, 0, 0, 74, 21, 0, 0, 0, 0,
    0, 0, 31, 255, 15, 0, 208, 7, 0, 0, 74, 21,
    0, 0, 0, 0, 0, 0, 31, 255, 15, 0, 220, 5,
    0, 0, 74, 21, 0, 0, 0, 0, 0, 0, 31, 255,
    15, 0, 182, 3, 0, 0, 74, 21
};
#pragma section forcedata end
#pragma pop
