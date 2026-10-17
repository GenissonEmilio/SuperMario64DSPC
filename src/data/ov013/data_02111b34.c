/* .data 0x02111b34..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov013_02111b34[16] ;

extern unsigned char data_ov013_02111b44[32] ;
#pragma section forcedata end
#pragma pop
