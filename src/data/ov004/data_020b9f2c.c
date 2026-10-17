/* .data 0x020b9f2c..0x020b9f30 */
extern unsigned char data_ov004_020ba4b4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9f2c[1] = {
    (unsigned int)&data_ov004_020ba4b4
};
#pragma section forcedata end
#pragma pop
