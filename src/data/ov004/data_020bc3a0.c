/* .data 0x020bc3a0..0x020bc3b4 */
extern unsigned char data_ov004_020b9e7c[];
extern unsigned char data_ov004_020ba028[];
extern unsigned char data_ov004_020b9eb4[];
extern unsigned char data_ov004_020b9f50[];
extern unsigned char data_ov004_020b9ec4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020bc3a0[5] = {
    (unsigned int)&data_ov004_020b9e7c, (unsigned int)&data_ov004_020ba028, (unsigned int)&data_ov004_020b9eb4, (unsigned int)&data_ov004_020b9f50, (unsigned int)&data_ov004_020b9ec4
};
#pragma section forcedata end
#pragma pop
