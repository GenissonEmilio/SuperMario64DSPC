/* .data 0x02111abc..0x02111ad4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov041_02111abc[24] = {
    104, 0, 38, 251, 0, 0, 0, 0, 0, 0, 255, 255,
    247, 0, 133, 254, 131, 0, 218, 244, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
