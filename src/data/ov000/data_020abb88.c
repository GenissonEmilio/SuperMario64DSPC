/* .data 0x020abb88..0x020abbb4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abb88[12] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47
};

unsigned char data_ov000_020abb94[16] = {
    112, 97, 100, 100, 108, 101, 95, 101, 110, 100, 46, 98,
    99, 97, 0, 0
};

unsigned char data_ov000_020abba4[16] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 115, 103, 95,
    103, 111, 97, 108
};
#pragma section forcedata end
#pragma pop
