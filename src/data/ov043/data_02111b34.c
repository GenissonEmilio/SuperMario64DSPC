/* .data 0x02111b34..0x02111b44 */
extern unsigned char data_ov043_02111fd0[];
extern unsigned char data_ov043_02111dc0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov043_02111b34[4] ;
#pragma section forcedata end
#pragma pop
