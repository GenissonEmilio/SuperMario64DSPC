/* .data 0x02113d30..0x02113d80 */
extern unsigned char data_ov020_021137fc[];
extern unsigned char data_ov020_02114508[];
extern unsigned char data_ov020_02113b98[];
extern unsigned char data_ov020_02113998[];
extern unsigned char data_ov020_02113d80[];
extern unsigned char data_ov020_02113dd0[];
extern unsigned char data_ov020_02114004[];
extern unsigned char data_ov020_02113e20[];
extern unsigned char data_ov020_02113e70[];
extern unsigned char data_ov020_02113ec0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov020_02113d30[2] = {
    266, (unsigned int)&data_ov020_021137fc
};

unsigned int data_ov020_02113d38[18] = {
    0x1600, (unsigned int)&data_ov020_02114508, 0x805, (unsigned int)&data_ov020_02113b98, 544, (unsigned int)&data_ov020_02113998, 0x540, (unsigned int)&data_ov020_02113d80,
    0x560, (unsigned int)&data_ov020_02113dd0, 0x680, (unsigned int)&data_ov020_02114004, 0x5a0, (unsigned int)&data_ov020_02113e20, 0x5c0, (unsigned int)&data_ov020_02113e70,
    0x5e0, (unsigned int)&data_ov020_02113ec0
};
#pragma section forcedata end
#pragma pop
