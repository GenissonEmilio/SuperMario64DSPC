/* .data 0x020ba004..0x020ba008 */
extern unsigned char data_ov004_020ba3b4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov004_020ba004[1] = {
    (unsigned int)&data_ov004_020ba3b4
};
#pragma section forcedata end
#pragma pop
