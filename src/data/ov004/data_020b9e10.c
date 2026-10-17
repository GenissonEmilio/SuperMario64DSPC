/* .data 0x020b9e10..0x020b9e14 */
extern unsigned char data_ov004_020ba5cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9e10[1] = {
    (unsigned int)&data_ov004_020ba5cc
};
#pragma section forcedata end
#pragma pop
