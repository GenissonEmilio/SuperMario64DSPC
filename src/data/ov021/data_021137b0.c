/* .data 0x021137b0..0x021137b8 */
extern unsigned char data_ov021_0211384c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_021137b0[2] = {
    256, (unsigned int)&data_ov021_0211384c
};
#pragma section forcedata end
#pragma pop
