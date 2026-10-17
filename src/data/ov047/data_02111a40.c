/* .data 0x02111a40..0x02111a74 */
extern unsigned char data_ov047_02111cd4[];
extern unsigned char data_ov047_021119e0[];
extern unsigned char data_ov047_02111a14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov047_02111a4c[12] ;

extern unsigned char data_ov047_02111a40[12] ;

extern unsigned int data_ov047_02111a58[7] ;
#pragma section forcedata end
#pragma pop
