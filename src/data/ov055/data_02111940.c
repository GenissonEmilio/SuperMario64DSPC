/* .data 0x02111940..0x02111958 */
extern unsigned char data_ov055_02111930[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov055_02111940[1] = {
    (unsigned int)&data_ov055_02111930
};

unsigned char data_ov055_02111944[8] = {
    0, 0, 0, 0, 0, 3, 8, 7
};

unsigned char data_ov055_0211194c[12] = {
    4, 247, 44, 1, 129, 252, 4, 247, 44, 1, 127, 3
};
#pragma section forcedata end
#pragma pop
