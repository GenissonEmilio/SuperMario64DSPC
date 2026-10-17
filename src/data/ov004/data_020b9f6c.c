/* .data 0x020b9f6c..0x020b9f70 */
extern unsigned char data_ov004_020bbcac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9f6c[1] = {
    (unsigned int)&data_ov004_020bbcac
};
#pragma section forcedata end
#pragma pop
