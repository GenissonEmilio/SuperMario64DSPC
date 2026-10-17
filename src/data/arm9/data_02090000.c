/* .data 0x02090000..0x02090008 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_02090000[8] ;
#pragma section forcedata end
#pragma pop
