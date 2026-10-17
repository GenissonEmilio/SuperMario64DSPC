/* .data 0x02111588..0x021115bc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov051_02111588[20] = {
    2, 255, 216, 14, 144, 1, 20, 5, 0, 0, 0, 160,
    0, 0, 2, 255, 160, 15, 144, 1
};

unsigned char data_ov051_0211159c[32] = {
    144, 1, 0, 0, 0, 192, 0, 0, 2, 255, 160, 15,
    144, 1, 156, 255, 0, 0, 0, 192, 0, 0, 2, 255,
    116, 14, 144, 1, 224, 252, 0, 0
};
#pragma section forcedata end
#pragma pop
