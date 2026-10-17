/* .data 0x0209214c..0x02092158 */
extern unsigned char data_02075650[];
extern unsigned char data_02075670[];
extern unsigned char data_02075690[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_0209214c[3] ;
#pragma section forcedata end
#pragma pop
