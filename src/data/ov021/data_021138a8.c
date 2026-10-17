/* .data 0x021138a8..0x021138bc */
extern unsigned char data_ov021_02112f20[];
extern unsigned char data_ov021_02112f1c[];
extern unsigned char data_ov021_02112f10[];
extern unsigned char data_ov021_0211322c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_021138a8[1] = {
    (unsigned int)&data_ov021_02112f20
};

unsigned int data_ov021_021138ac[4] = {
    181, (unsigned int)&data_ov021_02112f1c, (unsigned int)&data_ov021_02112f10, (unsigned int)&data_ov021_0211322c
};
#pragma section forcedata end
#pragma pop
