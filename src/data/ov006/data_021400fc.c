/* .data 0x021400fc..0x02140114 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_021400fc[12] = {
    47, 77, 71, 47, 115, 110, 111, 119, 109, 97, 110, 95
};

unsigned char data_ov006_02140108[12] = {
    104, 101, 97, 100, 46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
