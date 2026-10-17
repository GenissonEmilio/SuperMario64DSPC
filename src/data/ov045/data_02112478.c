/* .data 0x02112478..0x02112480 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov045_02112478[8] = {
    123, 7, 124, 7, 125, 7, 126, 7
};
#pragma section forcedata end
#pragma pop
