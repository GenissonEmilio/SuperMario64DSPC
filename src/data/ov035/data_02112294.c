/* .data 0x02112294..0x02112318 */
extern unsigned char data_ov035_0211205c[];
extern unsigned char data_ov035_02112040[];
extern unsigned char data_ov035_02112048[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov035_02112294[2] ;

extern unsigned int data_ov035_0211229c[3] ;

unsigned char data_ov035_021122a8[48] = {
    62, 46, 76, 4, 208, 32, 188, 2, 62, 46, 0, 0,
    160, 15, 0, 0, 62, 46, 120, 5, 112, 23, 0, 0,
    62, 46, 12, 254, 76, 29, 236, 250, 62, 46, 236, 250,
    136, 19, 180, 251, 61, 206, 130, 2, 170, 5, 40, 7
};

unsigned char data_ov035_021122d8[64] = {
    0, 0, 190, 5, 62, 244, 128, 0, 0, 0, 114, 156,
    0, 0, 40, 5, 0, 0, 234, 6, 62, 244, 128, 0,
    0, 0, 114, 156, 0, 0, 40, 5, 0, 0, 190, 5,
    62, 244, 172, 1, 0, 0, 114, 156, 0, 0, 40, 5,
    0, 0, 234, 6, 62, 244, 172, 1, 0, 0, 114, 156,
    0, 0, 40, 5
};
#pragma section forcedata end
#pragma pop
