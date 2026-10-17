/* .data 0x020aa944..0x020aa95c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa944[24] = {
    100, 97, 116, 97, 47, 115, 111, 117, 110, 100, 95, 100,
    97, 116, 97, 46, 115, 100, 97, 116, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
