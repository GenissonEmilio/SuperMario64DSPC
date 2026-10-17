/* .data 0x02111370..0x02111380 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov028_02111370[16] = {
    2, 255, 44, 1, 150, 0, 52, 8, 0, 0, 137, 232,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
