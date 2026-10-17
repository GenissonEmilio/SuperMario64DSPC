/* .data 0x020babf0..0x020babfc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020babf0[12] = {
    100, 97, 109, 97, 103, 101, 46, 98, 99, 97, 0, 0
};
#pragma section forcedata end
#pragma pop
