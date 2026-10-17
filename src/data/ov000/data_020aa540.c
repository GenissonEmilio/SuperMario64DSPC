/* .data 0x020aa540..0x020aa550 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa540[16] = {
    77, 71, 47, 101, 115, 112, 95, 99, 97, 114, 100, 46,
    98, 109, 100, 0
};
#pragma section forcedata end
#pragma pop
