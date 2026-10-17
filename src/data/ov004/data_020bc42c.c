/* .data 0x020bc42c..0x020bc440 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov004_020bc42c[20] = {
    123, 1, 0, 0, 124, 1, 0, 0, 120, 1, 0, 0,
    121, 1, 0, 0, 122, 1, 0, 0
};
#pragma section forcedata end
#pragma pop
