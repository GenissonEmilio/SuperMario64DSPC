/* .data 0x02112cc8..0x02112d44 */
extern unsigned char data_ov056_02112c88[];
extern unsigned char data_ov056_02112bc0[];
extern unsigned char data_ov056_02112c68[];
extern unsigned char data_ov056_02112bd8[];
extern unsigned char data_ov056_02112bc4[];
extern unsigned char data_ov056_02112c04[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov056_02112cc8[2] = {
    (unsigned int)&data_ov056_02112c88, 267
};

unsigned int data_ov056_02112cd0[9] = {
    (unsigned int)&data_ov056_02112bc0, 513, (unsigned int)&data_ov056_02112c68, 264, (unsigned int)&data_ov056_02112bd8, 270, (unsigned int)&data_ov056_02112bc4, 266,
    (unsigned int)&data_ov056_02112c04
};

unsigned char data_ov056_02112cf4[80] = {
    0, 0, 2, 255, 255, 127, 2, 0, 2, 255, 1, 127,
    4, 0, 2, 255, 2, 127, 6, 0, 2, 255, 3, 127,
    8, 0, 2, 255, 255, 127, 10, 0, 2, 255, 255, 127,
    12, 0, 2, 255, 255, 127, 14, 0, 2, 255, 255, 127,
    16, 0, 3, 255, 255, 127, 19, 0, 3, 255, 255, 127,
    22, 0, 4, 255, 255, 127, 26, 0, 3, 255, 255, 127,
    29, 0, 3, 255, 255, 127, 0, 0
};
#pragma section forcedata end
#pragma pop
