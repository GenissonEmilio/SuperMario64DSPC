/* .data 0x020aa510..0x020aa520 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa510[16] = {
    77, 71, 47, 107, 105, 110, 111, 95, 100, 46, 98, 109,
    100, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
