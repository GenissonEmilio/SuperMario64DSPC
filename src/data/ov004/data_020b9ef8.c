/* .data 0x020b9ef8..0x020b9efc */
extern unsigned char data_ov004_020ba094[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020b9ef8[1] = {
    (unsigned int)&data_ov004_020ba094
};
#pragma section forcedata end
#pragma pop
