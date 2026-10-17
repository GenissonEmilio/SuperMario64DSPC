/* .data 0x02089608..0x02089850 */
extern unsigned char data_02078000[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_02089608[146] ;
#pragma section forcedata end
#pragma pop
