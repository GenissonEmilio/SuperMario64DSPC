/* .data 0x020aa640..0x020aa654 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa640[20] = {
    77, 71, 47, 102, 97, 99, 101, 95, 119, 97, 105, 116,
    46, 98, 116, 112, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
