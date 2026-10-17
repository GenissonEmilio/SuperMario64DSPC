/* .data 0x02111508..0x0211153c */
extern unsigned char data_ov057_021111a4[];
extern unsigned char data_ov057_021111c4[];
extern unsigned char data_ov057_021111a0[];
extern unsigned char data_ov057_021111a8[];
extern unsigned char data_ov057_0211157c[];
extern unsigned char data_ov057_021114b4[];
extern unsigned char data_ov057_021114cc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov057_02111508[4] = {
    105, 1, 0, 0
};

unsigned int data_ov057_0211150c[5] = {
    (unsigned int)&data_ov057_021111a4, (unsigned int)&data_ov057_021111c4, (unsigned int)&data_ov057_021111a0, 1, (unsigned int)&data_ov057_021111a8
};

unsigned int data_ov057_02111520[7] = {
    (unsigned int)&data_ov057_0211157c, (unsigned int)&data_ov057_021114b4, 0x7360738, 0x73a0739, (unsigned int)&data_ov057_021114cc, 0x7080001, 79
};
#pragma section forcedata end
#pragma pop
