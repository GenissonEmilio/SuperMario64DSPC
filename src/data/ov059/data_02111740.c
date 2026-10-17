/* .data 0x02111740..0x02111760 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov059_02111740[16] = {
    193, 63, 4, 1, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255
};

unsigned char data_ov059_02111750[16] = {
    41, 254, 130, 232, 109, 1, 39, 253, 41, 254, 8, 234,
    92, 1, 229, 2
};
#pragma section forcedata end
#pragma pop
