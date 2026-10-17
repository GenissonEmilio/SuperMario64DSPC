/* .data 0x02113d30..0x02113d8c */
extern unsigned char data_ov016_02113e54[];
extern unsigned char data_ov016_02113b00[];
extern unsigned char data_ov016_02113b18[];
extern unsigned char data_ov016_02113ae0[];
extern unsigned char data_ov016_02113d0c[];
extern unsigned char data_ov016_02113b68[];
extern unsigned char data_ov016_02113ae4[];
extern unsigned char data_ov016_02113b28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov016_02113d30[28] = {
    76, 4, 162, 254, 0, 0, 113, 28, 0, 0, 0, 0,
    0, 0, 106, 230, 76, 4, 56, 255, 0, 0, 113, 28,
    0, 0, 0, 0
};

unsigned int data_ov016_02113d4c[16] = {
    0x1602, (unsigned int)&data_ov016_02113e54, 515, (unsigned int)&data_ov016_02113b00, 260, (unsigned int)&data_ov016_02113b18, 267, (unsigned int)&data_ov016_02113ae0,
    0x401, (unsigned int)&data_ov016_02113d0c, 520, (unsigned int)&data_ov016_02113b68, 270, (unsigned int)&data_ov016_02113ae4, 266, (unsigned int)&data_ov016_02113b28
};
#pragma section forcedata end
#pragma pop
