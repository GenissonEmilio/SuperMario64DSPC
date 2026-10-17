/* .data 0x0211cc44..0x0211cc7c */
extern unsigned char data_ov075_0211cfe4[];
extern unsigned char data_ov075_0211cfb4[];
extern unsigned char data_ov075_0211cc24[];
extern unsigned char data_ov075_0211caac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211cc5c[2] = {
    (unsigned int)&data_ov075_0211cfe4, 6
};

unsigned int data_ov075_0211cc54[2] = {
    (unsigned int)&data_ov075_0211cfb4, 6
};

unsigned int data_ov075_0211cc4c[2] = {
    (unsigned int)&data_ov075_0211cc24, 4
};

unsigned int data_ov075_0211cc44[2] = {
    (unsigned int)&data_ov075_0211caac, 3
};

unsigned char data_ov075_0211cc64[24] = {
    208, 0, 186, 129, 128, 3, 0, 0, 208, 0, 214, 129,
    132, 3, 0, 0, 208, 0, 242, 129, 136, 3, 0, 0
};
#pragma section forcedata end
#pragma pop
