/* .data 0x02111680..0x021116a0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111680[32] = {
    0, 0, 0, 0, 0, 0, 255, 255, 34, 0, 64, 6,
    250, 0, 246, 9, 0, 0, 0, 0, 0, 0, 255, 255,
    30, 0, 94, 1, 250, 0, 172, 13
};
#pragma section forcedata end
#pragma pop
