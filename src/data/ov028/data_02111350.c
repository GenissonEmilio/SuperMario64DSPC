/* .data 0x02111350..0x02111358 */
extern unsigned char data_ov028_021113ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov028_02111350[2] = {
    5, (unsigned int)&data_ov028_021113ec
};
#pragma section forcedata end
#pragma pop
