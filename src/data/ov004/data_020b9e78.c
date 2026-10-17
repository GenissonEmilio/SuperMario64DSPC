/* .data 0x020b9e78..0x020b9e7c */
extern unsigned char data_ov004_020bb554[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9e78[1] = {
    (unsigned int)&data_ov004_020bb554
};
#pragma section forcedata end
#pragma pop
