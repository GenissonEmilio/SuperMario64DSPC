/* .data 0x02111a30..0x02111a40 */
extern unsigned char data_ov047_02111ecc[];
extern unsigned char data_ov047_02111d54[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov047_02111a30[4] ;
#pragma section forcedata end
#pragma pop
