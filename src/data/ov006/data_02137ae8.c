/* .data 0x02137ae8..0x02137af8 */
extern unsigned char data_ov006_02137ad8[];
extern unsigned char data_ov006_02137ac8[];
extern unsigned char data_ov006_02137ab8[];
extern unsigned char data_ov006_02137aa8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02137ae8[4] ;
#pragma section forcedata end
#pragma pop
