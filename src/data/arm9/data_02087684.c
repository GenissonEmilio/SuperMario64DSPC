/* .data 0x02087684..0x0208768c */
extern unsigned char data_020882c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087684[2] = {
    8, (unsigned int)&data_020882c0
};
#pragma section forcedata end
#pragma pop
