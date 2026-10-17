/* .data 0x02111cb0..0x02111cc8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov012_02111cb0[24] = {
    42, 0, 116, 9, 86, 250, 104, 247, 0, 192, 0, 0,
    0, 0, 119, 36, 80, 0, 164, 6, 186, 250, 148, 248
};
#pragma section forcedata end
#pragma pop
