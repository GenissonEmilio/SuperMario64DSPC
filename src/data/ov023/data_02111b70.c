/* .data 0x02111b70..0x02111b74 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov023_02111b70[4] = {
    200, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
