/* .data 0x020b9ec8..0x020b9ecc */
extern unsigned char data_ov004_020bb964[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9ec8[1] = {
    (unsigned int)&data_ov004_020bb964
};
#pragma section forcedata end
#pragma pop
