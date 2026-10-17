/* .data 0x02111ca0..0x02111cc8 */
extern unsigned char data_ov043_02111cc8[];
extern unsigned char data_ov043_02111b04[];
extern unsigned char data_ov043_02111d10[];
extern unsigned char data_ov043_02111b00[];
extern unsigned char data_ov043_02111b24[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov043_02111ca0[10] ;
#pragma section forcedata end
#pragma pop
