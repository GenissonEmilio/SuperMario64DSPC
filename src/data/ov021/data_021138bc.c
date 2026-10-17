/* .data 0x021138bc..0x021138d8 */
extern unsigned char data_ov021_02112f3c[];
extern unsigned char data_ov021_02114068[];
extern unsigned char data_ov021_02113798[];
extern unsigned char data_ov021_02113ca8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_021138bc[2] = {
    1, (unsigned int)&data_ov021_02112f3c
};

unsigned int data_ov021_021138c4[5] = {
    (unsigned int)&data_ov021_02114068, (unsigned int)&data_ov021_02113798, 0x7060709, 0x70b070a, (unsigned int)&data_ov021_02113ca8
};
#pragma section forcedata end
#pragma pop
