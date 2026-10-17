/* .data 0x020bc828..0x020bc83c */
extern unsigned char data_ov006_021338c4[];
extern unsigned char data_ov006_021338ac[];
extern unsigned char data_ov006_021338b8[];
extern unsigned char data_ov006_021338a0[];
extern unsigned char data_ov006_021338d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int sMgCoinsButtonSprites[5] ;
#pragma section forcedata end
#pragma pop
