/* .data 0x020b9e44..0x020b9e48 */
extern unsigned char data_ov004_020baccc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9e44[1] = {
    (unsigned int)&data_ov004_020baccc
};
#pragma section forcedata end
#pragma pop
