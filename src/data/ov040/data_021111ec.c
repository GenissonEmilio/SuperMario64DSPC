/* .data 0x021111ec..0x021111fc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov040_021111ec[4] = {
    0, 0, 224, 26
};

unsigned char data_ov040_021111f0[12] = {
    224, 252, 144, 232, 0, 25, 0, 192, 0, 0, 1, 6
};
#pragma section forcedata end
#pragma pop
