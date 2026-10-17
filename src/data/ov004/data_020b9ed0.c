/* .data 0x020b9ed0..0x020b9ed4 */
extern unsigned char data_ov004_020baf6c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9ed0[1] = {
    (unsigned int)&data_ov004_020baf6c
};
#pragma section forcedata end
#pragma pop
