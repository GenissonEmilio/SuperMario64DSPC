/* .data 0x021138fc..0x02113918 */
extern unsigned char data_ov020_02114668[];
extern unsigned char data_ov020_021137b4[];
extern unsigned char data_ov020_02113fb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov020_021138fc[7] ;
#pragma section forcedata end
#pragma pop
