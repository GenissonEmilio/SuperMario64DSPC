/* .data 0x021132d8..0x02113344 */
extern unsigned char data_ov022_021136f8[];
extern unsigned char data_ov022_021133a8[];
extern unsigned char data_ov022_021131a8[];
extern unsigned char data_ov022_021131b8[];
extern unsigned char data_ov022_02113150[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov022_021132d8[20] ;

extern unsigned char data_ov022_021132ec[44] ;

extern unsigned int data_ov022_02113318[11] ;
#pragma section forcedata end
#pragma pop
