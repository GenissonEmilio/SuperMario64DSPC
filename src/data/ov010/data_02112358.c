/* .data 0x02112358..0x021123d8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112358[16] = {
    42, 0, 54, 247, 212, 254, 102, 239, 0, 0, 0, 0,
    0, 0, 85, 3
};

extern unsigned char data_ov010_02112368[48] ;

unsigned char data_ov010_02112398[64] = {
    42, 0, 250, 0, 56, 255, 208, 238, 0, 0, 0, 0,
    0, 0, 85, 1, 80, 0, 88, 2, 212, 254, 216, 245,
    255, 255, 0, 128, 0, 0, 242, 10, 75, 0, 169, 1,
    125, 0, 170, 251, 255, 255, 0, 128, 0, 0, 12, 7,
    237, 0, 212, 254, 156, 255, 48, 248, 0, 0, 0, 128,
    0, 0, 2, 33
};
#pragma section forcedata end
#pragma pop
