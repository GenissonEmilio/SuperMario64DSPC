/* .data 0x02111b88..0x02111bc8 */
extern unsigned char data_ov033_021116d4[];
extern unsigned char data_ov033_021116cc[];
extern unsigned char data_ov033_02111710[];
extern unsigned char data_ov033_021116f4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov033_02111b88[4] = {
    0, 0, 2, 240
};

unsigned char data_ov033_02111b8c[16] = {
    252, 0, 44, 1, 112, 254, 108, 7, 0, 0, 0, 0,
    0, 0, 2, 240
};

unsigned char data_ov033_02111b9c[20] = {
    0, 0, 9, 255, 255, 127, 9, 0, 4, 255, 255, 255,
    13, 0, 4, 255, 255, 255, 0, 0
};

unsigned int data_ov033_02111bb0[6] = {
    91, (unsigned int)&data_ov033_021116d4, (unsigned int)&data_ov033_021116cc, (unsigned int)&data_ov033_02111710, 1, (unsigned int)&data_ov033_021116f4
};
#pragma section forcedata end
#pragma pop
