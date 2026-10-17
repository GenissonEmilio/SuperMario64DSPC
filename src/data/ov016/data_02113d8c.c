/* .data 0x02113d8c..0x02113dc4 */
extern unsigned char data_ov016_021141b8[];
extern unsigned char data_ov016_02113ed8[];
extern unsigned char data_ov016_02113bcc[];
extern unsigned char data_ov016_02113c8c[];
extern unsigned char data_ov016_02113c0c[];
extern unsigned char data_ov016_02113b48[];
extern unsigned char data_ov016_02113c2c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov016_02113d8c[4] = {
    0, 108, 0, 0
};

extern unsigned int data_ov016_02113d90[6] ;

extern unsigned int data_ov016_02113da8[7] ;
#pragma section forcedata end
#pragma pop
