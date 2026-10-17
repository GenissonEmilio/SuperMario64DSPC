/* .data 0x0211208c..0x021120a4 */
extern unsigned char data_ov035_02111bdc[];
extern unsigned char data_ov035_02111bd4[];
extern unsigned char data_ov035_02111d84[];
extern unsigned char data_ov035_02111bfc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov035_0211208c[6] ;
#pragma section forcedata end
#pragma pop
