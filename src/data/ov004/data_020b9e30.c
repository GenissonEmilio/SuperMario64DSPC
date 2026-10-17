/* .data 0x020b9e30..0x020b9e34 */
extern unsigned char data_ov004_020badac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9e30[1] = {
    (unsigned int)&data_ov004_020badac
};
#pragma section forcedata end
#pragma pop
