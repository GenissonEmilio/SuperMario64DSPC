/* .data 0x02111640..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov046_02111640[32] = {
    176, 4, 172, 13, 0, 0, 0, 0, 0, 0, 255, 255,
    236, 0, 172, 13, 176, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 255, 255, 236, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
