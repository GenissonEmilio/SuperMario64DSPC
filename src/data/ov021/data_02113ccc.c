/* .data 0x02113ccc..0x02113cec */
extern unsigned char data_ov021_02113780[];
extern unsigned char data_ov021_021137b8[];
extern unsigned char data_ov021_021137c8[];
extern unsigned char data_ov021_021138ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113ccc[2] = {
    (unsigned int)&data_ov021_02113780, 0
};

unsigned int data_ov021_02113cd4[6] = {
    0xdd80001, (unsigned int)&data_ov021_021137b8, 0, 0xce40001, (unsigned int)&data_ov021_021137c8, (unsigned int)&data_ov021_021138ac
};
#pragma section forcedata end
#pragma pop
