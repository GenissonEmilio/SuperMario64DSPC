/* .data 0x020ab948..0x020ab958 */
extern unsigned char data_ov001_020ab988[];
extern unsigned char data_ov001_020ab9a8[];
extern unsigned char data_ov001_020ab968[];
extern unsigned char data_ov001_020ab958[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int _ZN3OAM10LIFE_ICONSE[4] ;
#pragma section forcedata end
#pragma pop
