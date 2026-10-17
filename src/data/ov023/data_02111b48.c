/* .data 0x02111b48..0x02111b54 */
extern unsigned char data_ov023_02111b28[];
extern unsigned char data_ov023_02111b70[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov023_02111b48[3] ;
#pragma section forcedata end
#pragma pop
