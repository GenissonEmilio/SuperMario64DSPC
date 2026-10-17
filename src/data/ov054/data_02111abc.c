/* .data 0x02111abc..0x02111ad4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111abc[24] = {
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 255, 255,
    150, 0, 172, 13, 120, 0, 0, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
