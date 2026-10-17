/* .data 0x020abcb4..0x020abcd8 */
extern unsigned char data_ov001_020abc4c[];
extern unsigned char data_ov001_020abc64[];
extern unsigned char data_ov001_020abc7c[];
extern unsigned char data_ov001_020abc44[];
extern unsigned char data_ov001_020abc34[];
extern unsigned char data_ov001_020abc3c[];
extern unsigned char data_ov001_020abc94[];
extern unsigned char data_ov001_020abcd8[];
extern unsigned char data_ov001_020abd18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov001_020abcb4[9] = {
    (unsigned int)&data_ov001_020abc4c, (unsigned int)&data_ov001_020abc64, (unsigned int)&data_ov001_020abc7c, (unsigned int)&data_ov001_020abc44, (unsigned int)&data_ov001_020abc34, (unsigned int)&data_ov001_020abc3c, (unsigned int)&data_ov001_020abc94, (unsigned int)&data_ov001_020abcd8,
    (unsigned int)&data_ov001_020abd18
};
#pragma section forcedata end
#pragma pop
