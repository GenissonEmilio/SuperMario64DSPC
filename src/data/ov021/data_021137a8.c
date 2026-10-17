/* .data 0x021137a8..0x021137b0 */
extern unsigned char data_ov021_021137b0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_021137a8[2] = {
    1, (unsigned int)&data_ov021_021137b0
};
#pragma section forcedata end
#pragma pop
