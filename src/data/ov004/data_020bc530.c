/* .data 0x020bc530..0x020bc544 */
extern unsigned char data_ov004_020b9efc[];
extern unsigned char data_ov004_020b9e24[];
extern unsigned char data_ov004_020b9e44[];
extern unsigned char data_ov004_020b9e08[];
extern unsigned char data_ov004_020b9e20[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc530[5] ;
#pragma section forcedata end
#pragma pop
