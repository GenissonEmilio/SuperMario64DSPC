/* .data 0x02113b90..0x02113bc0 */
extern unsigned char data_ov021_02113764[];
extern unsigned char data_ov021_02113c08[];
extern unsigned char data_ov021_02113790[];
extern unsigned char data_ov021_02113dd8[];
extern unsigned char data_ov021_02113760[];
extern unsigned char data_ov021_021137ec[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113b90[12] = {
    523, (unsigned int)&data_ov021_02113764, 0x501, (unsigned int)&data_ov021_02113c08, 264, (unsigned int)&data_ov021_02113790, 0xc09, (unsigned int)&data_ov021_02113dd8,
    270, (unsigned int)&data_ov021_02113760, 266, (unsigned int)&data_ov021_021137ec
};
#pragma section forcedata end
#pragma pop
