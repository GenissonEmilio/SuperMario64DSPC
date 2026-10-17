/* .data 0x020bbbcc..0x020bbc00 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bbbcc[52] = {
    100, 97, 116, 97, 47, 50, 68, 95, 99, 97, 100, 47,
    100, 95, 50, 100, 95, 112, 108, 97, 121, 101, 114, 95,
    115, 101, 108, 101, 99, 116, 95, 109, 97, 114, 105, 111,
    95, 56, 98, 105, 116, 95, 110, 99, 108, 46, 98, 105,
    110, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
