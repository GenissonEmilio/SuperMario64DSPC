/* .data 0x020875cc..0x020875d4 */
extern unsigned char data_02088300[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_020875cc[2] ;
#pragma section forcedata end
#pragma pop
