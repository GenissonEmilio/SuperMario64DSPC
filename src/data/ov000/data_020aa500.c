/* .data 0x020aa500..0x020aa510 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa500[16] = {
    77, 71, 47, 114, 105, 110, 103, 65, 46, 98, 109, 100,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
