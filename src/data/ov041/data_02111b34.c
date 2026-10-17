/* .data 0x02111b34..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov041_02111b34[16] = {
    0, 0, 255, 255, 144, 0, 116, 255, 0, 0, 254, 227,
    0, 0, 0, 0
};

unsigned char data_ov041_02111b44[32] = {
    0, 0, 255, 255, 144, 0, 150, 0, 0, 0, 254, 227,
    0, 0, 0, 0, 0, 0, 255, 255, 144, 0, 164, 1,
    0, 0, 214, 227, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
