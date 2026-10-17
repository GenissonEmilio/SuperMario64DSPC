/* .data 0x02111abc..0x02111ad4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111abc[24] = {
    250, 10, 58, 7, 0, 192, 0, 0, 34, 0, 12, 17,
    141, 19, 14, 6, 91, 255, 0, 0, 0, 128, 48, 0
};
#pragma section forcedata end
#pragma pop
