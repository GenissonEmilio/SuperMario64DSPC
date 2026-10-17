/* .data 0x02111a4c..0x02111abc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov041_02111a4c[12] = {
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov041_02111a58[32] = {
    76, 0, 156, 255, 19, 0, 32, 3, 255, 255, 0, 192,
    0, 0, 216, 6, 31, 0, 0, 0, 50, 0, 152, 8,
    0, 0, 0, 0, 0, 0, 2, 255
};

unsigned char data_ov041_02111a78[68] = {
    30, 0, 162, 254, 13, 1, 156, 255, 0, 0, 0, 0,
    0, 0, 6, 255, 30, 0, 0, 0, 105, 2, 144, 232,
    0, 0, 0, 0, 0, 0, 6, 255, 247, 0, 64, 245,
    19, 0, 204, 255, 0, 0, 0, 0, 0, 0, 255, 255,
    247, 0, 6, 251, 19, 0, 243, 2, 0, 0, 0, 0,
    0, 0, 255, 255, 247, 0, 94, 1
};
#pragma section forcedata end
#pragma pop
