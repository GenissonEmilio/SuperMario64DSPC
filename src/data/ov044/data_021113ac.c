/* .data 0x021113ac..0x021113cc */
extern unsigned char data_ov044_021113ec[];
extern unsigned char data_ov044_021113cc[];
extern unsigned char data_ov044_02111374[];
extern unsigned char data_ov044_0211137c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov044_021113ac[1] = {
    (unsigned int)&data_ov044_021113ec
};

unsigned int data_ov044_021113b0[7] = {
    (unsigned int)&data_ov044_021113cc, (unsigned int)&data_ov044_02111374, 0x769076b, 0x76d076c, (unsigned int)&data_ov044_0211137c, 0x3200001, 175
};
#pragma section forcedata end
#pragma pop
