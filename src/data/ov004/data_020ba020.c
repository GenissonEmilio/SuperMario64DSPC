/* .data 0x020ba020..0x020ba024 */
extern unsigned char data_ov004_020bb804[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020ba020[1] ;
#pragma section forcedata end
#pragma pop
