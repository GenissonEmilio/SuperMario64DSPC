/* .data 0x02112490..0x021124bc */
extern unsigned char data_ov045_02112470[];
extern unsigned char data_ov045_021124bc[];
extern unsigned char data_ov045_02112940[];
extern unsigned char data_ov045_02112780[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov045_02112490[1] = {
    (unsigned int)&data_ov045_02112470
};

extern unsigned int data_ov045_02112494[2] ;

extern unsigned char data_ov045_0211249c[16] ;

extern unsigned int data_ov045_021124ac[4] ;
#pragma section forcedata end
#pragma pop
