/* .data 0x02111524..0x0211152c */
extern unsigned char data_ov046_0211161c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov046_02111524[2] = {
    0xb00, (unsigned int)&data_ov046_0211161c
};
#pragma section forcedata end
#pragma pop
