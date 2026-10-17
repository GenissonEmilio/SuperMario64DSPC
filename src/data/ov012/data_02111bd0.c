/* .data 0x02111bd0..0x02111bdc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov012_02111bd0[4] = {
    152, 8, 152, 8
};

unsigned char data_ov012_02111bd4[8] = {
    152, 8, 152, 8, 152, 8, 0, 0
};
#pragma section forcedata end
#pragma pop
