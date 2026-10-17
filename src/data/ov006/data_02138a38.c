/* .data 0x02138a38..0x02138a40 */
extern unsigned char data_ov006_02138a30[];
extern unsigned char data_ov006_02138a28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02138a38[2] ;
#pragma section forcedata end
#pragma pop
