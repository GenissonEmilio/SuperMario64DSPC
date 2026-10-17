/* .data 0x02113ca8..0x02113ccc */
extern unsigned char data_ov021_021137d8[];
extern unsigned char data_ov021_02113778[];
extern unsigned char data_ov021_021137a0[];
extern unsigned char data_ov021_02113894[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113ca8[9] = {
    (unsigned int)&data_ov021_021137d8, 0, 0xbb80001, (unsigned int)&data_ov021_02113778, 0, 0xfa00001, (unsigned int)&data_ov021_021137a0, (unsigned int)&data_ov021_02113894,
    0x3e80001
};
#pragma section forcedata end
#pragma pop
