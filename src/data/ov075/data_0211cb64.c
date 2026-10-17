/* .data 0x0211cb64..0x0211cb80 */
extern unsigned char data_ov075_0211c890[];
extern unsigned char data_ov075_0211d144[];
extern unsigned char data_ov075_0211c778[];
extern unsigned char data_ov075_0211d18c[];
extern unsigned char data_ov075_0211c708[];
extern unsigned char data_ov075_0211d1d4[];
extern unsigned char data_ov075_0211c6f0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211cb64[7] = {
    (unsigned int)&data_ov075_0211c890, (unsigned int)&data_ov075_0211d144, (unsigned int)&data_ov075_0211c778, (unsigned int)&data_ov075_0211d18c, (unsigned int)&data_ov075_0211c708, (unsigned int)&data_ov075_0211d1d4, (unsigned int)&data_ov075_0211c6f0
};
#pragma section forcedata end
#pragma pop
