/* .data 0x020ab800..0x020ab820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab800[8] = {
    103, 46, 98, 105, 110, 0, 0, 0
};

unsigned char data_ov000_020ab808[24] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 114,
    101, 115, 117, 108, 116, 95, 110, 99, 108, 46, 98, 105
};
#pragma section forcedata end
#pragma pop
