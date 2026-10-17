/* .data 0x02112468..0x02112470 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov045_02112468[8] = {
    208, 7, 208, 7, 208, 7, 208, 7
};
#pragma section forcedata end
#pragma pop
