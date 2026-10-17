/* .data 0x020afbec..0x020afc10 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020afbec[36] = {
    100, 97, 116, 97, 47, 115, 116, 97, 103, 101, 47, 104,
    111, 114, 105, 115, 111, 107, 111, 47, 104, 111, 114, 105,
    115, 111, 107, 111, 46, 107, 99, 108, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
