/* .data 0x02112c44..0x02112ca8 */
extern unsigned char data_ov056_021115d0[];
extern unsigned char data_ov056_02112d44[];
extern unsigned char data_ov056_02112bc8[];
extern unsigned char data_ov056_02112bf8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov056_02112c44[2] = {
    3, (unsigned int)&data_ov056_021115d0
};

unsigned int data_ov056_02112c4c[3] = {
    (unsigned int)&data_ov056_02112d44, (unsigned int)&data_ov056_02112bc8, 0x73b073d
};

unsigned int data_ov056_02112c58[4] = {
    0x73f073e, (unsigned int)&data_ov056_02112bf8, 0xa280001, 79
};

unsigned char data_ov056_02112c68[32] = {
    0, 0, 49, 253, 96, 9, 148, 213, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 215, 217, 4, 247, 16, 23,
    0, 0, 199, 81, 0, 0, 16, 4
};

unsigned char data_ov056_02112c88[32] = {
    2, 255, 74, 254, 113, 4, 76, 210, 0, 0, 86, 245,
    0, 0, 7, 255, 0, 0, 192, 224, 8, 57, 0, 0,
    0, 0, 0, 0, 2, 255, 20, 223
};
#pragma section forcedata end
#pragma pop
