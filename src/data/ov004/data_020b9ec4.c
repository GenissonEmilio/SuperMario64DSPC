/* .data 0x020b9ec4..0x020b9ec8 */
extern unsigned char data_ov004_020bbb7c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9ec4[1] = {
    (unsigned int)&data_ov004_020bbb7c
};
#pragma section forcedata end
#pragma pop
