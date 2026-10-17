/* .data 0x02111a08..0x02111a14 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov047_02111a08[12] = {
    0, 0, 2, 255, 255, 127, 2, 0, 2, 255, 1, 127
};
#pragma section forcedata end
#pragma pop
