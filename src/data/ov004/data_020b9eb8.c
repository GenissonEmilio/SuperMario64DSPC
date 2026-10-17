/* .data 0x020b9eb8..0x020b9ebc */
extern unsigned char data_ov004_020babec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9eb8[1] = {
    (unsigned int)&data_ov004_020babec
};
#pragma section forcedata end
#pragma pop
