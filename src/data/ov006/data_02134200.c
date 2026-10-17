/* .data 0x02134200..0x02134210 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02134200[16] = {
    248, 0, 248, 1, 239, 17, 0, 0, 0, 0, 253, 1,
    239, 17, 255, 255
};
#pragma section forcedata end
#pragma pop
