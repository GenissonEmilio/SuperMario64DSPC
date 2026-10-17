/* .data 0x02111720..0x02111740 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_02111720[32] = {
    67, 0, 242, 245, 156, 255, 180, 244, 0, 0, 0, 224,
    0, 0, 10, 255, 67, 0, 242, 4, 100, 0, 95, 249,
    0, 0, 29, 231, 0, 0, 10, 255
};
#pragma section forcedata end
#pragma pop
