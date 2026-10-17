/* .data 0x0209a470..0x0209a490 */
extern unsigned char data_0209a41c[];
extern unsigned char data_0209a450[];
extern unsigned char data_0209a444[];
extern unsigned char data_0209a42c[];
extern unsigned char data_0209a418[];
extern unsigned char data_0209a490[];
extern unsigned char data_0209a55c[];
extern unsigned char data_0209a414[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_0209a470[8] = {
    (unsigned int)&data_0209a41c, (unsigned int)&data_0209a450, (unsigned int)&data_0209a444, (unsigned int)&data_0209a42c, (unsigned int)&data_0209a418, (unsigned int)&data_0209a490, (unsigned int)&data_0209a55c, (unsigned int)&data_0209a414
};
#pragma section forcedata end
#pragma pop
