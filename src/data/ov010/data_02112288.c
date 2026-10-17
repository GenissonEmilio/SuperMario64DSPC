/* .data 0x02112288..0x02112294 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112288[12] = {
    0, 0, 14, 255, 255, 255, 14, 0, 12, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
