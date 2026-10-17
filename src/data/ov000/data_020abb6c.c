/* .data 0x020abb6c..0x020abb88 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abb6c[8] = {
    100, 97, 116, 97, 47, 101, 110, 101
};

unsigned char data_ov000_020abb74[20] = {
    109, 121, 47, 112, 105, 97, 110, 111, 47, 112, 105, 97,
    110, 111, 46, 98, 109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
