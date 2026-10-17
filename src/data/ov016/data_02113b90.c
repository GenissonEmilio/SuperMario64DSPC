/* .data 0x02113b90..0x02113bac */
extern unsigned char data_ov016_02113dd4[];
extern unsigned char data_ov016_02113af0[];
extern unsigned char data_ov016_02113b0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov016_02113b90[7] ;
#pragma section forcedata end
#pragma pop
