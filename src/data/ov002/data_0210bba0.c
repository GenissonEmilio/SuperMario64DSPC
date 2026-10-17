/* .data 0x0210bba0..0x0210bbc8 */
extern unsigned char data_ov002_0210bbc8[];
extern unsigned char data_ov002_0210bbf8[];
extern unsigned char data_ov002_0210bb1c[];
extern unsigned char data_ov002_0210bb3c[];
extern unsigned char data_ov002_0210b9a8[];
extern unsigned char data_ov002_0210b9fc[];
extern unsigned char data_ov002_0210ba14[];
extern unsigned char data_ov002_0210ba2c[];
extern unsigned char data_ov002_0210bc28[];
extern unsigned char data_ov002_0210bc58[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210bba0[10] = {
    (unsigned int)&data_ov002_0210bbc8, (unsigned int)&data_ov002_0210bbf8, (unsigned int)&data_ov002_0210bb1c, (unsigned int)&data_ov002_0210bb3c, (unsigned int)&data_ov002_0210b9a8, (unsigned int)&data_ov002_0210b9fc, (unsigned int)&data_ov002_0210ba14, (unsigned int)&data_ov002_0210ba2c,
    (unsigned int)&data_ov002_0210bc28, (unsigned int)&data_ov002_0210bc58
};
#pragma section forcedata end
#pragma pop
