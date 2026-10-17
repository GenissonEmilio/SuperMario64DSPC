/* .data 0x020bc5e4..0x020bc5f8 */
extern unsigned char data_ov004_020b9f2c[];
extern unsigned char data_ov004_020b9e54[];
extern unsigned char data_ov004_020b9e38[];
extern unsigned char data_ov004_020b9e18[];
extern unsigned char data_ov004_020b9e1c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc5e4[5] ;
#pragma section forcedata end
#pragma pop
