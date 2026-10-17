/* .data 0x0211382c..0x0211383c */
extern unsigned char data_ov021_0211381c[];
extern unsigned char data_ov021_02113770[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_0211382c[4] = {
    256, (unsigned int)&data_ov021_0211381c, 261, (unsigned int)&data_ov021_02113770
};
#pragma section forcedata end
#pragma pop
