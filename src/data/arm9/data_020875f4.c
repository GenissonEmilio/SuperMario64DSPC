/* .data 0x020875f4..0x020875fc */
extern unsigned char data_02088418[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_020875f4[2] ;
#pragma section forcedata end
#pragma pop
