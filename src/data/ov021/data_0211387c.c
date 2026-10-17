/* .data 0x0211387c..0x02113894 */
extern unsigned char data_ov021_02114530[];
extern unsigned char data_ov021_02113c58[];
extern unsigned char data_ov021_0211380c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_0211387c[6] = {
    0x2100, (unsigned int)&data_ov021_02114530, 0xa05, (unsigned int)&data_ov021_02113c58, 320, (unsigned int)&data_ov021_0211380c
};
#pragma section forcedata end
#pragma pop
