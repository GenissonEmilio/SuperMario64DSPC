/* .data 0x021113ac..0x02111414 */
extern unsigned char data_ov028_02111494[];
extern unsigned char data_ov028_02111390[];
extern unsigned char data_ov028_021111a4[];
extern unsigned char data_ov028_021111a0[];
extern unsigned char data_ov028_021111c4[];
extern unsigned char data_ov028_021111a8[];
extern unsigned char data_ov028_02111414[];
extern unsigned char data_ov028_02111350[];
extern unsigned char data_ov028_02111364[];
extern unsigned char data_ov028_02111370[];
extern unsigned char data_ov028_02111340[];
extern unsigned char data_ov028_02111454[];
extern unsigned char data_ov028_02111344[];
extern unsigned char data_ov028_02111380[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov028_021113ac[1] = {
    (unsigned int)&data_ov028_02111494
};

unsigned int data_ov028_021113b0[2] = {
    480, (unsigned int)&data_ov028_02111390
};

unsigned int data_ov028_021113b8[6] = {
    91, (unsigned int)&data_ov028_021111a4, (unsigned int)&data_ov028_021111a0, (unsigned int)&data_ov028_021111c4, 1, (unsigned int)&data_ov028_021111a8
};

unsigned int data_ov028_021113d0[7] = {
    (unsigned int)&data_ov028_02111414, (unsigned int)&data_ov028_02111350, 0x7b307b5, 0x7b707b6, (unsigned int)&data_ov028_02111364, 0x2bc0001, 15
};

unsigned int data_ov028_021113ec[10] = {
    260, (unsigned int)&data_ov028_02111370, 267, (unsigned int)&data_ov028_02111340, 0x401, (unsigned int)&data_ov028_02111454, 270, (unsigned int)&data_ov028_02111344,
    266, (unsigned int)&data_ov028_02111380
};
#pragma section forcedata end
#pragma pop
