/* .data 0x02112490..0x021124bc */
extern unsigned char data_ov045_02112470[];
extern unsigned char data_ov045_021124bc[];
extern unsigned char data_ov045_02112940[];
extern unsigned char data_ov045_02112780[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov045_02112490[1] = {
    (unsigned int)&data_ov045_02112470
};

unsigned int data_ov045_02112494[2] = {
    (unsigned int)&data_ov045_021124bc, 0x14e60000
};

unsigned char data_ov045_0211249c[16] = {
    175, 25, 10, 15, 245, 0, 0, 192, 0, 0, 38, 0,
    4, 34, 0, 0
};

unsigned int data_ov045_021124ac[4] = {
    0x3700, (unsigned int)&data_ov045_02112940, 0x3805, (unsigned int)&data_ov045_02112780
};
#pragma section forcedata end
#pragma pop
