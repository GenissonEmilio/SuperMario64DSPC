/* .data 0x02111660..0x02111680 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov040_02111660[32] = {
    161, 0, 48, 248, 116, 245, 40, 241, 0, 0, 0, 0,
    0, 0, 255, 255, 30, 0, 200, 231, 22, 244, 236, 19,
    0, 0, 0, 0, 0, 0, 6, 255
};
#pragma section forcedata end
#pragma pop
