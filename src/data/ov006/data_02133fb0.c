/* .data 0x02133fb0..0x02134028 */
extern unsigned char data_ov006_02134000[];
extern unsigned char data_ov006_02133ff0[];
extern unsigned char data_ov006_02133fe0[];
extern unsigned char data_ov006_02133fd0[];
extern unsigned char data_ov006_02133fc0[];
extern unsigned char data_ov006_02133fb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_02134000[16] ;

extern unsigned char data_ov006_02133ff0[16] ;

extern unsigned char data_ov006_02133fe0[16] ;

extern unsigned char data_ov006_02133fd0[16] ;

extern unsigned char data_ov006_02133fc0[16] ;

extern unsigned char data_ov006_02133fb0[16] ;

extern unsigned int data_ov006_02134010[6] ;
#pragma section forcedata end
#pragma pop
