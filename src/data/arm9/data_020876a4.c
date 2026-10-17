/* .data 0x020876a4..0x020876ac */
extern unsigned char data_02088580[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_020876a4[2] ;
#pragma section forcedata end
#pragma pop
