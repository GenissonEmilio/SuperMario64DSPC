/* .data 0x02111c1c..0x02111c3c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov033_02111c1c[4] = {
    67, 76, 80, 83
};

unsigned char data_ov033_02111c20[28] = {
    8, 0, 1, 0, 224, 15, 0, 0, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
