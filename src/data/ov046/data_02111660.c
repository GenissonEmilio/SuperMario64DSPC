/* .data 0x02111660..0x02111680 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov046_02111660[32] = {
    176, 4, 84, 242, 0, 0, 0, 0, 0, 0, 255, 255,
    236, 0, 84, 242, 176, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 255, 143, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
