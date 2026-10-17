/* .data 0x020aa580..0x020aa590 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa580[16] = {
    77, 71, 47, 114, 111, 117, 108, 101, 116, 116, 101, 46,
    98, 109, 100, 0
};
#pragma section forcedata end
#pragma pop
