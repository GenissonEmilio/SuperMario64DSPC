/* .data 0x020ab8a0..0x020ab8cc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab8b0[8] = {
    100, 97, 116, 97, 47, 112, 108, 97
};

unsigned char data_ov000_020ab8a8[8] = {
    108, 46, 98, 105, 110, 0, 0, 0
};

unsigned char data_ov000_020ab8a0[8] = {
    101, 114, 101, 115, 97, 95, 110, 99
};

unsigned char data_ov000_020ab8b8[20] = {
    121, 101, 114, 47, 76, 95, 108, 105, 101, 95, 101, 110,
    100, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
