/* .data 0x020aeaac..0x020aeacc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aeaac[32] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    116, 120, 95, 114, 101, 116, 117, 114, 110, 95, 100, 111,
    119, 110, 46, 98, 116, 112, 0, 0
};
#pragma section forcedata end
#pragma pop
