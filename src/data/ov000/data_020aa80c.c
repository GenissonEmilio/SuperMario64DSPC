/* .data 0x020aa80c..0x020aa820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa80c[20] = {
    100, 97, 116, 97, 47, 118, 114, 98, 111, 120, 47, 118,
    114, 48, 53, 46, 98, 109, 100, 0
};
#pragma section forcedata end
#pragma pop
