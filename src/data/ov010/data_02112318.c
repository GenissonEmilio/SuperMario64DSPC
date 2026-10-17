/* .data 0x02112318..0x02112358 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112318[8] = {
    37, 254, 136, 250, 119, 1, 212, 254
};

unsigned char data_ov010_02112320[24] = {
    37, 254, 236, 250, 119, 1, 212, 254, 37, 254, 68, 253,
    119, 1, 212, 254, 37, 254, 168, 253, 119, 1, 212, 254
};

unsigned char data_ov010_02112338[32] = {
    17, 1, 249, 234, 188, 2, 130, 239, 0, 0, 0, 32,
    0, 0, 255, 255, 19, 1, 169, 228, 76, 4, 50, 233,
    0, 0, 0, 32, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
