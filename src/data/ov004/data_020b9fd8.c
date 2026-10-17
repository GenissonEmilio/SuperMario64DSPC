/* .data 0x020b9fd8..0x020b9fdc */
extern unsigned char data_ov004_020bb674[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9fd8[1] = {
    (unsigned int)&data_ov004_020bb674
};
#pragma section forcedata end
#pragma pop
