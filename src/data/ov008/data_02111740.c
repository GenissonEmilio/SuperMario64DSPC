/* .data 0x02111740..0x02111760 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111740[32] = {
    0, 0, 0, 0, 0, 0, 255, 255, 28, 0, 176, 4,
    0, 0, 168, 253, 0, 0, 0, 0, 0, 0, 255, 255,
    23, 0, 114, 6, 0, 0, 50, 0
};
#pragma section forcedata end
#pragma pop
