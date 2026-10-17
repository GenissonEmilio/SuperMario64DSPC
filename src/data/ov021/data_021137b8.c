/* .data 0x021137b8..0x021137c0 */
extern unsigned char data_ov021_02113788[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_021137b8[2] = {
    1, (unsigned int)&data_ov021_02113788
};
#pragma section forcedata end
#pragma pop
