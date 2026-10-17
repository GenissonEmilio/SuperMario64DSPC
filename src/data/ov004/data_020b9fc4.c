/* .data 0x020b9fc4..0x020b9fc8 */
extern unsigned char data_ov004_020ba054[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9fc4[1] = {
    (unsigned int)&data_ov004_020ba054
};
#pragma section forcedata end
#pragma pop
