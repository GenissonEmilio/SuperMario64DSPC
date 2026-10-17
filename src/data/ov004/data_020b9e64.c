/* .data 0x020b9e64..0x020b9e68 */
extern unsigned char data_ov004_020bba14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9e64[1] = {
    (unsigned int)&data_ov004_020bba14
};
#pragma section forcedata end
#pragma pop
