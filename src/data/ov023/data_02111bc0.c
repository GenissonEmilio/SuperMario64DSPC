/* .data 0x02111bc0..0x02111bd4 */
extern unsigned char data_ov023_02111c98[];
extern unsigned char data_ov023_02111b54[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov023_02111bc0[5] ;
#pragma section forcedata end
#pragma pop
