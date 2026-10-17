/* .data 0x02112f24..0x02112f4c */
extern unsigned char data_ov032_021128f8[];
extern unsigned char data_ov032_021128f4[];
extern unsigned char data_ov032_02112938[];
extern unsigned char data_ov032_02112900[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov032_02112f2c[8] = {
    0, 0, 0, 0, 0, 0, 255, 255
};

unsigned char data_ov032_02112f24[8] = {
    239, 0, 56, 230, 54, 247, 132, 3
};

unsigned int data_ov032_02112f34[6] = {
    91, (unsigned int)&data_ov032_021128f8, (unsigned int)&data_ov032_021128f4, (unsigned int)&data_ov032_02112938, 1, (unsigned int)&data_ov032_02112900
};
#pragma section forcedata end
#pragma pop
