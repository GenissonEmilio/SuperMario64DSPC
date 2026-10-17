/* .data 0x021379ac..0x021379dc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_021379ac[8] = {
    248, 0, 244, 65, 13, 65, 0, 0
};

unsigned char data_ov006_021379b4[40] = {
    248, 128, 4, 0, 15, 65, 0, 0, 248, 0, 12, 0,
    16, 65, 0, 0, 0, 0, 12, 0, 48, 49, 0, 0,
    248, 0, 236, 1, 12, 65, 0, 0, 0, 0, 236, 1,
    44, 49, 255, 255
};
#pragma section forcedata end
#pragma pop
