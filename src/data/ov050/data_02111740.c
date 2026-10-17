/* .data 0x02111740..0x02111760 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_02111740[32] = {
    23, 0, 100, 0, 0, 0, 230, 251, 0, 0, 0, 0,
    0, 0, 255, 255, 23, 0, 156, 255, 0, 0, 230, 251,
    0, 0, 0, 0, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
