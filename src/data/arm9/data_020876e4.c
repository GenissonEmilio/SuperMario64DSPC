/* .data 0x020876e4..0x020876fc */
extern unsigned char data_02088388[];
extern unsigned char data_020888f0[];
extern unsigned char data_0208776c[];
extern unsigned char data_020889b0[];
extern unsigned char data_02088b14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_020876e4[6] ;
#pragma section forcedata end
#pragma pop
