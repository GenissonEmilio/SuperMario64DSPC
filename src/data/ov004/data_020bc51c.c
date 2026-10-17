/* .data 0x020bc51c..0x020bc530 */
extern unsigned char data_ov004_020b9f60[];
extern unsigned char data_ov004_020b9e40[];
extern unsigned char data_ov004_020b9e58[];
extern unsigned char data_ov004_020b9e80[];
extern unsigned char data_ov004_020b9e3c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc51c[5] = {
    (unsigned int)&data_ov004_020b9f60, (unsigned int)&data_ov004_020b9e40, (unsigned int)&data_ov004_020b9e58, (unsigned int)&data_ov004_020b9e80, (unsigned int)&data_ov004_020b9e3c
};
#pragma section forcedata end
#pragma pop
