/* .data 0x020abb18..0x020abb34 */
extern unsigned char data_ov001_020abb10[];
extern unsigned char data_ov001_020abb08[];
extern unsigned char data_ov001_020abb00[];
extern unsigned char data_ov001_020abaf8[];
extern unsigned char data_ov001_020abaf0[];
extern unsigned char data_ov001_020abae8[];
extern unsigned char data_ov001_020abae0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov001_020abb18[7] = {
    (unsigned int)&data_ov001_020abb10, (unsigned int)&data_ov001_020abb08, (unsigned int)&data_ov001_020abb00, (unsigned int)&data_ov001_020abaf8, (unsigned int)&data_ov001_020abaf0, (unsigned int)&data_ov001_020abae8, (unsigned int)&data_ov001_020abae0
};
#pragma section forcedata end
#pragma pop
