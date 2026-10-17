/* .data 0x021124f8..0x02112560 */
extern unsigned char data_ov053_02112514[];
extern unsigned char data_ov053_02112384[];
extern unsigned char data_ov053_021123c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov053_021124f8[1] = {
    (unsigned int)&data_ov053_02112514
};

unsigned int data_ov053_021124fc[6] = {
    (unsigned int)&data_ov053_02112384, 0x72c072e, 0x730072f, (unsigned int)&data_ov053_021123c8, 0x3200101, 159
};

unsigned char data_ov053_02112514[28] = {
    67, 76, 80, 83, 8, 0, 6, 0, 197, 15, 3, 0,
    255, 0, 0, 0, 192, 15, 3, 1, 255, 0, 0, 0,
    5, 128, 3, 0
};

unsigned char data_ov053_02112530[48] = {
    255, 0, 0, 0, 5, 176, 3, 0, 255, 0, 0, 0,
    192, 15, 35, 0, 255, 0, 0, 0, 192, 15, 3, 2,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
