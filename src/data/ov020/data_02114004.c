/* .data 0x02114004..0x021140b8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02114004[12] = {
    67, 0, 184, 11, 50, 0, 144, 1, 0, 0, 0, 0
};

extern unsigned char data_ov020_02114010[84] ;

unsigned char data_ov020_02114064[84] = {
    71, 0, 98, 248, 32, 3, 200, 0, 0, 0, 0, 0,
    0, 0, 255, 255, 58, 0, 236, 250, 0, 0, 52, 8,
    0, 0, 29, 231, 0, 0, 255, 255, 38, 1, 13, 250,
    0, 0, 134, 7, 0, 0, 142, 35, 0, 0, 255, 255,
    32, 1, 136, 250, 82, 3, 44, 1, 0, 0, 0, 64,
    0, 0, 255, 255, 32, 1, 68, 253, 82, 3, 156, 255,
    0, 0, 0, 192, 0, 0, 255, 255, 32, 1, 136, 250
};
#pragma section forcedata end
#pragma pop
