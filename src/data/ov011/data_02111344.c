/* .data 0x02111344..0x02111348 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_02111344[4] = {
    68, 68, 68, 68
};
#pragma section forcedata end
#pragma pop
