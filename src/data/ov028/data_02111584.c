/* .data 0x02111584..0x021115e0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov028_02111584[24] = {
    3, 1, 180, 251, 100, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 255, 255, 3, 1, 14, 6, 100, 0, 6, 255
};

unsigned char data_ov028_0211159c[32] = {
    0, 0, 0, 0, 0, 0, 255, 255, 3, 1, 0, 0,
    100, 0, 44, 1, 0, 0, 0, 0, 0, 0, 255, 255,
    49, 0, 138, 2, 6, 255, 198, 248
};

unsigned char data_ov028_021115bc[36] = {
    0, 0, 0, 0, 0, 0, 243, 0, 30, 0, 92, 249,
    250, 0, 186, 250, 0, 0, 0, 0, 0, 0, 6, 255,
    31, 0, 6, 255, 250, 0, 174, 252, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
