/* .data 0x02111c14..0x02111c4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov047_02111c14[12] = {
    2, 255, 62, 229, 144, 239, 182, 3, 0, 0, 0, 128
};

unsigned char data_ov047_02111c20[44] = {
    0, 0, 2, 255, 162, 23, 224, 252, 38, 2, 0, 0,
    0, 128, 0, 0, 7, 255, 56, 255, 44, 232, 198, 223,
    0, 0, 0, 0, 0, 0, 2, 255, 94, 1, 0, 25,
    34, 242, 0, 0, 0, 128, 0, 0
};
#pragma section forcedata end
#pragma pop
