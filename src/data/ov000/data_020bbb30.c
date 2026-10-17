/* .data 0x020bbb30..0x020bbb64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bbb30[52] = {
    100, 97, 116, 97, 47, 50, 68, 95, 99, 97, 100, 47,
    100, 95, 50, 100, 95, 112, 108, 97, 121, 101, 114, 95,
    115, 101, 108, 101, 99, 116, 95, 108, 117, 105, 103, 105,
    95, 56, 98, 105, 116, 95, 110, 99, 103, 46, 98, 105,
    110, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
