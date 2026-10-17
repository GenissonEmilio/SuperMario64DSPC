/* .data 0x02111b60..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov023_02111b60[4] = {
    0, 25, 0, 0
};
#pragma section forcedata end
#pragma pop
