/* .data 0x02111228..0x02111244 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111228[4] = {
    47, 0, 0, 0
};

unsigned char data_ov008_0211122c[24] = {
    162, 229, 0, 0, 162, 229, 0, 0, 94, 26, 0, 0,
    94, 26, 0, 16, 94, 26, 0, 0, 162, 229, 0, 32
};
#pragma section forcedata end
#pragma pop
