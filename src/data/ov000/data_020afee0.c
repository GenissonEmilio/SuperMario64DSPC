/* .data 0x020afee0..0x020aff04 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020afee0[36] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 115,
    110, 111, 119, 109, 97, 110, 47, 115, 110, 111, 119, 95,
    98, 97, 108, 108, 46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
