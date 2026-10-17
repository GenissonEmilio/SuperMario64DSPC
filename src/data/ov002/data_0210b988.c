/* .data 0x0210b988..0x0210b998 */
extern unsigned char data_ov002_0210bb5c[];
extern unsigned char data_ov002_0210ba7c[];
extern unsigned char data_ov002_0210b9cc[];
extern unsigned char data_ov002_0210ba9c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov002_0210b988[4] = {
    (unsigned int)&data_ov002_0210bb5c, (unsigned int)&data_ov002_0210ba7c, (unsigned int)&data_ov002_0210b9cc, (unsigned int)&data_ov002_0210ba9c
};
#pragma section forcedata end
#pragma pop
