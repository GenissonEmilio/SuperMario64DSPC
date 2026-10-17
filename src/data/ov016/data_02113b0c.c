/* .data 0x02113b0c..0x02113b28 */
extern unsigned char data_ov016_02113ae8[];
extern unsigned char data_ov016_02113b78[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov016_02113b0c[1] = {
    (unsigned int)&data_ov016_02113ae8
};

unsigned int data_ov016_02113b10[2] = {
    (unsigned int)&data_ov016_02113b78, 0xfa00000
};

unsigned char data_ov016_02113b18[16] = {
    2, 255, 56, 230, 176, 4, 68, 253, 0, 0, 0, 32,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
