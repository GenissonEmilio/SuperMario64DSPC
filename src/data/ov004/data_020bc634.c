/* .data 0x020bc634..0x020bc648 */
extern unsigned char data_ov004_020b9f5c[];
extern unsigned char data_ov004_020b9f20[];
extern unsigned char data_ov004_020b9fac[];
extern unsigned char data_ov004_020ba024[];
extern unsigned char data_ov004_020b9f1c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc634[5] = {
    (unsigned int)&data_ov004_020b9f5c, (unsigned int)&data_ov004_020b9f20, (unsigned int)&data_ov004_020b9fac, (unsigned int)&data_ov004_020ba024, (unsigned int)&data_ov004_020b9f1c
};
#pragma section forcedata end
#pragma pop
