/* .data 0x02136d1c..0x02136d28 */
extern unsigned char data_ov006_02136d14[];
extern unsigned char data_ov006_02136d28[];
extern unsigned char data_ov006_02136d0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02136d1c[3] ;
#pragma section forcedata end
#pragma pop
