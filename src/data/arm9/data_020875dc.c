/* .data 0x020875dc..0x020875e4 */
extern unsigned char data_02088040[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_020875dc[2] ;
#pragma section forcedata end
#pragma pop
