/* .data 0x02113798..0x021137a0 */
extern unsigned char data_ov021_02113b78[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113798[2] = {
    9, (unsigned int)&data_ov021_02113b78
};
#pragma section forcedata end
#pragma pop
