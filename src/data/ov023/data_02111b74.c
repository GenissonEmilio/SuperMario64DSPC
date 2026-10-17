/* .data 0x02111b74..0x02111b88 */
extern unsigned char data_ov023_02111764[];
extern unsigned char data_ov023_02111760[];
extern unsigned char data_ov023_02111784[];
extern unsigned char data_ov023_02111768[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov023_02111b74[5] ;
#pragma section forcedata end
#pragma pop
