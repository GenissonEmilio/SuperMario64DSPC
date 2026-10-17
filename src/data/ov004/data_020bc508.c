/* .data 0x020bc508..0x020bc51c */
extern unsigned char data_ov004_020b9e70[];
extern unsigned char data_ov004_020b9fc4[];
extern unsigned char data_ov004_020b9ff4[];
extern unsigned char data_ov004_020b9f4c[];
extern unsigned char data_ov004_020b9eb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc508[5] = {
    (unsigned int)&data_ov004_020b9e70, (unsigned int)&data_ov004_020b9fc4, (unsigned int)&data_ov004_020b9ff4, (unsigned int)&data_ov004_020b9f4c, (unsigned int)&data_ov004_020b9eb0
};
#pragma section forcedata end
#pragma pop
