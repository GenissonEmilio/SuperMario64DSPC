/* .data 0x02111a4c..0x02111a78 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov055_02111a4c[12] = {
    0, 0, 70, 5, 37, 226, 124, 252, 0, 0, 186, 250
};

unsigned char data_ov055_02111a58[32] = {
    37, 226, 68, 253, 0, 0, 186, 250, 37, 226, 12, 254,
    0, 0, 186, 250, 37, 226, 124, 252, 0, 0, 70, 5,
    37, 226, 68, 253, 0, 0, 70, 5
};
#pragma section forcedata end
#pragma pop
