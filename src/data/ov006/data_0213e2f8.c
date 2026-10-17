/* .data 0x0213e2f8..0x0213e300 */
extern unsigned char RouletteBoard_StateSlow[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_RouletteBoard_StateSlow[2] = {
    (unsigned int)&RouletteBoard_StateSlow, 0
};
#pragma section forcedata end
#pragma pop
