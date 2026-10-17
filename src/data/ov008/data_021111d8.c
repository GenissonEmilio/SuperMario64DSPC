/* .data 0x021111d8..0x021111e0 */
extern unsigned char data_ov008_02111450[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov008_021111d8[2] = {
    11, (unsigned int)&data_ov008_02111450
};
#pragma section forcedata end
#pragma pop
