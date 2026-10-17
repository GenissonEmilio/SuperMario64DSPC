/* .data 0x0208a170..0x0208a178 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char gMgGroupBase[4] ;

extern unsigned char gMgLastSelected[4] ;
#pragma section forcedata end
#pragma pop
