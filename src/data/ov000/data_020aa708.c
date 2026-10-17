/* .data 0x020aa708..0x020aa71c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa708[20] = {
    77, 71, 47, 121, 111, 115, 104, 105, 95, 109, 111, 100,
    101, 108, 46, 98, 109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
