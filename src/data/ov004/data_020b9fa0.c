/* .data 0x020b9fa0..0x020b9fa4 */
extern unsigned char data_ov004_020ba4dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9fa0[1] = {
    (unsigned int)&data_ov004_020ba4dc
};
#pragma section forcedata end
#pragma pop
