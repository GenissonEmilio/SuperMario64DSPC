/* .data 0x020b9f24..0x020b9f28 */
extern unsigned char data_ov004_020bad74[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9f24[1] = {
    (unsigned int)&data_ov004_020bad74
};
#pragma section forcedata end
#pragma pop
