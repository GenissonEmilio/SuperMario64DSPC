/* .data 0x021137d8..0x021137e0 */
extern unsigned char data_ov021_02113b38[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_021137d8[2] = {
    8, (unsigned int)&data_ov021_02113b38
};
#pragma section forcedata end
#pragma pop
