/* .data 0x020ad46c..0x020ad48c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ad46c[12] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 116
};

unsigned char data_ov000_020ad478[20] = {
    111, 103, 101, 122, 111, 47, 116, 111, 103, 101, 122, 111,
    46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
