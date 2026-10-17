/* .data 0x020bc65c..0x020bc670 */
extern unsigned char data_ov004_020b9e98[];
extern unsigned char data_ov004_020ba00c[];
extern unsigned char data_ov004_020b9f34[];
extern unsigned char data_ov004_020b9f24[];
extern unsigned char data_ov004_020b9f3c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc65c[5] = {
    (unsigned int)&data_ov004_020b9e98, (unsigned int)&data_ov004_020ba00c, (unsigned int)&data_ov004_020b9f34, (unsigned int)&data_ov004_020b9f24, (unsigned int)&data_ov004_020b9f3c
};
#pragma section forcedata end
#pragma pop
