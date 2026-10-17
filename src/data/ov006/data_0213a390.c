/* .data 0x0213a390..0x0213a3a0 */
extern unsigned char data_ov006_0213a380[];
extern unsigned char data_ov006_0213a3b8[];
extern unsigned char data_ov006_0213a3a0[];
extern unsigned char data_ov006_0213a3d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213a390[4] ;
#pragma section forcedata end
#pragma pop
