/* .data 0x02111b24..0x02111b34 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov043_02111b24[16] = {
    255, 25, 34, 11, 93, 0, 0, 192, 0, 0, 36, 0,
    4, 17, 0, 0
};
#pragma section forcedata end
#pragma pop
