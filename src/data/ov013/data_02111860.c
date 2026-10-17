/* .data 0x02111860..0x02111890 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111860[48] = {
    0, 0, 16, 255, 255, 255, 16, 0, 2, 255, 165, 127,
    18, 0, 2, 255, 254, 128, 20, 0, 15, 255, 255, 255,
    35, 0, 7, 255, 255, 255, 42, 0, 11, 255, 255, 255,
    53, 0, 13, 255, 255, 255, 66, 0, 10, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
