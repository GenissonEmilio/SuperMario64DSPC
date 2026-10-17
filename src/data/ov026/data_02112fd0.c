/* .data 0x02112fd0..0x02112ffc */
extern unsigned char data_ov026_02112e70[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov026_02112fd0[1] = {
    (unsigned int)&data_ov026_02112e70
};

unsigned char data_ov026_02112fd4[40] = {
    67, 76, 80, 83, 8, 0, 4, 0, 197, 15, 0, 0,
    255, 0, 0, 0, 196, 79, 0, 0, 255, 0, 0, 0,
    196, 15, 0, 1, 255, 0, 0, 0, 197, 15, 0, 1,
    255, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
