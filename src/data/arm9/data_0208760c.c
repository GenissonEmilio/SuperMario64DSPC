/* .data 0x0208760c..0x02087614 */
extern unsigned char data_02087d10[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_0208760c[2] ;
#pragma section forcedata end
#pragma pop
