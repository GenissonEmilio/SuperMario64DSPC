/* .data 0x0211159c..0x021115bc */
extern unsigned char data_ov046_02111538[];
extern unsigned char data_ov046_02111500[];
extern unsigned char data_ov046_021115dc[];
extern unsigned char data_ov046_0211150c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov046_0211159c[8] = {
    260, (unsigned int)&data_ov046_02111538, 267, (unsigned int)&data_ov046_02111500, 0x401, (unsigned int)&data_ov046_021115dc, 264, (unsigned int)&data_ov046_0211150c
};
#pragma section forcedata end
#pragma pop
