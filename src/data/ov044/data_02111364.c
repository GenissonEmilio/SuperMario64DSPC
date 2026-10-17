/* .data 0x02111364..0x0211136c */
extern unsigned char data_ov044_0211142c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov044_02111364[2] = {
    0x1900, (unsigned int)&data_ov044_0211142c
};
#pragma section forcedata end
#pragma pop
