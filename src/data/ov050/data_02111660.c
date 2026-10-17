/* .data 0x02111660..0x02111680 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_02111660[32] = {
    59, 1, 92, 249, 20, 5, 92, 249, 1, 0, 4, 0,
    255, 255, 32, 0, 60, 1, 236, 250, 164, 6, 236, 250,
    0, 0, 0, 160, 224, 3, 192, 255
};
#pragma section forcedata end
#pragma pop
