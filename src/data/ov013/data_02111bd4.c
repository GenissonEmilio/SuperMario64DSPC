/* .data 0x02111bd4..0x02111c20 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111bd4[12] = {
    196, 143, 5, 1, 255, 0, 0, 0, 196, 143, 5, 0
};

unsigned char data_ov013_02111be0[64] = {
    255, 0, 0, 0, 197, 15, 4, 1, 255, 0, 0, 0,
    197, 63, 4, 1, 255, 0, 0, 0, 197, 15, 4, 0,
    255, 0, 0, 0, 4, 3, 4, 1, 255, 0, 0, 0,
    1, 3, 4, 0, 255, 0, 0, 0, 4, 3, 4, 0,
    255, 0, 0, 0, 1, 35, 4, 0, 255, 0, 0, 0,
    196, 15, 140, 0
};
#pragma section forcedata end
#pragma pop
