/* .data 0x021122b8..0x02112318 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_021122d8[32] = {
    80, 0, 166, 249, 0, 0, 222, 4, 255, 1, 0, 96,
    0, 0, 240, 10, 18, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 255
};

unsigned char data_ov010_021122b8[32] = {
    67, 0, 130, 251, 0, 0, 148, 248, 0, 0, 0, 0,
    0, 0, 4, 255, 67, 0, 130, 251, 0, 0, 148, 248,
    0, 0, 0, 0, 0, 0, 11, 255
};

extern unsigned char data_ov010_021122f8[32] ;
#pragma section forcedata end
#pragma pop
