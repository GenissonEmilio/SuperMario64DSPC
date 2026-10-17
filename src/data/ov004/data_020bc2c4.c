/* .data 0x020bc2c4..0x020bc2d8 */
extern unsigned char data_ov004_020b9f7c[];
extern unsigned char data_ov004_020b9e74[];
extern unsigned char data_ov004_020b9ff0[];
extern unsigned char data_ov004_020b9f9c[];
extern unsigned char data_ov004_020ba008[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc2c4[5] = {
    (unsigned int)&data_ov004_020b9f7c, (unsigned int)&data_ov004_020b9e74, (unsigned int)&data_ov004_020b9ff0, (unsigned int)&data_ov004_020b9f9c, (unsigned int)&data_ov004_020ba008
};
#pragma section forcedata end
#pragma pop
