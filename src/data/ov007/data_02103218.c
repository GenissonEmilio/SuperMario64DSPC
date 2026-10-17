/* .data 0x02103218..0x02103230 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov007_02103218[8] = {
    115, 111, 117, 110, 100, 0, 0, 0
};

unsigned char data_ov007_02103220[16] = {
    115, 111, 117, 110, 100, 32, 114, 101, 113, 117, 101, 115,
    116, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
