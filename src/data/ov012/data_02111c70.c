/* .data 0x02111c70..0x02111c90 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov012_02111c70[32] = {
    0, 0, 16, 255, 255, 255, 16, 0, 22, 255, 255, 255,
    38, 0, 26, 255, 255, 255, 64, 0, 6, 255, 255, 255,
    70, 0, 6, 255, 255, 255, 0, 0
};
#pragma section forcedata end
#pragma pop
