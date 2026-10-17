/* .data 0x020ab888..0x020ab8a0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov000_020ab888[12] ;

extern unsigned char data_ov000_020ab894[12] ;
#pragma section forcedata end
#pragma pop
