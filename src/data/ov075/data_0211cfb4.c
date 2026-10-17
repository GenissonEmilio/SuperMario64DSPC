/* .data 0x0211cfb4..0x0211cfe4 */
extern unsigned char data_ov075_0211c7d0[];
extern unsigned char data_ov075_0211ca7c[];
extern unsigned char data_ov075_0211cbe4[];
extern unsigned char data_ov075_0211c924[];
extern unsigned char data_ov075_0211c710[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211cfb4[12] = {
    (unsigned int)&data_ov075_0211c7d0, 6, (unsigned int)&data_ov075_0211ca7c, 6, (unsigned int)&data_ov075_0211cbe4, 5, (unsigned int)&data_ov075_0211c924, 4,
    (unsigned int)&data_ov075_0211c710, 3, 0, 10
};
#pragma section forcedata end
#pragma pop
