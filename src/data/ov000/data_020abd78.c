/* .data 0x020abd78..0x020abd98 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov000_020abd80[8] ;

extern unsigned char data_ov000_020abd78[8] ;

extern unsigned char data_ov000_020abd88[16] ;
#pragma section forcedata end
#pragma pop
