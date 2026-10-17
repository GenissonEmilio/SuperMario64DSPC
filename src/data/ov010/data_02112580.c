/* .data 0x02112580..0x02112590 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112580[16] = {
    4, 255, 218, 253, 144, 1, 220, 5, 0, 0, 0, 128,
    0, 0, 2, 255
};
#pragma section forcedata end
#pragma pop
