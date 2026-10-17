/* .data 0x020adbcc..0x020adbec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020adbcc[32] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    112, 95, 107, 111, 111, 112, 97, 95, 116, 104, 114, 111,
    119, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
