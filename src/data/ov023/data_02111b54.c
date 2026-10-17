/* .data 0x02111b54..0x02111b60 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov023_02111b54[12] = {
    0, 0, 14, 255, 255, 127, 14, 0, 11, 255, 255, 127
};
#pragma section forcedata end
#pragma pop
