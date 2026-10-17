/* .data 0x02111580..0x021115e0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111580[28] = {
    13, 27, 0, 0, 121, 235, 0, 0, 0, 52, 18, 0,
    125, 20, 0, 0, 9, 242, 0, 192, 0, 35, 18, 0,
    97, 13, 0, 0
};

unsigned char data_ov054_0211159c[32] = {
    37, 249, 0, 0, 0, 18, 18, 0, 214, 6, 0, 0,
    181, 255, 0, 192, 0, 1, 18, 0, 181, 255, 0, 0,
    37, 249, 0, 0, 0, 0, 18, 0
};

unsigned char data_ov054_021115bc[36] = {
    32, 249, 0, 0, 75, 0, 0, 64, 0, 0, 18, 0,
    75, 0, 0, 0, 219, 6, 0, 128, 0, 0, 18, 0,
    135, 20, 0, 0, 181, 255, 0, 192, 0, 17, 18, 0
};
#pragma section forcedata end
#pragma pop
