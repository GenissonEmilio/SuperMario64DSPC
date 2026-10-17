/* .data 0x020ab7ec..0x020ab800 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab7ec[20] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 106,
    117, 109, 112, 95, 73, 95, 110, 99
};
#pragma section forcedata end
#pragma pop
