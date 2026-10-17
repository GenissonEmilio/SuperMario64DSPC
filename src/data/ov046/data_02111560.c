/* .data 0x02111560..0x0211157c */
extern unsigned char data_ov046_0211157c[];
extern unsigned char data_ov046_02111514[];
extern unsigned char data_ov046_0211152c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov046_02111560[7] = {
    (unsigned int)&data_ov046_0211157c, (unsigned int)&data_ov046_02111514, 0x7750777, 0x7790778, (unsigned int)&data_ov046_0211152c, 0x5780001, 127
};
#pragma section forcedata end
#pragma pop
