/* .data 0x02112464..0x02112494 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112464[12] = {
    200, 0, 144, 1, 0, 0, 0, 128, 0, 0, 1, 19
};

unsigned char data_ov010_02112470[36] = {
    54, 106, 246, 9, 38, 2, 204, 247, 54, 170, 60, 15,
    38, 2, 242, 249, 54, 138, 204, 16, 38, 2, 238, 2,
    54, 106, 196, 9, 38, 2, 114, 6, 54, 106, 234, 11
};
#pragma section forcedata end
#pragma pop
