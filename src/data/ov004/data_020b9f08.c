/* .data 0x020b9f08..0x020b9f0c */
extern unsigned char data_ov004_020bb47c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9f08[1] = {
    (unsigned int)&data_ov004_020bb47c
};
#pragma section forcedata end
#pragma pop
