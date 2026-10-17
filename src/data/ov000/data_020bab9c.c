/* .data 0x020bab9c..0x020babf0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bab9c[12] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 104
};

unsigned char data_ov000_020baba8[36] = {
    97, 110, 97, 99, 104, 97, 110, 47, 104, 97, 110, 97,
    99, 104, 97, 110, 95, 98, 111, 100, 121, 48, 51, 95,
    100, 97, 109, 97, 103, 101, 46, 98, 99, 97, 0, 0
};

unsigned char data_ov000_020babcc[36] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 104,
    97, 110, 97, 99, 104, 97, 110, 47, 104, 97, 110, 97,
    99, 104, 97, 110, 95, 98, 111, 100, 121, 48, 52, 95
};
#pragma section forcedata end
#pragma pop
