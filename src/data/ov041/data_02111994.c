/* .data 0x02111994..0x021119b8 */
extern unsigned char data_ov041_02111884[];
extern unsigned char data_ov041_021119b8[];
extern unsigned char data_ov041_02111880[];
extern unsigned char data_ov041_02111888[];
extern unsigned char data_ov041_021118c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov041_02111994[9] ;
#pragma section forcedata end
#pragma pop
