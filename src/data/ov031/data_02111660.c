/* .data 0x02111660..0x02111668 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov031_02111660[8] = {
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
