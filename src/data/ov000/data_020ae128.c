/* .data 0x020ae128..0x020ae140 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ae128[4] = {
    112, 0, 0, 0
};

unsigned char data_ov000_020ae12c[20] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 109,
    105, 112, 47, 109, 105, 112, 95, 114
};
#pragma section forcedata end
#pragma pop
