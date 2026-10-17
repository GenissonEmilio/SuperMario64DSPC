/* .data 0x02112494..0x021124c4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov035_02112494[24] = {
    39, 34, 106, 255, 236, 255, 242, 249, 39, 34, 150, 0,
    236, 255, 242, 249, 39, 34, 62, 254, 236, 255, 248, 248
};

unsigned char data_ov035_021124ac[24] = {
    39, 34, 106, 255, 236, 255, 248, 248, 39, 34, 150, 0,
    236, 255, 248, 248, 39, 34, 194, 1, 236, 255, 248, 248
};
#pragma section forcedata end
#pragma pop
