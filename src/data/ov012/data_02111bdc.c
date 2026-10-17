/* .data 0x02111bdc..0x02111c14 */
extern unsigned char data_ov012_02111cb0[];
extern unsigned char data_ov012_02111bf4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov012_02111bdc[4] ;

extern unsigned char data_ov012_02111be0[8] ;

extern unsigned char data_ov012_02111be8[12] ;

extern unsigned char data_ov012_02111bf4[16] ;

extern unsigned int data_ov012_02111c04[4] ;
#pragma section forcedata end
#pragma pop
