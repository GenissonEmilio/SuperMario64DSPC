/* .data 0x02111b2c..0x02111b5c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov033_02111b44[8] = {
    0, 0, 0, 0, 0, 0, 1, 65
};

unsigned char data_ov033_02111b3c[8] = {
    252, 0, 115, 252, 132, 3, 125, 255
};

unsigned char data_ov033_02111b34[8] = {
    0, 0, 0, 0, 0, 0, 2, 240
};

unsigned char data_ov033_02111b2c[8] = {
    252, 0, 44, 1, 112, 254, 108, 7
};

unsigned char data_ov033_02111b4c[16] = {
    252, 0, 44, 1, 112, 254, 108, 7, 0, 0, 0, 0,
    0, 0, 2, 240
};
#pragma section forcedata end
#pragma pop
