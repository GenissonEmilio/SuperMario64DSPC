/* .data 0x021124c0..0x021124ec */
extern unsigned char data_ov010_021121cc[];
extern unsigned char data_ov010_021121c4[];
extern unsigned char data_ov010_0211221c[];
extern unsigned char data_ov010_021121fc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov010_021124c0[1] = {
    (unsigned int)&data_ov010_021121cc
};

extern unsigned int data_ov010_021124c4[4] ;

extern unsigned int data_ov010_021124d4[6] ;
#pragma section forcedata end
#pragma pop
