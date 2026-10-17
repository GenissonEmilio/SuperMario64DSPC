/* .data 0x020bc2b0..0x020bc2c4 */
extern unsigned char data_ov004_020b9ef0[];
extern unsigned char data_ov004_020ba004[];
extern unsigned char data_ov004_020b9fe8[];
extern unsigned char data_ov004_020ba01c[];
extern unsigned char data_ov004_020b9fe4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc2b0[5] ;
#pragma section forcedata end
#pragma pop
