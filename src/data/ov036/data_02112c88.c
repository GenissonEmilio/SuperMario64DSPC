/* .data 0x02112c88..0x02112cc8 */
extern unsigned char data_ov036_02112dfc[];
extern unsigned char data_ov036_02112c28[];
extern unsigned char data_ov036_02112cd4[];
extern unsigned char data_ov036_02112a00[];
extern unsigned char data_ov036_02112c54[];
extern unsigned char data_ov036_02112a24[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov036_02112c88[12] = {
    2, 249, 146, 9, 0, 0, 0, 64, 0, 0, 0, 0
};

unsigned int data_ov036_02112c94[5] = {
    0x6802, (unsigned int)&data_ov036_02112dfc, 0x703, (unsigned int)&data_ov036_02112c28, 0x504
};

unsigned int data_ov036_02112ca8[8] = {
    (unsigned int)&data_ov036_02112cd4, 267, (unsigned int)&data_ov036_02112a00, 0x401, (unsigned int)&data_ov036_02112c54, 518, (unsigned int)&data_ov036_02112a24, 519
};
#pragma section forcedata end
#pragma pop
