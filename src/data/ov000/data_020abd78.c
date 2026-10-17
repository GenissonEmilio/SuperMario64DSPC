/* .data 0x020abd78..0x020abd98 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abd80[8] = {
    77, 71, 47, 100, 95, 50, 100, 95
};

unsigned char data_ov000_020abd78[8] = {
    105, 116, 46, 98, 99, 97, 0, 0
};

unsigned char data_ov000_020abd88[16] = {
    109, 115, 103, 95, 100, 114, 97, 119, 95, 73, 95, 110,
    99, 103, 46, 98
};
#pragma section forcedata end
#pragma pop
