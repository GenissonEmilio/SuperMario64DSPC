/* .data 0x020acabc..0x020acad8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020acabc[28] = {
    100, 97, 116, 97, 47, 68, 83, 77, 84, 47, 69, 85,
    82, 47, 116, 101, 120, 66, 97, 110, 107, 95, 71, 46,
    98, 109, 100, 0
};
#pragma section forcedata end
#pragma pop
