/* .data 0x02111740..0x02111760 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_02111740[32] = {
    67, 0, 85, 252, 100, 0, 211, 251, 0, 0, 170, 42,
    0, 0, 10, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
