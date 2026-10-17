/* .data 0x020acccc..0x020accec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov000_020acccc[32] ;
#pragma section forcedata end
#pragma pop
