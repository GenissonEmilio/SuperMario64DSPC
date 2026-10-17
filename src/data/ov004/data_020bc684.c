/* .data 0x020bc684..0x020bc698 */
extern unsigned char data_ov004_020b9fa0[];
extern unsigned char data_ov004_020b9ecc[];
extern unsigned char data_ov004_020b9edc[];
extern unsigned char data_ov004_020b9f04[];
extern unsigned char data_ov004_020b9e9c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc684[5] = {
    (unsigned int)&data_ov004_020b9fa0, (unsigned int)&data_ov004_020b9ecc, (unsigned int)&data_ov004_020b9edc, (unsigned int)&data_ov004_020b9f04, (unsigned int)&data_ov004_020b9e9c
};
#pragma section forcedata end
#pragma pop
