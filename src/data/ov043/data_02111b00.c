/* .data 0x02111b00..0x02111b10 */
extern unsigned char data_ov043_02111ca0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov043_02111b04[4] ;

extern unsigned char data_ov043_02111b00[4] ;

extern unsigned int data_ov043_02111b08[2] ;
#pragma section forcedata end
#pragma pop
