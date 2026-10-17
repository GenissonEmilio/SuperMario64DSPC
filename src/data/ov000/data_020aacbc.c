/* .data 0x020aacbc..0x020aacd4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aacbc[24] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    115, 117, 95, 119, 97, 108, 107, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
