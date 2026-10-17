/* .data 0x02111abc..0x02111ad4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111abc[24] = {
    0, 0, 218, 17, 37, 226, 160, 15, 0, 0, 94, 21,
    37, 226, 160, 15, 0, 0, 250, 20, 37, 226, 160, 15
};
#pragma section forcedata end
#pragma pop
