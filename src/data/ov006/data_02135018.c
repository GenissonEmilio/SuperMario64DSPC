/* .data 0x02135018..0x02135024 */
extern unsigned char data_ov006_02135034[];
extern unsigned char data_ov006_02135024[];
extern unsigned char data_ov006_02135044[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02135018[3] ;
#pragma section forcedata end
#pragma pop
