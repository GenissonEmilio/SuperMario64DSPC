/* .data 0x02112f2c..0x02112fd0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov009_02112f2c[16] = {
    192, 15, 0, 1, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255
};

unsigned char data_ov009_02112f3c[28] = {
    0, 0, 80, 251, 254, 0, 144, 26, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 149, 250, 254, 0, 11, 26,
    0, 0, 0, 128
};

extern unsigned char data_ov009_02112f58[36] ;

extern unsigned char data_ov009_02112f7c[84] ;
#pragma section forcedata end
#pragma pop
