/* .data 0x02134300..0x02134310 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02134300[16] = {
    248, 64, 240, 1, 60, 0, 0, 0, 248, 64, 0, 0,
    61, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
