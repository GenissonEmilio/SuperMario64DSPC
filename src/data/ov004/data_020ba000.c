/* .data 0x020ba000..0x020ba004 */
extern unsigned char data_ov004_020ba6d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020ba000[1] = {
    (unsigned int)&data_ov004_020ba6d4
};
#pragma section forcedata end
#pragma pop
