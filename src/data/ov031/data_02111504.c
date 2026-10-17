/* .data 0x02111504..0x02111508 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov031_02111504[4] = {
    20, 17, 17, 17
};
#pragma section forcedata end
#pragma pop
