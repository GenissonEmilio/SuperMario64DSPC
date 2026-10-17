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
extern unsigned int data_ov004_020bc51c[5] ;
#pragma section forcedata end
#pragma pop
