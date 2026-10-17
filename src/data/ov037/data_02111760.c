/* .data 0x02111760..0x02111780 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov037_02111760[8] = {
    39, 2, 144, 232, 11, 16, 102, 239
};

unsigned char data_ov037_02111768[24] = {
    63, 66, 200, 231, 72, 239, 224, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
