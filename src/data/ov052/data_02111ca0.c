/* .data 0x02111ca0..0x02111cb0 */
extern unsigned char data_ov052_02111f44[];
extern unsigned char data_ov052_02111e04[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov052_02111ca0[4] ;
#pragma section forcedata end
#pragma pop
