/* .data 0x02112420..0x02112434 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112420[8] = {
    42, 0, 20, 236, 144, 1, 62, 254
};

unsigned char data_ov010_02112428[12] = {
    0, 0, 0, 64, 0, 0, 85, 0, 75, 0, 218, 243
};
#pragma section forcedata end
#pragma pop
