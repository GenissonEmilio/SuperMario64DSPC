/* .data 0x02113228..0x02113244 */
extern unsigned char data_ov022_02113298[];
extern unsigned char data_ov022_02113148[];
extern unsigned char data_ov022_0211317c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov022_02113228[7] = {
    (unsigned int)&data_ov022_02113298, (unsigned int)&data_ov022_02113148, 0x7400742, 0x7440743, (unsigned int)&data_ov022_0211317c, 0x6400001, 127
};
#pragma section forcedata end
#pragma pop
