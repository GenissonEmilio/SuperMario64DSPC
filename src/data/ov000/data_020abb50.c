/* .data 0x020abb50..0x020abb6c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abb50[4] = {
    77, 71, 47, 100
};

unsigned char data_ov000_020abb54[24] = {
    95, 50, 100, 95, 116, 104, 117, 109, 95, 97, 109, 105,
    100, 97, 95, 110, 99, 108, 46, 98, 105, 110, 0, 0
};
#pragma section forcedata end
#pragma pop
