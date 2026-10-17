/* .data 0x020b9f30..0x020b9f34 */
extern unsigned char data_ov004_020bbdec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9f30[1] = {
    (unsigned int)&data_ov004_020bbdec
};
#pragma section forcedata end
#pragma pop
