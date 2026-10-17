/* .data 0x02111b18..0x02111b24 */
extern unsigned char data_ov043_02111b10[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov043_02111b18[3] ;
#pragma section forcedata end
#pragma pop
